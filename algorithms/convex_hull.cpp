#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

struct Point {
    int x, y;
};

Point p0;

// Distance squared
int distSq(Point p1, Point p2) {
    return (p1.x - p2.x)*(p1.x - p2.x) +
           (p1.y - p2.y)*(p1.y - p2.y);
}

// Orientation
int orientation(Point p, Point q, Point r) {
    int val = (q.y - p.y)*(r.x - q.x) -
              (q.x - p.x)*(r.y - q.y);

    if (val == 0) return 0;       // collinear
    return (val > 0)? 1 : 2;      // clockwise or counterclockwise
}

// Compare function for sorting
bool compare(Point p1, Point p2) {
    int o = orientation(p0, p1, p2);
    if (o == 0)
        return distSq(p0, p2) >= distSq(p0, p1);
    return (o == 2);
}

// Convex Hull function
void convexHull(Point points[], int n) {

    // Step 1: Find bottom-most point
    int ymin = points[0].y, min = 0;
    for (int i = 1; i < n; i++) {
        if ((points[i].y < ymin) ||
            (points[i].y == ymin &&
             points[i].x < points[min].x)) {
            ymin = points[i].y;
            min = i;
        }
    }

    swap(points[0], points[min]);
    p0 = points[0];

    // Step 2: Sort by polar angle
    sort(points + 1, points + n, compare);

    stack<Point> S;
    S.push(points[0]);
    S.push(points[1]);
    S.push(points[2]);

    for (int i = 3; i < n; i++) {
        while (S.size() > 1) {
            Point top = S.top(); S.pop();
            Point nextTop = S.top();

            if (orientation(nextTop, top, points[i]) != 2) {
                continue;
            } else {
                S.push(top);
                break;
            }
        }
        S.push(points[i]);
    }

    cout << "Convex Hull Points:\n";
    while (!S.empty()) {
        Point p = S.top();
        cout << "(" << p.x << ", " << p.y << ")\n";
        S.pop();
    }
}

int main() {

    int n;
    cout << "Enter number of points: ";
    cin >> n;

    Point points[n];

    cout << "Enter x and y coordinates:\n";
    for(int i = 0; i < n; i++)
        cin >> points[i].x >> points[i].y;

    convexHull(points, n);

    return 0;
}
