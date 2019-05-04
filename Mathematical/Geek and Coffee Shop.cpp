/*
Geek and Coffee Shop Submissions: 5416   Accuracy: 52.24%   Difficulty: Basic   Marks: 1
      
Problems
Geek love's to drink cold coffee after coding for long hour's. One fine day Geek went to his favourite coffee shop in the town and asked for a cup of cold coffee. The shopkeeper told him that he is their lucky customer and had an offer for the Geek. The offer was that for an amount of N they will fill Geek's cup with N units of cold coffee, the offer doesn't over yet. After consuming initial N units of coffee the shopkeeper will again refill his cup with half the amount of coffee that Geek consumed in previous refill, and will keep on refilling his cup till the amount to refill becomes nil i.e. 0 (Assume Geek can consume infinite amount of coffee and shop also has infinite amount coffee). Now Geek is curious to know that how many units of coffee will Geek get for Mth refill. Being Geek's friend help him out with his problem.    

Input:
The first line of the input contains an integer T, denoting the number of test cases. The T test case follow. The only line of each test case contains two space separated integers N and M respectively.

Output:
For each test case output a single integer on a new line denoting the required answer.

Constraints:
1<=T<=104
1<=N<=109
1<=M<=103

Example:
Input:
2
100 4
10 3

Output:
12
2

Explanation:
TestCase 1:
For the 4th refill geek will get 12 units of the coffee.
1st Fill: Geek will get 100 units of Coffee
2nd Fill: 100/2 = 50 units
3rd Fill: 50/2 = 25 units
4th Fill: 25/2 = 12 units
*/

/*
Geek and Coffee Shop [Editorial]
The Navine approach to the problem would to loop till T and keep dividing N by 2.
The Nth term of the GP will give us the required answer.
Another Efficient approach could be that we could concept of Geometric Progression.
The formula for Nth term of the GP.
An = A1*R^(n-1)
where
A1 is N
R is 1/2 i.e. 0.5
and n is t

C++Solution to above problem:
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n, t, res = 0;
        cin>>n>>t;
        res = n*pow(0.5, t-1);
        cout<<res<<endl;
    }
     return 0;
}
 

/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int gcs(int n,int m)
{
    if(m == 1)
    return n;
    int x=n;
    for(int i=0;i<m-1;i++)
    x=x/2;
    return x;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,m;cin>>n>>m;
 cout<<gcs(n,m)<<endl;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 }
	//code
	return 0;
}*/
