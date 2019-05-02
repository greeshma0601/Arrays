/*
Maximum Product Subarray Submissions: 16009   Accuracy: 37.82%   Difficulty: Easy   Marks: 2
           
Problems
Given an array A that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.

Input:
First line of input contain number of test cases T. First line of test case contain the size of array and second line of test case contain the array elements.

Output:
Output the maximum product of subarray.

Constraints:
1 <= T <= 100
1 <= N <= 104
-102 <= Ai <= 102

Example:
Input:
3
5
6 -3 -10 0 2
6
2 3 4 5 -1 0 
10
8 -2 -2 0 8 0 -6 -8 -6 -1

Output:
180
120
288

Explanation:
Testcase 1: Subarray with maximum product is 6, -3, -10 which gives product as 180. 
*/
#include<bits/stdc++.h>
using namespace std;



long long int min (long long int x, long long int y) {return x < y? x : y; } 
long long int max (long long int x, long long int y) {return x > y? x : y; }

void p(int arr[], int n) 
{ 
    int c = 0,s = 0;
    int t = 0,k = 0;
    long long int max_ending_here = 1; 
    long long int min_ending_here = 1; 
    long long int max_so_far = 1; 
    for (int i = 0; i < n; i++) 
    { 
        if (arr[i] > 0) 
        { 
            t=t+1;
            max_ending_here = max_ending_here*arr[i]; 
            min_ending_here = min (min_ending_here * arr[i], 1); 
        } 
        else if (arr[i] == 0) 
        { 
            k=k+1;
            max_ending_here = 1; 
            min_ending_here = 1; 
        } 
        else
        { 
            c=c+1;
            long long int temp = max_ending_here; 
            max_ending_here = max (min_ending_here * arr[i], 1); 
            min_ending_here = temp * arr[i];
           // if(c==1&&t==0&&k==0)
            s=arr[i];
        }
        if (max_so_far <  max_ending_here) 
          max_so_far  =  max_ending_here; 
    }
    if(c>1||t>0)
    cout<<max_so_far<<endl;
   else  if(t==0&&k>0)
    cout<<"0"<<endl;
   else
   if(t==0&&k==0)
  cout<<s<<endl;
}

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        p(arr,n);
    }
	return 0;
}

/*
#include<iostream>
using namespace std;
int mps( int a[], int n)
{ int i;
  int prev_max=a[0];
 int ans=a[0];
int prev_min=a[0];
int cur_max=a[0];
int cur_min=a[0];
    for(i=1;i<n;i++)
    {
        cur_max=max(prev_max*a[i],max(prev_min*a[i],a[i]));
        cur_min=min(prev_max*a[i],min(prev_min*a[i],a[i]));
        ans=max(cur_max,ans);
        prev_min=cur_min;
        prev_max=cur_max;
    }
    return ans;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
  int n,i;cin>>n;
  int a[n];for(i=0;i<n;i++)cin>>a[i];
 int m=mps(a,n);
 cout<<m<<endl;
 }
	//code
	return 0;
}
*/
