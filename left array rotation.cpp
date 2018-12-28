
/*1
5
1 2 3 4 5
2

Output
3 4 5 1 2*/// of array rotation 
#include <bits/stdc++.h> 
using namespace std; 

/*Function to reverse arr[] from index start to end*/
void rvereseArray(int arr[], int start, int end) 
{ 
	while (start < end) 
	{ 
		int temp = arr[start]; 
		arr[start] = arr[end]; 
		arr[end] = temp; 
		start++; 
		end--; 
	} 
} 

/* Function to left rotate arr[] of size n by d */
void leftRotate(int arr[], int d, int n) 
{ 
	rvereseArray(arr, 0, d-1); 
	rvereseArray(arr, d, n-1); 
	rvereseArray(arr, 0, n-1); 
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	for (int i = 0; i < size; i++) 
	cout << arr[i] << " "; 
} 

/* Driver program to test above functions */
int main() 
{ int t;
cin>>t;
while(t--)
{
	
	int n ; 
	int d,i ;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>d;
	// Function calling 
	leftRotate(a, d, n); 
	printArray(a, n); 

    cout<<endl;
}	
	return 0; 
} 
