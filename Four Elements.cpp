/*
Four Elements
Given an array A of N integers, find a combination of four elements in the array whose sum is equal to a given value X.

Input:
First line consists of T test cases. First line of every test case consists of an integer N, denoting the number of elements in an array. Second line consists of N spaced array elements. Third line of every test case X.

Output:
Single line output, print 1 if combination is found else 0.

Constraints:
1 <= T <= 100
1 <= N <= 106

Example:
Input:
1
6
1 5 1 0 6 0
7
Output:
1

Explantion:
Testcase 1: 1, 5, 1, 0 are the four elements which makes sum 7.

*/

#include<iostream>
using namespace std;
int main()
 {
	int t=0,n=0,f=1,x;
	cin>>t;
	for(int t1=0;t1<t;t1++)
	{
	    cin>>n;
	    f=0;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cin>>x;
	    
	    for(int i=0;i<(n-3);i++)
	    {
	        for(int j=i+1;j<(n-2);j++)
	        {
	            for(int k=j+1;k<(n-1);k++)
	            {
	                for(int l=k+1;l<n && f==0;l++)
	                {
	                    if(a[i]+a[j]+a[k]+a[l] == x) f = 1;
	                }
	            }
	        }
	    }
	    printf("%d\n",f);
	    
	}
	return 0;
}

/*
#include <iostream>
using namespace std;
#define LL long long int
#define FOR(a,b,c)   for (int (a)=(b); (a)<(c); (a)++)
#define FORN(a,b,c)  for (int (a)=(b); (a)<=(c); (a)++)
#define FORD(a,b,c)  for (int (a)=(b); (a)>=(c); (a)--)
#define REP(i,n)     FOR(i,0,n)
#define REPN(i,n)    FORN(i,1,n)
#define REPD(i,n)    FORD(i,n,1)
#include<algorithm>
int isPresent(int *arr,int n,int sum)
{
    if(n<4) return 0;
    int sl=0;
    int sr=1;
    int rl=n-2;
    int rr=n-1;
     /// these are 4 pointers to the array's index that tell the sum
     // sort the array
     sort(arr,arr+n);
     // iterate
     int currSum;//s is start, r is right, l is left, why start, just like that:P
     while(sl<rr+2)
     {
         sr=sl+1;
         rl=rr-1;
         while(sr<rl)
         {
             currSum=arr[sl]+arr[sr]+arr[rl]+arr[rr];
             if(currSum<sum)
             {
                 sr++;
             }
             else if(currSum>sum)
             {
                 rl--;
             }
             else if(currSum==sum)
             {
                 return 1;
             }
             
         }
         if(currSum>sum) // if curr sum is still greater than sum, reduce the big daddy of array, ie the largest entry of the array
         {
             rr--;
         }
         else if(currSum<sum)
         {
             sl++;
         }
         else {
             return 1;
         }
         
     }
     return 0;
}

int main() {
	//code
	
	int tc;
    // cout << "enter tc : ";
    cin >> tc;
    for (int i = 0; i < tc; i++) {
    
    	int n;
    	cin >> n;
    	int *arr = new int[n];
    	for (int i = 0; i < n; i++)
    	{
    		cin >> arr[i];
    	}
    	int sum;
    	cin>>sum;
    	cout<< isPresent(arr,n,sum)<<endl;
    	
    }
	return 0;
}



using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int k;
	    cin>>k;
	    int flag=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n-3;i++)
	    {
	        for(int j=i+1;j<n-2;j++)
	        {
	            int p=j+1;
	            int q=n-1;
	            while(p<q)
	            {
	                if(arr[i]+arr[j]+arr[p]+arr[q]==k)
	                {
	                    cout<<1<<endl;
	                    flag=1;
	                    break;
	                }
	                else if(arr[i]+arr[j]+arr[p]+arr[q]>k)
	                {
	                    --q;
	                }
	                else
	                {
	                    ++p;
	                }
	            }
	            if(flag==1)
	            {
	                break;
	            }
	        }
	        if(flag==1)
	        {
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}

*/
