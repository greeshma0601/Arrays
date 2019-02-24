/*
Sum Of Prime Submissions: 4916   Accuracy: 26.28%   Difficulty: Medium   Marks: 4
     
Given a number (greater than 2), print two prime numbers whose sum will be equal to given number, else print -1 if no such number exists.

NOTE: A solution will always exist if the number is even. Read Goldbach’s conjecture.

If [a, b] is one solution with a <= b, and [c, d] is another solution with c <= d, and a < c then print [a, b] only
and not all possible solutions.

Input:
The first line contains an integer T, depicting total number of test cases. Then following T lines contains an integer N.

Output:
Print the two prime numbers in a single line with space in between.

Constraints:
1 ≤ T ≤ 50
2 ≤ N ≤ 1000000

Example:
Input:
2
8
3
Output
3 5
-1

Explanation:
Testcase 1: two prime numbers from 1 to 8 are 3 and 5 whose sum is 8.

*/

#include <iostream>
using namespace std;

// Function to check if a number is prime or not. Time complexity O(sqrt(n))
bool isPrime(int n)
{
    if (n == 0 || n == 1)
        return false;
        
    for (int i = 2; i * i <= n; ++i) 
        if (n % i == 0)
            return false;
            
    return true;
}

int main() {
	//code
	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool check = false;
        for (int i = 0; i <= n / 2; i++)
        {
            if (isPrime(i) && isPrime(n - i))
            {
                cout << i << " " << n - i << endl;
                check = true;
                break;
            }
        }
        if (!check)
            cout << "-1" << endl;
    }
	return 0;
}
