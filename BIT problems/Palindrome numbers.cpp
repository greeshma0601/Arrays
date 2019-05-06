/*
Palindrome numbers Submissions: 3503   Accuracy: 39.09%   Difficulty: Easy   Marks: 2
      
Problems
Check if binary representation of a number is palindrome
Input:
The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N.


Output:
Each seperate line showing output 0(False) or 1 (True).


Constraints:
1 ≤ T ≤ 30
1 ≤ N ≤ 1018


Example:
 Input:
2
999
17

Output:
0
1
*/
#include<iostream>
using namespace std;

string binary(long long int x)
{
    string k="";
    
    while(x != 0)
    {
        k = k + (char)(x%2);
        x /= 2;
    }
    return k;
}

int main() {
    int t,i,l;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        string s = binary(n);
        l = s.size();
        int flag = 0;
        for(i=0;i<l;i++)
        {
            if(s[i] != s[l-i-1])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout << "0\n";
        else
            cout << "1\n";
    }
	return 0;
}
