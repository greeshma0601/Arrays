/*
Sorted subsequence of size 3 Submissions: 6334   Accuracy: 30.87%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
      
Problems
Given an array A of N integers, Your task is to complete the function find3Numbers which finds any 3 elements in it such that A[i] < A[j] < A[k] and i < j < k. You need to return them as a vector, if no such element is present then return the empty vector of size 0.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. The first line of each test case contains an integer N denoting the size of the array A in the next line are N space separated values of the array A.

Output:
For each test case in a new line output will be 1 if the sub-sequence returned by the function is present in array A else 0.

Constraints:
1 <= T <= 100
1 <= N <= 105
1 <= A[ ] <= 106

Example:
Input:
2
5
1 2 1 1 3
3
1 1 3
Output:
1
0

Explanation:
There are 2 test cases
For first test case
a sub-sequence 1 2 3 exist 
For second test case
no such sub-sequence exist
*/
#include<bits/stdc++.h>
using namespace std;
bool isSubSequence(vector<int> s1,vector<int> s2, int m, int n)
{
   
    if (m == 0) return true;
    if (n == 0) return false;
 
   
    if (s1[m-1] == s2[n-1])
        return isSubSequence(s1, s2, m-1, n-1);
 
  
    return isSubSequence(s1, s2, m, n-1);
}
vector<int> find3Numbers(vector<int> , int );
// Driver program to test above function
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a(n+1);
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		  vector<int> res = find3Numbers(a, n);
    
    	 
    	  
    	  if(res.size()==0)
    	  {
    	  	cout<<0<<endl;
    	  }
    	  else if(res[0]<res[1] and res[1]<res[2])
          cout<<isSubSequence(res,a,res.size(),n)<<endl;
          else
          cout<<0<<endl;
	}
    
  
    return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The function returns a vector containing the 
increasing sub-sequence of length 3 if present
else returns an empty vector */
vector<int> find3Numbers(vector<int> A, int N)
{
   //Your code here
    int dec[N],inc[N];
   inc[0]=-1;
   dec[N-1]=-1;
   int min=0;
   for(int i=1;i<N;i++)
   {
       if(A[i]<=A[min])
       {
           inc[i]=-1;
           min=i;
       }
       else
        inc[i]=min;
   }
   int max=N-1;
   for(int i=N-2;i>=0;i--)
   {
       if(A[i]>=A[max])
       {
           dec[i]=-1;
           max=i;
       }
       else
        dec[i]=max;
   }
   vector<int> v1;
   for(int i=0;i<N;i++)
   {
       if(inc[i]!=-1 && dec[i]!=-1)
       {
           v1.push_back(A[inc[i]]);
           v1.push_back(A[i]);
           v1.push_back(A[dec[i]]);
           return v1;
       }
   }
   return v1;
}
