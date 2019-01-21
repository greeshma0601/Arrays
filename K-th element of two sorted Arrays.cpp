/*
K-th element of two sorted Arrays Submissions: 10923   Accuracy: 39.14%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
         
Given two sorted arrays A and B of size M and N respectively and an element k. The task is to find the element that would be at the k’th position of the final sorted array.

Input:
First line consists of test cases T. First line of every test case consists of 3 integers N, M and K, denoting M number of elements in A, N number of elements in B and kth position element. Second and Third line of every test case consists of elements of A and B respectively.

Output:
Print the element at the Kth position.

Constraints:
1 <= T <= 200
1 <= N, M <= 106
1 <= Ai, Bi <= 106
1 <= K <= N+M

Example:
Input:
1
5 4 5
2 3 6 7 9
1 4 8 10

Output:
6

Explanation:
Testcase 1: Element at 5th position after merging both arrays will be 6.


*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, m, k;
	    cin>>m>>n>>k;
	    int arr1[m] = {0}, arr2[n] = {0};
	    for(int i = 0; i < m; i++)
	    cin>>arr1[i];
	    for(int i = 0; i < n; i++)
	    cin>>arr2[i];
	    int i = 0, j = 0, c = 0, temp;
	    while (i < m && j < n) 
        { 
            c++;
            if (arr1[i] < arr2[j]) 
            {
                temp = arr1[i++]; 
            }
            else
            {
                temp = arr2[j++];
            }
            if(c == k)
            {
                break;
            }
        } 
        while(i < m && c < k)
        {
            c++;
            temp = arr1[i++];
        }
        while(j < n && c < k)
        {
            c++;
            temp = arr2[j++];
        }
        k < (m + n + 1) ?cout<<temp<<endl : cout<<"-1\n";
	}
	return 0;
}
