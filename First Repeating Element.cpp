/*
First Repeating Element Submissions: 9163   Accuracy: 35.76%   Difficulty: Easy   Marks: 2
         
Find the first repeating element in an array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.

Input :
The first line contains an integer T denoting the total number of test cases. In each test cases, First line is number of elements in array N and second its values.

Output:
In each separate line print the index of first repeating element, if there is not any repeating element then print “-1” (without quotes). Use 1 Based Indexing.

Constraints:
1 <= T <= 500
1 <= N <= 106
0 <= Ai <= 106

Example:
Input:
1
7
1 5 3 4 3 5 6

Output:
2

Explanation: 
Testcase 1: 5 is appearing twice and its first appearence is at index 2 which is less than 3 whose first occuring index is 3.

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

 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 // Initialize index of first repeating element 
    int min = -1; 
  
    // Creates an empty hashset 
    set<int> myset; 
  
    // Traverse the input array from right to left 
    for (int i = n - 1; i >= 0; i--) 
    { 
        // If element is already in hash set, update min 
        if (myset.find(a[i]) != myset.end()) 
            min = i; 
  
        else   // Else add element to hash set 
            myset.insert(a[i]); 
    } 
  
    // Print the result 
    if (min != -1) 
        cout  << min+1<<endl; 
    else 
    cout<<"-1"<<endl;
   
     
 }
	//code
	return 0;
}
