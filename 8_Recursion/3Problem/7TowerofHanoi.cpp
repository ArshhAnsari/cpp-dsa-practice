#include <iostream>
using namespace std;

void TOH(int n, int A, int B, int C) {
    if (n > 0) {
        TOH(n - 1, A, C, B);
        cout << "(" << A << "," << C << ")" << endl;
        TOH(n - 1, B, A, C);
    }
}

int main() {
    TOH(4, 1, 2, 3);
    return 0;
}

//Tower of Hanoi
/*
#include <iostream>
using namespace std;

// Function to perform Tower of Hanoi
void towerOfHanoi(int n, int source, int helper, int destination) {
    // Base case: If only one disk is there, move it from source to destination
    if (n == 1) {
        cout << "-->Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to helper using destination as auxiliary
    towerOfHanoi(n - 1, source, destination, helper);

    // Move the nth disk from source to destination
    cout << "-->Move disk " << n << " from " << source << " to " << destination << endl;

    // Move the n-1 disks from helper to destination using source as auxiliary
    towerOfHanoi(n - 1, helper, source, destination);
}

int main() {
    int numDisks;      // Number of disks
    cout << "Enter the number of disks in tower to move: ";
    cin >> numDisks;
    int sourcePeg = 1; // Source peg
    int helperPeg = 2; // Helper peg
    int destinationPeg = 3; // Destination peg

    cout << "Tower of Hanoi solution with " << numDisks << " disks:" << endl;
    towerOfHanoi(numDisks, sourcePeg, helperPeg, destinationPeg);

    return 0;
}
*/
