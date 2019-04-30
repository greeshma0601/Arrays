/*
Trisha's Number Submissions: 483   Accuracy: 49.5%   Difficulty: Easy   Marks: 2
   
Problems
Trisha is very good at maths. One day she was discussing palindromes. Her teacher asks Trisha to explain palindromes to the class, after doing so, her teacher asks her to find the smallest palindrome greater than 10, Trisha in no time answers the question answer: 11, moving forward her teacher starts asking her the same question for large values. As Trisha does not want to lose her reputation in the class, she asks you for help.

Input: 
The first line of the input contains an integer T denoting the number of test cases. The description of each test case is as follows. Each test case contains a single line with one integer ' X ' for which you have to find the smallest palindrome greater than the input number (X).

Output: For each X, output the smallest palindrome greater than X.
Constraints:  
1 < = T < = 10000
1 < = X  < = 10000
Example:
Input:
4
23
189
10009
33

Output:
33
191
10101
44

Explanation:  For the first test case 23 the smallest number which is a palindrome and greater than 23 is 33. 
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPalindrome(int n)
{
    string s=to_string(n);
    string a=s;
    reverse(s.begin(),s.end());
    if(s == a)
    return 1;
    return 0;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int n;
 cin>>n;
 int f=1;n+=1;int r;
 while(f)
 {
     if(isPalindrome(n))
     {r=n;f=0;}
     else
     {n++;}
 }
 cout<<r<<endl;
 }
	//code
	return 0;
}
