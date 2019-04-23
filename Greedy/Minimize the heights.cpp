/*
Minimize the heights Submissions: 14663   Accuracy: 26.86%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
        
Problems
Given an array A[ ] denoting heights of N towers and a positive integer K, modify the heights of each tower either by increasing or decreasing them by K only once and then find out the minimum difference of the heights of shortest and longest towers.

Example

Input  : A[] = {1, 15, 10}, k = 6
Output : 5
Explanation : We change 1 to 6, 15 to 
9 and 10 to 4. Maximum difference is 5
(between 4 and 9). We can't get a lower
difference.

Input
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case contains a positive integer K. The second line of each test case contains a positive integer N, denoting number of towers. The third line of the test cases contains N integers denoting the heights of N towers.

Output
For each test case in new line print out the minimum difference of heights possible.

Constraints
1 <= T <= 100
0 <   K <= 30
0 <   N <= 30
0 <= A[i] <= 500


Examples 
Input
3
2
4
1 5 8 10
3
5
3 9 12 16 20
4
6
100 150 200 250 300 400

Output
5
11
292
*/

#include <bits/stdc++.h>
using namespace std;
int minimize(int a[],int n,int k){
    if(n==1)return 0;
    sort(a,a+n);
    int ans=a[n-1]-a[0];
    int s=a[0]+k,b=a[n-1]-k;if(s>b)swap(s,b);
    for(int i=1;i<n-1;i++){
        int sub=a[i]-k,add=a[i]+k;
        if(sub>=s||add<=b)continue;
        if (b-sub<= add-s)
            s=sub;
      else b=add;
    }
    return min(ans,b-s);
}
int main() {
  int t;cin>>t;
  while(t--){
     int k,n;cin>>k>>n;int a[n];
      for(int i=0;i<n;i++)cin>>a[i];
     cout<<minimize(a,n,k)<<"\n";
  }
	return 0;
}
