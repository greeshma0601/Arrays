/*
Search in a matrix Submissions: 18584   Accuracy: 36.82%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
                                 
Given a n x m matrix, where every row and column is sorted in increasing order, and a number x is given. The task is to find whether element x is present in the matrix or not.

Expected Time Complexity : O(m + n)

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consists of three lines. First line of each test case consist of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.

Output:
Corresponding to each test case, print in a new line, 1 if the element x is present in the matrix, otherwise simply print 0.

Constraints:
1 <= T <= 200
1 <= N, M <= 30
Example:
Input:
2
3 3
3 30 38 44 52 54 57 60 69
62
1 6
18 21 27 38 55 67
55

Output:
0
1

Explanation:
Testcase 1: 62 is not present in the matrix, so output is -1.

Testcase 2: 55 is present in the matrix at 5th cell.
 

*/

/*
You can go from top right or bottom left end check 
i representing row and j for col
1.if current element > x then i--;
2.if cuurent element < x then j++;
3.if current element == x then return

int search( vector<vector<int>>&v ,int m,int n,int x){
int i=0,j=n-1;
while(i<m&&j>=0){
if(v[i][j]==x)return 1;
if(v[i][j]>x)j--;else i++;
}
return 0;
}
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int m,n;
/*bool check(int a[][32],int m,int n,int k)
{
    
    int j=0,i;
        
        for(i=0;i<n*m;i++)
        {
         vector<int> v;
         while(j<n){v.push_back(a[i][j]);j++;}
         
         if (binary_search(v.begin(), v.end(), k))return 1; 
        }
    
    return 0;
}*/
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int i,j,k;cin>>m>>n;
 int a[m][32];vector<int>v;
 for(i=0;i<n*m;i++){int x;cin>>x;v.push_back(x);}
 /*for(j=0;j<n;j++)
 cin>>a[i][j];*/
 cin>>k;
 if (binary_search(v.begin(), v.end(), k))cout<<"1";else cout<<"0";cout<<endl;
 //if(!check(a,m,n,k))cout<<"0";else cout<<"1";cout<<endl;
 
     
     
 }
	//code
	return 0;
}
