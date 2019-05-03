/*
Largest subarray with 0 sum
Given an array having both positive an negative integers. The task is to complete the function maxLen() which returns the length of maximum subarray with 0 sum. The function takes two arguments an array A and n where n is the size of the array A.

Input:
The first line of input contains an element T denoting the number of test cases. Then T test cases follow. Each test case consist of 2 lines. The first line of each test case contains a number denoting the size of the array A. Then in the next line are space separated values of the array A.

Output:
For each test case output will be the length of the largest subarray which has sum 0.

User Task:
Sinec this is a functional problem you don't have to worry about input, you just have to complete the function maxLen().

Constraints:
1 <= T <= 100
1 <= N <= 100
-1000 <= A[] <= 1000

Example:
Input
1
8
15 -2 2 -8 1 7 10 23

Output
5

Explanation
Testcase 1: In the above test case the largest subarray with sum 0 will be -2 2 -8 1 7.
*/

#include<bits/stdc++.h>
using namespace std;
int maxLen(int A[],int n);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
            cin>>A[i];
        cout<<maxLen(A,N)<<endl;
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this function*/
int maxLen(int a[],int n)
{
  //Your code here
  unordered_map<int,int>um;
  int sum=0,max_len=0;
  for(int i=0;i<n;i++)
  {
      sum+=a[i];
      if(a[i] == 0 && sum == 0)
      max_len=1;
      if(sum == 0)
      max_len=i+1;
      if(um.find(sum)!=um.end())
      {
          max_len=max(max_len,i-um[sum]);
      }
      else
      {
          um[sum]=i;
      }
  }
  return max_len;
}
