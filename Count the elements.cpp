/*
Count the elements Submissions: 8095   Accuracy: 36.77%   Difficulty: Easy   Marks: 2
          
Problems
Discussions
Given two arrays A and B. Given Q queries each having a positive integer i denoting an index of the array A. For each query, your task is to find all the elements less than or equal to Ai in the array B.

Input:
The first line contains a single integer T, the number of test cases. The first line of each test case consists of a integer N. The second and third line of each test case consists of N spaced integers representing array A and array B respectively. The third line contains a positive integer Q, denoting the number of queries. Next Q lines contains queries.

Output: 
For each testcase, print the required answer.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai, Bi <= 107
1 <= Q <= 103

Example:
Input:
1
6
1 2 3 4 7 9
0 1 2 1 1 4
2
5
4 
Output:
6
6

Explanation:
Testcase 1: For 1st query, the given index is 5, A[5] is 9 and in B all the elements are smaller than 9.
For 2nd query, the given index is 4, A[4] is 7 and in B all the elements are smaller than 7. 

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        int max=INT_MIN;
        
        for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max)
        max=a[i];
      
        }
        int c[max+1]={0};
        for(int i=0;i<n;i++){
        cin>>b[i];
        c[b[i]]++;
        
        }
        
        for(int i=1;i<=max;i++){
            c[i]=c[i-1]+c[i];
        }
       
        int q;
        cin>>q;
        int x;
        while(q--){
            cin>>x;
            cout<<c[a[x]]<<endl;
            
        }
        
    }
	//code
	return 0;
}
