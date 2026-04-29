//Given a set of cities and distances between them.
//find the shortest possible route that visits every city exactly once and returns to the starting city.

#include <iostream>
#include <climits>
using namespace std;

#define INF INT_MAX
#define MAXN 20

int n;
int cost[MAXN][MAXN];
int dp[1 << MAXN][MAXN];

int tsp(int mask, int pos) {
	
    if(mask == (1 << n) - 1)
        return cost[pos][0];  // if all city visited, go to starting city
    if(dp[mask][pos] != -1)
        return dp[mask][pos]; // if already visited, reuse result

    int ans = INF;

    for(int city = 0; city < n; city++) {   // go to each city
        if((mask & (1 << city)) == 0) {     // if bit=0 thus city not visited so we can go there
            int newAns = cost[pos][city] +  // cost to go to the city 
                         tsp(mask | (1 << city), city);  // mark city as visited
            if(newAns < ans)  // choose minimum ie. best path
                ans = newAns;
        }
    }
    return dp[mask][pos] = ans;  //store result
}

int main() {

    cout << "Enter number of cities: ";
    cin >> n;
    cout << "\nEnter cost matrix:\n";
    cout << "(Enter cost from city i to city j)\n\n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "cost[" << i << "][" << j << "] = ";
            cin >> cost[i][j];
        }
        cout << endl;
    }

    // Initialize DP table
    for(int i = 0; i < (1 << n); i++)
        for(int j = 0; j < n; j++)
            dp[i][j] = -1;

    int result = tsp(1, 0);

    cout << "\nMinimum travelling cost: " << result << endl;

    return 0;
}
