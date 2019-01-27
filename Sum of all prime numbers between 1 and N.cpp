/*
Sum of all prime numbers between 1 and N. Submissions: 17669   Accuracy: 22.27%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation   Sudo Placement [IITs]
        
Given a positive integer N, calculate the sum of all prime numbers between 1 and N(inclusive).

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains one line of input containing N.

Output:
For each testcase, in a new line, print the sum of all prime numbers between 1 and N.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106

Example:
Input:
2
5
10
Output:
10
17

** For More Input/Output Examples Use 'Expected Output' option **

*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
   int t;
   cin>>t;
   while(t--)
   {
        int n;
        cin>>n;
        bool prime[n+1];
     memset(prime, true, sizeof(prime));
     for (int i=2; i*i<n; i++)
     {
         if(prime[i]==true)
         for(int j=i*i; j<=n; j+=i)
         {
             prime[j]=false;
         }
     }
    long long int count=0;
     for(int p=2; p<=n; p++)
     {
         if(prime[p]==true)
          count+=p;
     }
        cout<<count<<endl;
        
   }
	//code
	return 0;
}
