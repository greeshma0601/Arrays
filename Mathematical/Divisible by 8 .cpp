/*

Divisible by 8 Submissions: 3752   Accuracy: 29.57%   Difficulty: Medium   Marks: 4
         
Problems
Given a number, you need to check whether any permutation of the number is divisible by 8 or not. Print Yes or No.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of one line. The first line of each test case consists of an integer N.

Output:
Corresponding to each test case, in a new line, print Yes if divisible by 8, else No.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 100000

Example:

Input
2
46
345

Output
Yes

No

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
int n;cin>>n;
string s=to_string(n);
sort(s.begin(),s.end());
int f=0;
do{
    int a=stoi(s);
    if(a%8 == 0)
    {f=1;break;}
}while(next_permutation(s.begin(),s.end()));
if(!f) {cout<<"No"<<endl;}
else{
    cout<<"Yes"<<endl;
}
 }
	//code
	return 0;
}
