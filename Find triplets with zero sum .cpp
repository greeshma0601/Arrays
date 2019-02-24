/*
Find triplets with zero sum Submissions: 10891   Accuracy: 48.42%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation
              
Given an array A of N elements. The task is to complete the function which returns true if triplets exists in array A whose sum is zero else returns false.

Input Format:
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. The first line of each test case contains an integer N, denoting the number of elements in array. The second line of each test case contains N space separated values of the array.

Output:
For each test case, output will be 1 if triplet exists else 0.

Your Task:
Your task is to only complete the function to find triplets.

Constrains:
1 <= T <= 100
1 <= N <= 103
-103 <= A <= 103

Example:
Input:
2
5
0 -1 2 -3 1
3
1 2 3

Output:
1
0
*/
bool findTriplets(int a[], int n)
{ 
    sort(a,a+n);
    int i,j,k;
    //Your code here
    for(i=0;i<n-1;i++)
    {
        j=i+1;
        k=n-1;
        while(j<k)
        {
        int s=a[i]+a[j]+a[k];
            if(a[i]+a[j]+a[k] == 0)
            return true;
            else if(s>0)k--;
            else j++;
        }
    }
    return false;
}
