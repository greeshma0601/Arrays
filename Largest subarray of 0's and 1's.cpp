/*
Largest subarray of 0's and 1's Submissions: 13704   Accuracy: 38.92%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
               
Given an array of 0's and 1's your task is to complete the function maxLen which returns  size of  the  largest sub array with equal number of 0's and 1's .
The function maxLen takes 2 arguments .The first argument is the array A[] and second argument is the size 'N' of the array A[] .

Input:
The first line of the input is T denoting the number of test cases .
Then T test cases follow . Each test case contains two lines . 
The first line of each test case is a number N denoting the size of the array and in the next line are N space separated values of A [ ].

Output:
For each test case output in a new line the max length of the subarray .

Constraints:
1<=T<=100
1<=N<=100
0<=A[ ] <=1

Example:
Input (To be used only for expected output) :
2
4
0 1 0 1
5
0 0 1 0 0 

Output
4
2



*/



#include <bits/stdc++.h>
using namespace std;
int maxLen(int arr[], int n);
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<maxLen(a,n)<<endl;
		
	}
	return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method*/
/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*You are required to complete this method*/
int maxLen(int arr[], int n)
{
//Your code here
 for(int i=0;i<n;i++) arr[i]= (arr[i]==0)? -1:1;
 map<int,int> m;
 int maxsize=0; int sum=0;
 for(int i=0;i<n;i++){
      sum+=arr[i];
      if(sum==0) maxsize=i+1;
    else if(m.find(sum)==m.end()) m[sum]=i;
      
      else if(m.find(sum)!=m.end()){
          if(maxsize<i-m[sum]) maxsize=i-m[sum];
          
      }
      
 }
 return maxsize;
}
/*int maxLen(int a[], int n)
{
//Your code here
int i,c0=0,c1=0;
for(i=0;i<n;i++)
{
    if(a[i]==0)
    {
        c0++;
    }
    else{
        c1++;
    }
}
if(c0>=c1)int maxLen(int arr[], int n)
{
    int maxx=INT_MIN;
    long long int sum=0;
    for(int i=0;i<n;i++)
        if(arr[i] == 0)
            arr[i] = -1;
    map<int,vector<int>>m;
    m[0].push_back(-1);
    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];
        m[sum].push_back(i);
    }
    map<int,vector<int>>::iterator i;
    for(i = m.begin();i!=m.end();i++)
    {
        int len = i->second.size();
        if(maxx < i->second[len-1] - i->second[0])
            maxx = i->second[len-1] - i->second[0];
    }
    return maxx;
}
    int y=2*c1;
    return y;
}
else{
    int y=2*c0;
    return y;
}

}*/
