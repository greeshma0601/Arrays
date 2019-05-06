/*
K-th missing element Submissions: 7295   Accuracy: 26.13%   Difficulty: Easy   Marks: 2
    
Problems
Given an increasing sequence a[], we need to find the K-th missing contiguous element in the increasing sequence which is not present in the sequence. If no k-th missing element is there output -1.

Input:
The first line consists of an integer T i.e. the number of test cases. The first line of each test case consists of two integers N and K.Next line consists of N spaced integers.

Output: 
For each test case, print the Kth missing number if present otherwise print -1.

Constraints:
1<=T<=100
1<=N,K,A[i]<=105

Examples:
Input
2
5 2
1 3 4 5 7
6 2 
1 2 3 4 5 6 
Output
6
-1

Explanation:
#TestCase 1:
  K=2
We need to find the 2nd missing number in the array. Missing numbers are 2 and 6. So 2nd missing number is 6.
#Testcase 2:
K=2
We need to find the 2nd missing number in the array. As there is no missing number, hence the output is -1.

 
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Function to find k-th  
// missing element 
int kme(int a[], int k,  
             int n) 
{ 
    int difference = 0,  
        ans = 0, count = k; 
    bool flag = 0; 
      
    // interating over the array 
    for(int i = 0 ; i < n - 1; i++) 
    {    
        difference = 0; 
          
        // check if i-th and  
        // (i + 1)-th element  
        // are not consecutive 
        if ((a[i] + 1) != a[i + 1])  
        { 
              
            // save their difference 
            difference +=  
                (a[i + 1] - a[i]) - 1; 
              
            // check for difference 
            // and given k 
            if (difference >= count) 
                { 
                    ans = a[i] + count; 
                    flag = 1; 
                    break; 
                } 
            else
                count -= difference; 
        } 
    } 
      
    // if found 
    if(flag) 
        return ans; 
    else
        return  -1; 
} 
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i,k;cin>>n>>k;
 int a[n];
 for(i=0;i<n;i++)cin>>a[i];
 cout<<kme(a,k,n)<<endl;
 }
	//code
	return 0;
}

using namespace std;
int main()
 {int t;
 cin>>t;
 while(t--)
      {int n,x,c=0,pos;
      cin>>n;
      cin>>pos;
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      x=a[0];
      for(int i=0;i<n;i++)
         { 
             if(a[i]!=x) 
         
         {
             c++; 
             if(c==pos) 
             {cout<<x; goto lst;} 
             x=x+1; 
             i--;
             
         }
           else  x++;
         } cout<<"-1";
          lst:cout<<endl;
      
      }
	return 0;
}
