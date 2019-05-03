/*
Swapping pairs make sum equal
Given two arrays of integers, write a program to check if a pair of values (one value from each array) exists such that swapping the elements of the pair will make the sum of two arrays equal.

Input:
First line of input contains a single integer T which denotes the number of test cases. T test cases follows. First line of each test case contains two space separated integers N and M. Second line of each test case contains N space separated integers denoting the elements of first array. Third line of each test case contains M space separated integers denoting the elements of second array.

Output:
For each test case, print 1 if there exists any such pair otherwise print -1.

Constraints:
1 <= T <= 100
1 <= N <= 104
1 <= M <= 104
0 <= elements <= 104

Example:
Input:
2
6 4
4 1 2 1 1 2
3 6 3 3
4 4
5 7 4 6
1 2 3 8

Output:
1
1

Explanation:
Testcase 1: 1 and 3 are two such values one from first array other from second one, if we swap these two values then we will get both arrays sum as equal.
*/
#include <bits/stdc++.h>
using namespace std;

int isSwap(int* A,int* B,int n1,int n2){
    int sum1=0,sum2=0,i,j;
    for(i=0;i<n1;i++){
        sum1+=A[i];
    }
    for(i=0;i<n2;i++){
        sum2+=B[i];
    }
    int diff=abs(sum1-sum2);
    
    i=0;
    j=0;
    while(i<n1 and j<n2){
        if(abs(A[i]-B[j])==diff/2){
            
            return 1;
            
        }
        else if(A[i]>B[j])
        i++;
        else
        j++;
    }
    return -1;
}

int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int n1,n2,i;
	    cin>>n1>>n2;
	    int A[n1];
	    for(i=0;i<n1;i++){
	        cin>>A[i];
	    }
	    int B[n2];
	    for(i=0;i<n2;i++){
	        cin>>B[i];
	    }
	    cout<<isSwap(A,B,n1,n2)<<"\n";
	}
	return 0;
}
