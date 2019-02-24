/*
Return two prime numbers Submissions: 7223   Accuracy: 60.58%   Difficulty: Hard   Marks: 8
Associated Course(s):   Sudo Placement [IITs]
          
Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number. There are several combinations possible. Print only first such pair. 

NOTE: A solution will always exist, read Goldbach’s conjecture.

Also, solve the problem in linear time complexity, i.e., O(n).

 

Input:

The first line contains T, the number of test cases. The following T lines consist of a number each, for which we'll find two prime numbers.

Note: The number would always be an even number.

 
Output:

For every test case print two prime numbers space separated, such that the smaller number appears first. Answer for each test case must be in a new line.


Constraints:

1 ≤ T ≤ 70
1 ≤ N ≤ 10000


Example:

Input:

5
74
1024
66 
8
9990

Output:

3 71
3 1021
5 61
3 5
17 9973

 

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
