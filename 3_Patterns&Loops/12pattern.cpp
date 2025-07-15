#include<bits/stdc++.h>
using namespace std;
/* Known as a "Rangoli" pattern, a "Concentric Square" pattern;
the pattern consists of nested squares, each with decreasing integers, giving a concentric effect.
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3

*/
void printpattern(int n){
    for (int i = 0; i < 2 * n - 1;i++){
        for (int j = 0; j < 2 * n - 1;j++){
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            /*
            For each position (i, j) in the grid, we calculate four distances:

            top: Distance from the top edge, which is i.
            left: Distance from the left edge, which is j.
            right: Distance from the right edge, calculated as (2 * n - 2) - j.
            down: Distance from the bottom edge, calculated as (2 * n - 2) - i.
            */
            cout << (n - min(min(top, down), min(left, right)))<<" ";
/* ^Explanation^
Calculate Minimum Distance to the Nearest Edge:

- min(min(top, down), min(left, right))
--> min(left, right): This calculates the minimum distance between the current position and the left or right edge.
--> min(top, down): This calculates the minimum distance between the current position and the top or bottom edge.
--> min(min(top, down), min(left, right)): Finally, this finds the minimum distance to any of the four edges (top, bottom, left, right) for the current position (i, j).

Calculate the Value to Print:

n - min(min(top, down), min(left, right))
n is the maximum value that will be at the center of the pattern.
Subtracting the minimum distance to any edge from n gives us the value for the current position.
This ensures that the numbers decrease as you move from the center of the pattern towards any edge.

Example
Let's see how this works with n = 3:

The size of the grid will be 2*n - 1 = 5.
For (0, 0):

top = 0
left = 0
right = 4
down = 4
Minimum distance = min(min(0, 4), min(0, 4)) = 0
Value = n - 0 = 3
For (2, 2):

top = 2
left = 2
right = 2
down = 2
Minimum distance = min(min(2, 2), min(2, 2)) = 2
Value = n - 2 = 1
For (4, 4):

top = 4
left = 4
right = 0
down = 0
Minimum distance = min(min(4, 0), min(4, 0)) = 0
Value = n - 0 = 3
This process is repeated for every cell (i, j) in the grid, resulting in the symmetrical pattern.
*/

        }
        cout << endl;
    }
}

void usinArray(int n){
    int size = 2 * n - 1;
    int arr[size][size];

    int start=0;
    int end = size - 1;
    int num = n;

    //Array ko fill karna hai sabi elements se 
    while (num>0)
    {
        for (int i = start; i <= end;i++){
            for (int j = start; j <= end;j++){
                if(i==start||i==end||j==start||j==end)
                    arr[i][j] = num;
                }
            }
            start++;
            end--;
            num--;
    }
    // Ab store hue pure elements ko print karna hai
    for (int i = 0; i < size;i++){
        for (int j = 0; j < size;j++){
            cout << arr[i][j]<<" ";
            }
            cout << endl;
        }
    }

int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    //printpattern(n);
    usinArray(n);
    return 0;
}