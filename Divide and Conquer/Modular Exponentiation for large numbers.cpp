/*
Modular Exponentiation for large numbers Submissions: 4349   Accuracy: 57.99%   Difficulty: Medium   Marks: 4
      
Problems
Implement pow(A, B) % C.

In other words, given A, B and C, find (AB)%C.

 

Input:

The first line of input consists number of the test cases.

 The following T lines consist of 3 numbers each separated by a space and in the following order:

A B C

'A' being the base number, 'B' the exponent (power to the base number) and 'C' the modular.

 

Output:

In each separate line print the modular exponent of the given numbers in the test case.


Constraints:

1 ≤ T ≤ 70

1 ≤ A ≤ 10^5

1 ≤ B ≤ 10^5

1 ≤ C ≤ 10^5


Example:

Input:

3
3 2 4
10 9 6
450 768 517

Output:

1
4
34
*/
//https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int a,b,c;
 cin>>a>>b>>c;
 
  
		    long s=1;
		    
		    for(int i=0;i<b;i++)
		    {
		        s=((s%c)*(a%c))%c;
		    }
		    cout<<s<<endl;
 }
	//code
	return 0;
}
