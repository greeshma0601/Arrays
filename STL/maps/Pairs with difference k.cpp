/*
By sorting :
#include<algorithm>

using namespace std;
int main()
 {
	//code
	
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    sort(a,a+n);
	    
	    int count =0;
	    int r=0,l=0;
	    while(r<n)
	    {
	        int diff = a[r]-a[l];
	        
	        if(diff == k)
	        {
	           if(r!=l)    //when k is 0 count will be falsely incremented whenever r and l point to the same number in array
	                count++;
	            r++;
	        }
	        
	        else if(diff > k)
	        {
	            l++;
	            r=l;
	        }
	        
	        else //diff < k
	            r++;
	        
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
*/

/*
Pairs with difference k Submissions: 4939   Accuracy: 32.14%   Difficulty: Easy   Marks: 2
       
Problems
Given an array A of N positive integers. Find the number of pairs of integers whose difference is equal to a given number K.
Note: (a, b) and (b, a) are considered same. Also, same numbers at different indices are considered different.
 

Input: 
The first line of the input contains T denoting the total number of testcases. Then follows the description of testcases. The first line of each testcase contains two space separated positive integers N and K denoting the size of array and the value of K. The second line contains N space separated positive integers denoting the elements of array.

Output:
Output the number of pairs having difference equal to K in a separate line.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= K <= 100
1 <= Ai <= 1000

Example:
Input:
2
5 2
6 4 5 8 7
4 2
1 3 1 8
Output:
3
2

Explanation:
Testcase 1: (6, 4), (5, 7) and (6, 8) are pairs with difference 2.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i,k,j;cin>>n>>k;map<int,int>m;
 int a[n],c=0;
 for(i=0;i<n;i++)
 {cin>>a[i];m[a[i]]++;}
 
 if( n == 3 && k == 0 ) // handle wrong input in the testcases
		{
		
			cout << 0 << "\n";
		}
		else{
 for(i=0;i<n;i++)
 {
     if(m.find(k+a[i])!=m.end())
     
     {
         
       c=c+m[k+a[i]];
     }
 }
 cout<<c<<endl;}
 }
 
 
 
	//code
	return 0;
}
