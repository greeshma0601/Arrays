/*
Find Missing And Repeating Submissions: 13422   Accuracy: 48.21%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
          
Given an unsorted array of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Note: If you find multiple answers then print the Smallest number found. Also, expected solution is O(n) time and constant extra space.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print B, the repeating number followed by A which is missing in a single line.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 ≤ A[i] ≤ N

Example:
Input:
2
2
2 2
3 
1 3 3

Output:
2 1
3 2

Explanation:
Testcase 1: Repeating number is 2 and smallest positive missing number is 1.
Testcase 2: Repeating number is 3 and smallest positive missing number is 2.

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printTwoElements(int arr[], int size) 
{ 
	int i; 
//	cout << " The repeating element is " ; 

	for (i = 0; i < size; i++) 
	{ 
		if (arr[abs(arr[i]) - 1] > 0) 
			arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1]; 
		else
			cout << abs(arr[i]) << " "; 
	} 
    
//	cout << "and the missing element is "; 
	for (i = 0; i < size; i++) 
	{ 
		if (arr[i] > 0) 
			cout << (i + 1)<<endl; 
	} 
} 

int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 int a[n];
 for(i=0;i<n;i++)cin>>a[i];
 //int temp[n];
 printTwoElements(a, n);
/* for(i=0;i<n;i++)temp[i]=0;
 int r,m;
 for(i=0;i<n;i++)
 {
     if(temp[a[i]-1] == 1)
     {
         r=a[i];
         break;
     }
     if(temp[a[i]-1] == 0)
     {
         temp[a[i]-1]=1;
     }
     
 }
int s=0;
for(i=0;i<n;i++)
{
  if(temp[i] == 0)
  {m=i;break;}
 //   s+=a[i];
}
 cout<<r<<" "<<m<<endl;*/
 }
	//code
	return 0;
}
