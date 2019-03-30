/*
Winner of an election Submissions: 4931   Accuracy: 41.03%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Geeks Classes in Noida More
        
Problems
Given an array of names (consisting of lowercase characters) of candidates in an election. A candidate name in array represents a vote casted to the candidate. Print the name of candidate that received Max votes. If there is tie, print lexicographically smaller name.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows. Each testcase contains two lines:-
The number of votes cast N
The name of the candidates separated by a space. Each name represents one vote casted to that candidate.

Output:
For each testcase, print the name of the candidate with the maximum votes, and also print the votes casted for the candidate. The name and votes are separated by a space.

Constraints:
1 <= T <= 100
1 <= N <= 105

Example:
Input:
2
13
john johnny jackie johnny john jackie jamie jamie john johnny jamie johnny john
3
andy blake clark

Output:
john 4
andy 1

Explanation:
Testcase1: john has 4 votes casted for him, but so does johny. john is lexicographically smaller, so we print john and the votes he received.
Testcase2: All the candidates get 1 votes each. We print andy as it is lexicographically smaller.
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool compare(const pair<string, int>&a, const pair<string, int>&b)
{
   return a.second<b.second;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int n;
 cin>>n;
 map<string,int>m;
 while(n--)
 {
     string s;
     cin>>s;
     m[s]++;
 }
 int maxn = max_element(m.begin(), m.end(), compare)->second;
 string s1=max_element(m.begin(), m.end(), compare)->first;
 cout<<s1<< " "<<maxn<<endl;
 }
	//code
	return 0;
}
