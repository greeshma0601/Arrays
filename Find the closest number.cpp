/*
Find the closest number
Given an array of sorted integers. The task is to find the closest value to the given number in array. Array may contain duplicate values.

Note: If the difference is same for two values print the value which is greater than the given number.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains two integers N & K and the second line contains N space separated array elements.

Output:
For each test case, print the closest number in new line.

Constraints:
1<=T<=100
1<=N<=105
1<=K<=105
1<=A[i]<=105

Example:
Input:
2
4 4
1 3 6 7
7 4
1 2 3 5 6 8 9

Output:
3
5
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
 int n,k,i;
 cin>>n>>k;
 int a[100000];
 for(i=0;i<n;i++)
 cin>>a[i];
 int x,f;
 for(i=0;i<n;i++)
 {
     if(a[i]>k)
     {
    f=1;
       x=i;
       break;
     }
     else
     {
         f=0;
         x=i;
     }
 }
if(x==0){cout<<a[0]<<endl;}
else if(f==1){
int p1=abs(a[x]-k);
int r;
int p2=abs(a[x-1]-k);
 if(p1<p2){r=a[x];}
 else if(p1>p2){r=a[x-1];}
 else {r=a[x];}
 cout<<r<<endl;
}
else if(f==0)
{
    cout<<a[x]<<endl;
}
 }
	//code
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
 { 
   int t;
   cin>>t;
   while(t--)
   {
   int n,k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
  int l=0,r=n-1;
  int d=INT_MAX;
  int ans=-1;
  while(l<=r)
  {
      int mid= (l+r)/2;
      if(a[mid]<k)
      {
         if((k-a[mid])<d)
        {
            d=k-a[mid]; 
            ans=a[mid];
            
        }
        if((k-a[mid])==d && a[mid]>ans) ans=a[mid]; 
        l=mid+1;
      }
      else
      {
          if((a[mid]-k) <d)
        {
            d=a[mid]-k; 
            ans=a[mid];
            
        }
         if((a[mid]-k)==d && a[mid]>ans) ans=a[mid]; 
        r=mid-1;
      }
  }
   cout<<ans<< endl;
   }
	//code
	return 0;
}
*/
