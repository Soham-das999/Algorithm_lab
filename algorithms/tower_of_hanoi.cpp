// The Tower of Hanoi is a classic mathematical puzzle involving three rods (A, B, and C) and n disks of different sizes.
//  Initially, all disks are stacked on rod A in decreasing order of diameter - the largest disk at the bottom and the smallest at the top.
// Goal is to move the entire stack to another rod (rod C) while following these rules:

// Move only one disk at a time.
// At each step, you can take the top disk from any rod and place it on another rod.
// A disk can only be moved if it is the topmost disk of a rod.
// No larger disk may be placed on top of a smaller disk.

#include <iostream>
#include <cmath>  //for pow()
using namespace std;

void TOH(int n, char from, char to, char aux){
    if (n == 0) {
        return;
    }
    TOH(n - 1, from, aux, to);
    cout << "Disk " << n << " moved from " << from
         << " to " << to << endl;
    TOH(n - 1, aux, to, from);
}

int main(){
    int n = 3;
    TOH(n, 'A', 'C', 'B');
    cout << "number of steps : "<< pow(2,n) - 1;
    return 0;
}