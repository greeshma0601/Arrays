/*
Practice
Explore  Courses
    
LIVE   BATCHES
Kth distance
Given an unsorted array A of size N that may contain duplicates. Also given a number K which is smaller than size of array. Find if array contains duplicates within k distance.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is K and N, K is the distance and N is the size of array. The second line of each test case contains N elements.

Output:
Print "True" if array contains duplicates within k distance else False.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 ≤ K ≤ N
1 ≤ A[i] ≤ 107

Example:
Input:
4
3 8
1 2 3 4 1 2 3 4
3 6
1 2 3 1 4 5
3 5
1 2 3 4 5
3 5
1 2 3 4 4

Output:
False
True
False
True

Explanation:
Testcase 1: 1 is present twice in subarray starting from 1 (0-based index) and ending at 4.
 


*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool dup(int a[],int n,int k)
{
    set<int>s;
    for(int i=0;i<n;i++)
    {
        if(s.find(a[i])!=s.end())
        {
            return 1;
        }
        s.insert(a[i]);
        if(i>=k)
        s.erase(a[i-k]);
    }
    return 0;
}

int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
  int n,k,i;
  cin>>k>>n;
  int a[n];
  for(i=0;i<n;i++)
  cin>>a[i];
  if(dup(a,n,k))
  cout<<"True";
  else
  cout<<"False";
  cout<<endl;
                            
 }
	//code
	return 0;
}
