/*
Count zero Submissions: 4519   Accuracy: 24.97%   Difficulty: Basic   Marks: 1
        
Given a number d, representing the number of digits of a number. Find the total count of positive integers which have at-least one zero in them and consist d or less digits.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is D,D is number of digits.

Output:

Print the total count of positive integers which have at-least one zero in them.

Constraints:

1 ≤ T ≤ 15
1 ≤ N ≤ 15

Example:

Input:
2
2
3

Output:
9
180

*/
#include<iostream>
#include<cmath>
using namespace std;
long long int findCount(int d) 
{ 
    return 9*(pow(10,d-1) - pow(9,d-1)); 
} 
int main() {
	int t, d;
	cin>>t;
	
	while (t--) {
	    cin>>d;
	   long long int ct=0;
	    for (int i = 1; i <=d; i++) {
	        
	        ct+=findCount(i);
	        
	    }
	    cout<<ct<<endl;
	}
	return 0;
}
