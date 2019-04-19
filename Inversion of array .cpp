/*
Inversion of array Submissions: 20298   Accuracy: 38.06%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Geeks Classes DSA More
                   
Problems
Given an array of positive integers. The task is to find inversion count of array.

Inversion Count : For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, the size of array. The second line of each test case contains N elements.

Output:
Print the inversion count of array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
1 ≤ C ≤ 1018

Example:
Input:
1
5
2 4 1 3 5

Output:
3

Explanation:
Testcase 1: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
*/

#include<bits/stdc++.h>
using namespace std;
long long int inversions=0;
void merge(int arr[],int left,int m,int right)
{
    int larray[m-left+1],rarray[right-m],i=0,j=0,k=left;
    for(int i=0;i<m-left+1;i++)
        larray[i] = arr[left+i];
    for(int i=0;i<=right-m;i++)
        rarray[i] = arr[m+i+1];
    while(i < m-left+1 && j < right-m)
    {
        if(larray[i] <= rarray[j])
            arr[k++] = larray[i++];
        else
        {
            inversions+=m-left+1-i;
            arr[k++] = rarray[j++];
        }
    }
    while(i < m-left+1)
    {
        arr[k++] = larray[i++];
    }
    while(j < right-m)
    {
        arr[k++] = rarray[j++];
    }
}
void merge_sort(int arr[],int left,int right)
{
    if(left < right)
    {
        int m = (left+right)/2;
        merge_sort(arr,left,m);
        merge_sort(arr,m+1,right);
        merge(arr,left,m,right);
    }
}
int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    merge_sort(arr,0,n-1);
	    cout << inversions;
	    cout << "\n";
	    inversions=0;
	}
	return 0;
}
