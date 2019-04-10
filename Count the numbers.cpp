/*
Count the numbers Submissions: 6371   Accuracy: 34.45%   Difficulty: Basic   Marks: 1
      
Problems
Given a number N, count the numbers from 1 to N which comprise of digits, only in set 1, 2, 3, 4 and 5. 

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consist of one line. Each line of each test case is N, where N is the range from 1 to N.

Output:
Print the count of numbers in the given range from 1 to N.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 103

Example:
Input:
2
100
10
Output:
30
5

Explanation:
When N is 20 then answer is 10 because 1 2 3 4 5 11 12 13 14 15 are only in given set. 16 is not beause 6 is not in given set, only 1 2 3 4 5 in set.
*/

include<bits/stdc++.h>
#include<iostream>
using namespace std;
int c(string s)
{
//cout<<s[0]<<" ";
int cn=0;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]== '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5')
        {
          cn=1;
        }
        else
        {
            return 0;
        }
    }
    return cn;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;int cn=1;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 for(int i=1;i<=n;i++)
 {
     cn=cn+c(to_string(i));
 }
 cout<<cn-1<<endl;
 }
	//code
	return 0;
}
