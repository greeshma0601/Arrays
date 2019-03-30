/*
Finding-Pairs
For N number of alphabet pairs(in upper or lower case), count the occurrence of the given alphabet pairs in a string S of size M. Output the number of pairs found in the string S, out of total N pairs.
Note: Finding the pair means finding both the characters in a particular pair in the string.

Input:
First line of input is an integer T, denoting the number of test cases. For each test case, enter two integers N and M on the same line, denoting the number of pairs of alphabets to be searched for and the size of the string S, respectively. Next line of input comprises of the N alphabet pairs separated by a single space in between. The last line of input comprises of the string S of size M.

Output:
The only line of output for each test case is an integer that tells the number of pairs (<=N) that occured in the string S. If no pair is found, the output will be zero.

Constraints:
1<=T<=100
1<=N<=10
2<=M<=20

Example:
Input:
3
3 5
A G d i P o
APiod
1 3
r e
ghe
3 6
F E n O F s
FOrnEs
Output:
2
0
3
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
 int n,m;
 cin>>n>>m;
 string s;
 char a[n],b[n];
 
 for(int i=0;i<n;i++)
 {cin>>a[i];cin>>b[i];}
vector<char>v(m);
for(int i=0;i<m;i++)
cin>>v[i];
int c=0;
for(int i=0;i<n;i++)
{
auto it1 = std::find (v.begin(), v.end(), a[i]); 
auto it2 = find (v.begin(), v.end(), b[i]); 
    if(it1!=v.end() && it2!=v.end())
    {
        c++;
    }
}
 cout<<c;
 cout<<endl;
 }
	//code
	return 0;
}
