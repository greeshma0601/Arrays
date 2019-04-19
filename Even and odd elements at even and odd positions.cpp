/*
Even and odd elements at even and odd positions Submissions: 11159   Accuracy: 24.05%   Difficulty: Easy   Marks: 2
      
Problems
Given an array. The task is to arrange the array such that odd elements occupy the odd positions and even elements occupy the even positions. The order of elements must remain same. Consider zero-based indexing. After printing according to conditions, if remaining, print the remaining elements as it is.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

Output:
For each test case, in a new line print the arranged array.

Constraints:
1<=T<=100
1<=N<=105
1<=A[i]<=105

Example:
Input:
2
6
1 2 3 4 5 6
4
3 2 4 1
Output:
2 1 4 3 6 5
2 3 4 1
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
 int n,i;cin>>n;
 int a[n];
  vector<int>v1,v2;
 for(i=0;i<n;i++)
 {
     cin>>a[i];
     if(a[i]%2!=0)v1.push_back(a[i]);
     else v2.push_back(a[i]);
 }
 int n1=v1.size();
 int n2=v2.size();
 int m1,m2;
 int f=0;
 if(n1>n2)
 f=1;
 if(f)
 {
     for(i=0;i<n2;i++)
     {
         cout<<v2[i]<<" "<<v1[i]<<" ";
     }
     for(int j=i;j<n1;j++)cout<<v1[j]<<" ";
     cout<<endl;
 }
 if(!f)
 {
      for(i=0;i<n1;i++)
     {
         cout<<v2[i]<<" "<<v1[i]<<" ";
     }
     for(int j=i;j<n2;j++)cout<<v2[j]<<" ";
     cout<<endl;
 }
 
 
 
     
 }
	//code
	return 0;
}
//O(1)
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        int a[m+2]={0};
        int o=1,e=0;
        int c;
        for(int i=0;i<m;i++)
        {
            cin>>c;
            if(c%2==0)
            {
                a[e]=c;
                e=e+2;
            }
            else
            {
                a[o]=c;
                o=o+2;
            }
        }
        int l;
        if(o>e)
          l=o;
          else
          l=e;
          for(int i=0;i<l;i++)
          {
              if(a[i]==0)
              continue;
              cout<<a[i]<<" ";
          }
          cout<<endl;
    }
}
