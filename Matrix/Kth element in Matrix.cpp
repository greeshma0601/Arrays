/*
Kth element in Matrix
Given an n x n matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in the given 2D array.Your task is to complete the function kthSmallest which takes two arguments the first is a matrix (mat) and sec argument is the order of the matrix (n) and the function returns the kth smallest element in the matrix.

For example, consider the following 2D array.
        10, 20, 30, 40
        15, 25, 35, 45
        24, 29, 37, 48
        32, 33, 39, 50
The 3rd smallest element is 20 and 7th smallest element is 30

Input:
The first line of input is an integer T denoting the no of test cases . Then T lines follow . The first line of each test case contains an integer N denoting the size of the matrix then in the next line are N*N space separated values of the matrix . The third line contains an integer k.

Output:
For each test case print in a new line the kth smallest element of the matrix  .

Constraints:
1<=T<=100
1<= N<=20
1<= M[][]<=100

Example
Input
1
4
16 28 60 64 22 41 63 91 27 50 87 93 36 78 87 94 
3
Output
27
*/
// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
// A structure to store an entry of heap.  The entry contains
// a value from 2D array, row and column numbers of the value
struct HeapNode {
    int val;  // value to be stored
    int r;    // Row number of value in 2D array
    int c;    // Column number of value in 2D array
};
// A utility function to swap two HeapNode items.
void swap(HeapNode *x, HeapNode *y) {
    HeapNode z = *x;
    *x = *y;
    *y = z;
}
// A utility function to minheapify the node harr[i] of a heap
// stored in harr[]
void minHeapify(HeapNode harr[], int i, int heap_size)
{
    int l = i*2 + 1;
    int r = i*2 + 2;
    int smallest = i;
    if (l < heap_size && harr[l].val < harr[i].val)
        smallest = l;
    if (r < heap_size && harr[r].val < harr[smallest].val)
        smallest = r;
    if (smallest != i)
    {
        swap(&harr[i], &harr[smallest]);
        minHeapify(harr, smallest, heap_size);
    }
}
// A utility function to convert harr[] to a max heap
void buildHeap(HeapNode harr[], int n)
{
    int i = (n - 1)/2;
    while (i >= 0)
    {
        minHeapify(harr, i, n);
        i--;
    }
}
#define MAX 1000
// This function returns kth smallest element in a 2D array mat[][]
int kthSmallest(int mat[MAX][MAX], int n, int k);
 int mat[MAX][MAX];
// driver program to test above function
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>mat[i][j];
        int r;
        cin>>r;
    cout<<kthSmallest(mat,n,r)<<endl;
}
 // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
  return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this function*/
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  int a[n*n];int p=0;
  for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
  {
      a[p]=mat[i][j];
      p++;
  }
  sort(a,a+(n*n));
  return a[k-1];
}
