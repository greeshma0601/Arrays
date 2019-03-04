/*
Find duplicates in an array
Given an array A[], Your task is to complete the function printDuplicates which prints the duplicate elements of the given array. If no duplicate element is found  print -1.

Note: Auxiliary Space must be O(1) and Time complexity must be O(n).

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N which denotes number of elements of Array. Second line of each test case contains N space separated integers denoting elements of Array A[].

Output:
Print the duplicate elements from the array.The order of the output should be as the element found to be repeated.

Constraints:
1<=T<=100
1<=N<=50
0<=A[]

Example:
Input:
2
4
0 3 1 2
5
2 3 1 2 3 
Output:
-1
2 3 

*/


void printDuplicates(int a[], int n)
{
    int i=0;int f=0;
    for(i=0;i<n;i++)
    {
        int index=a[i]%n;
        a[index]+=n;
        if((a[index]/n)>1 && a[index]/n<3)//to maintain same order
        {
            f=1;
            cout<<index<<" ";
        }
    }
  /*  for(i=0;i<n;i++)
    {
        if((a[i]/n)>1)
        {
            f=1;
            cout<<i<<" ";
        }
        
    }*/
    if(!f)cout<<"-1";
   //add code here.
  /* int f=0;
   for(int i=0;i<n;i++)
   {
   if(a[abs(a[i])]>=0)
   a[abs(a[i])]=-a[abs(a[i])];
   else
   {
       cout<<abs(a[i])<<" ";

       f=1;
   }
   }
   if(f == 0)cout<<"-1";*/
 
   }
