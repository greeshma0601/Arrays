/*
Overlapping Intervals Submissions: 10571   Accuracy: 39.7%   Difficulty: Medium   Marks: 4
          
Problems
Given a collection of Intervals,merge all the overlapping Intervals.
For example:

Given [1,3], [2,6], [8,10], [15,18],

return [1,6], [8,10], [15,18].

Make sure the returned intervals are sorted.

 

Input:

The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N depicting the number of Intervals and next line followed by the intervals starting and ending positions 'x' and 'y' respectively.


Output:

Print the intervals after overlapping in sorted manner.  There should be a newline at the end of output of every test case.

Constraints:

1 ≤ T ≤ 50
1 ≤ N ≤ 100
0 ≤ x ≤ y ≤ 100


Example:

Input
2
4
1 3 2 4 6 8 9 10
4
6 8 1 9 2 4 4 7

Output
1 4 6 8 9 10
1 9
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Interval
{
    int s,e;
};
bool comp(Interval a,Interval b)
{
    return a.s>b.s;
}
void overlap(Interval a[],int n)
{
    int i,index=0;
    sort(a,a+n,comp);
    for(i=0;i<n;i++)
    {
        if(index!=0 && a[index-1].s<=a[i].e)
        {
            while(index!=0 && a[index-1].s<=a[i].e)
            {
                a[index-1].s=min(a[index-1].s,a[i].s);
                a[index-1].e=max(a[index-1].e,a[i].e);
                index--;
            }
        }
        else
        {
            a[index]=a[i];
        }
        index++;
    }
    for(i=index-1;i>=0;i--)
    {
        cout<<a[i].s<<" "<<a[i].e<<" ";
    }
    cout<<endl;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 
 int i,index=0,n;
 cin>>n;
 Interval a[n];
 for(i=0;i<n;i++)
 {
     cin>>a[i].s;cin>>a[i].e;
 }
 overlap(a,n);
 }
	//code
	return 0;
}
