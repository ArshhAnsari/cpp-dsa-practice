#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
void printdivisors(int n){
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout << i << " ";
        }
        
    }
    }

void printdivisor(int n){
    vector<int> ls;
    
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            ls.push_back(i);
            if(n/i!=i)
                ls.push_back(n / i);
        }
/*
1. Finding Divisors:
We are finding divisors of 36. Here's how the loop works:

We loop from 1 to sqrt(36) which is 6.
For each i from 1 to 6, we check if 36 % i == 0. If it's true, we know that i is a divisor of 36. We also add 36/i as another divisor (if it's not the same as i).
Here's what happens for each i:

i = 1: 36 % 1 == 0 → divisors: 1 and 36
i = 2: 36 % 2 == 0 → divisors: 2 and 18
i = 3: 36 % 3 == 0 → divisors: 3 and 12
i = 4: 36 % 4 == 0 → divisors: 4 and 9
i = 5: 36 % 5 != 0 → nothing added
i = 6: 36 % 6 == 0 → divisors: 6 (only 6 is added because 36/6 = 6)
At the end of this loop, our list of divisors is: {1, 36, 2, 18, 3, 12, 4, 9, 6}.

Time for this step: We only loop up to sqrt(36) which is 6. So, it takes O(sqrt(n)) time to find divisors. In this case, it loops 6 times.
*/    
    }
    
    sort(ls.begin(), ls.end());
/*
2. Sorting the Divisors:
Now we have a list of divisors: {1, 36, 2, 18, 3, 12, 4, 9, 6}. We need to sort this list.

After sorting, the divisors look like this: {1, 2, 3, 4, 6, 9, 12, 18, 36}.

Time for sorting: Sorting takes time based on the number of divisors. Here, we have 9 divisors. Sorting takes O(k log k) time, where k is the number of divisors. Since k ≈ sqrt(36) * 2 = 9, sorting takes O(9 log 9) time, which is not too much.
*/

    for(auto it:ls)
        cout << it << " ";
/*
Time for printing: There are 9 divisors, so this takes O(k) time, where k is the number of divisors. In this case, it takes O(9).

*/
    }
/*
Final Time Complexity:
Finding divisors: O(sqrt(n))
Sorting divisors: O(sqrt(n) log(sqrt(n)))
Printing divisors: O(sqrt(n))
For the number 36, since sqrt(36) = 6, the complexity is dominated by sorting and overall time complexity becomes roughly O(sqrt(n) log n). For n = 36, it takes O(6 log 36) steps.

In simpler terms:

Finding divisors: The loop runs about 6 times.
Sorting divisors: Sorting takes a bit longer, but not much.
Printing: Just printing 9 divisors, which is fast.
The time mainly depends on how big n is and the number of divisors you need to find.
*/
int main() {
    int n;
    cin >> n;
    //printdivisors(n);//time complexity is O(n)
    printdivisor(n);

    return 0;
}