/*

Peak element
Given an array A of integers. The task is to find a peak element in it.
An array element is peak if it is not smaller than its neighbors. For corner elements, we need to consider only one neighbor. 

Note: There may be multiple peak element possible, in that case you may return any valid index.

Input Format:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N. Then in the next line are N space separated values of the array.

Output Format:
For each test case output will be 1 if the index returned by the function is an peak index.

Your Task:
You don't have to take any input. Just complete the provided function and return the valid index.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= A[] <= 1000

Example:
Input:
2
3
1 2 3
2
3 4
Output:
1
1

Explanation:
Testcase 1: In the given array, 3 is the peak element.
Testcase 2: 4 is the peak element.
 
*/

int peak(int a[], int n)
{
   // Your code here
   if(n == 1)return 0;
   if(a[0]>a[1])return 0;
   for(int i=1;i<n-1;i++)
   {
       if(a[i]>a[i+1] && a[i]>a[i-1])
       return i;
   }
   if(a[n-1]>a[n-2])return n-1;
}
