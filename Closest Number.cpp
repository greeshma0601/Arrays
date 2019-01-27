/*
Closest Number Submissions: 22588   Accuracy: 26.68%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation
        
Given non-zero two integers N and M. The problem is to find the number closest to N and divisible by M. If there are more than one such number, then output the one having maximum absolute value.

Input:
The first line consists of an integer T i.e number of test cases. T testcases follow.  The first and only line of each test case contains two space separated integers N and M.

Output:
For each testcase, in a new line, print the closest number to N which is also divisible by M.

Constraints: 
1 <= T <= 100
-1000 <= N, M <= 1000

Example:
Input:
2
13 4
-15 6
Output:
12
-18

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
    cin>>n>>m;
    int count1=0,count2=0,result1,result2;
    int intial1=n;
    
    
    while(intial1%m!=0)
    {
        count1++;
        intial1++;
    }
     result1=intial1;
    int intial2=n;
    
    while(intial2%m!=0)
    {
        count2++;
        intial2--;
    }
     result2=intial2;
     
     if(count1==count2)
	{
	    if(abs(result1)>abs(result2))
	    {
	        cout<<result1<<endl;
	    }
	    else 
	    cout<<result2<<endl;
	}
     
   else if(count1<count2)
    {
        cout<<result1<<endl;
    }
    else
    cout<<result2<<endl;
	}
	
	
	return 0;
}
