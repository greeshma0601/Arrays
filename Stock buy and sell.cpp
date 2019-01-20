/*
Stock buy and sell Submissions: 40053   Accuracy: 30.43%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Geeks Classes in Noida   Geeks Classes in Noida Less
                                          
The cost of stock on each day is given in an array A. Find all the days on which you buy and sell the stock so that in between those days you shouldn't have any loss.

Input: 
First line contains number of test cases T. Each test case contains the integer value N denoting days followed by an array of stock prices of N days. 

Output:
For each testcase, output all the days with profit in a single line. And if there is no profit then print "No Profit".

Constraints:
1 <= T <= 100
2 <= N <= 103
1 <= Ai <= 104

Example
Input:
2
7
100 180 260 310 40 535 695
10
23 13 25 29 33 19 34 45 65 67

Output:
(0 3) (4 6)
(1 4) (5 9)

Note: Output format is as follows - (buy_day sell_day) (buy_day sell_day)
For each input, output should be in a single line.

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
 int n,i;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 int start=0,end=-1,f=0,k=1;
 for(i=0;i<=n-2;i++)
 {
     if(a[i+1]>a[i])
     {
         end=i+1;
         f=0;
         k=0;
     }
     else
     {
         if(end!=-1 && start<end){cout<<"("<<start<<" "<<end<<")"<<" ";start=i+1;f=1;k=0;}
     
         else{start=i+1;}
     }
 }
 if(f==0 && start<end)
 {
     cout<<"("<<start<<" "<<end<<")"<<" ";
 }
 else if(k==1){cout<<"No Profit";}
 cout<<endl;
 }
	//code
	return 0;
}
