/*
Maximize the sum of selected numbers from an array to make it empty
Given an array of N numbers, we need to maximize the sum of selected numbers. At each step, you need to select a number Ai, delete one occurrence of Ai-1 (if exists) and Ai each from the array. Repeat these steps until the array gets empty. The problem is to maximize the sum of selected numbers.

Input:
The first line of the input contains T  denoting the number of the test cases. For each test case, the first line contains an integer n denoting the size of the array. Next line contains n space separated integers denoting the elements of the array.

Output:
For each test case, the output is an integer displaying the maximum sum of selected numbers. 

Constraints:
1<=T<=100
1<=n<=50
1<=A[i]<=20
Note: Numbers need to be selected from maximum to minimum.

Example:
Input
2
3
1 2 3
6
1 2 2 2 3 4
Output
4
10

Explanation
#Testcase 1:
 At first step we select 3, so 3 and 2 are deleted from the sequence leaving us with 1. Then we select 1 from the sequence and delete it. So the sum of selected numbers is 1+3 = 4.
#Testcase 2:
We select 4, so 4 and 3 are deleted leaving us with {1,2,2,2}. Then we select 2, so 2 & 1 are deleted. We are left with{2,2}. We select 2 in next two steps, thus the sum is 4+2+2+2=10.
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
    multiset<int>s;
    int i,n;
    cin>>n;int a;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
    int sum=0;
    auto it=s.rbegin();
    while(it!=s.rend())
    {
        sum+=*it;
        auto it1=s.find(*it-1);
        if(it1!=s.end())
        s.erase(it1);
        it++;
    }
    cout<<sum<<endl;
 }
	//code
	return 0;
}
