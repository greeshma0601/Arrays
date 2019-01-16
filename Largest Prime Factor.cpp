/*
Largest prime factor Submissions: 9317   Accuracy: 31.67%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
          
Given a number N, the task is to find the largest prime factor of that number.

Input:
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. Each test case contains an integer N.

Output:
For each test case, in a new line, print the largest prime factor of N.

Constraints:
1 <= T <= 100
2 <= N <= 1010

Example:
Input:
2
6
15
Output:
3
5
 





*/





#include <iostream>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


bool isPrime(int n)
{
    if(n==1) // exception
    return false;
    
    for (int i = 2; i <= sqrt(n); i++) {
        if(n%i==0)
        return false;
    }
    return true;
}


int max(int a,int b)
{
    if (a>b)
    return a;
    return b;
}

int largestPrime(int number)
{   
    int max_factor = 2;
    
    for (int i = 2; i <= sqrt(number); i++) {
        
        if(number%i==0) // is it a factor
        {
        if(isPrime(number/i)) // check its bigger counterpart first if its a prime factor
        max_factor = max(max_factor,number/i);
        else if(isPrime(i)) // is it a prime factor
        max_factor = max(max_factor,i);
        }
    }
    
    return max_factor;
}


int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	   int number;
	   
	   cin >> number;
	   
	   if(isPrime(number)) // if already prime dont check
	   cout << number << endl;
	   else
	   cout << largestPrime(number) << endl;
	}
	
	return 0;
}
