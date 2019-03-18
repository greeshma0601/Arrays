/*
Sum of fifth powers of the first n natural numbers Submissions: 3921   Accuracy: 19.58%   Difficulty: Basic   Marks: 1
        
Problems
Discussions
You will be given a number N. Your task is to find sum of Fifth powers of the first N natural numbers 15 + 25+ 35 + 45+ …….+ N5 till N-th term.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows, a single line of the input containing a positive integer N.

Output:
For each test-case, print sum of Fifth powers of the first N natural numbers 15 + 25+ 35 + 45+ …….+ N5 till N-th term.

Constraints:
1 <= T <= 1000
1 <= N <= 1000

Example:

Input:
3
1
2
3

Output:
1
33
276

Explanation:

For testcase 2: The first 2 natural numbers are 1 and 2. So 15+25=1+32=33
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
unsigned long long  int n;
 cin>>n;unsigned long long int r=0;
 for(unsigned long long int i=1;i<=n;i++)
 {
     r+=i*i*i*i*i;
 }
 cout<<r<<endl;
 }
	//code
	return 0;
}
