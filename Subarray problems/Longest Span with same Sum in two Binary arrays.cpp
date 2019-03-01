/*
Longest Span with same Sum in two Binary arrays
Given two binary arrays arr1[] and arr2[] of same size n. Find length of the longest common span (i, j) where j >= i such that arr1[i] + arr1[i+1] + …. + arr1[j] = arr2[i] + arr2[i+1] + …. + arr2[j]. Elements are only 0 or 1.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, the first line contains an integer 'N' denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array. The third line contains N space-separated integers B1, B2, ..., BN denoting the elements of the array.


Output:
In each seperated line output the maximum span with same sum.


Constraints:
1<=T<=31
1<=N<=100


Example:
Input:
1
6
0 1 0 0 0 0
1 0 1 0 0 1

Output:
4

Explaination :

Input: arr1[] = {0, 1, 0, 0, 0, 0};
       arr2[] = {1, 0, 1, 0, 0, 1};
Output: 4
The longest span with same sum is from index 1 to 4  (Zero indexing).
*/

/*
#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main()
 {
	int t,i,j,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        b[i] = b[i]-a[i];
	    }
	    map<int , int >mp;
	    int maxi=INT_MIN;
	    int sum=0;
	    for(i=0;i<n;i++)
	    {
	        sum  = sum + b[i];
	        if(mp.find(sum)==mp.end())
	        {
	            mp[sum] = i;
	        }
	        else
	        {
	           maxi = max(maxi, i- mp[sum]);
	           
	        }
	        if(sum ==0)
	        {
	            maxi = i+1;
	        }
	    }
	    if(maxi!=INT_MIN)
	    cout<<maxi<<"\n";
	    else
	    cout<<0<<"\n";
	}
	return 0;
}

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
 int n,i,j;cin>>n;
 int a[n],b[n];
 for(i=0;i<n;i++)cin>>a[i];
 for(i=0;i<n;i++)cin>>b[i];
 int l=0,ml=0;
 int s1=0,s2=0;
 for(i=0;i<n;i++)
 {
     s1=0;s2=0;
     for(j=i;j<n;j++)
     {
         s1+=a[j];s2+=b[j];l=j-i+1;
         if(s1 == s2 && (l>ml)){ml=l;}
     }
 }
 cout<<ml<<endl;
 
 }
	//code
	return 0;
}
