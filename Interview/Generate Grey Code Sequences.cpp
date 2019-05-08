/*
Generate Grey Code Sequences
Given a number N, your task is to complete the function which generates all n-bit grey code sequences, a grey code sequence is a sequence such that successive patterns in it differ by one bit.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N.

Output:
For each test case in print the generated grey code sequences separated by space.

Constraints:
1<=T<=10
1<=N<=10

Example(To be used for expected output):
Input:
2
2
1

Output:
00 01 11 10
0 1
*/
include <bits/stdc++.h>
using namespace std;
void generateCode(int );
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		generateCode(n);
   cout<<endl;
	}
	// your code goes here
	return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Prints the space separated n-bit gray codes sequence.
You are required to complete below method. */
void generateCode(int n)
{
     //Your code here
     if(n<=0)
     return;
     vector<string>v;
     v.push_back("0");
     v.push_back("1");
     int i,j;
     for(i=2;i<pow(2,n);i=i*2)
     {
         for(j=i-1;j>=0;j--)
         v.push_back(v[j]);
         
         for(j=0;j<i;j++)
         v[j]="0"+v[j];
         for(j=i;j<2*i;j++)
         v[j]="1"+v[j];
         
     }
     for(i=0;i<v.size();i++)
     cout<<v[i]<<" ";
    
}
