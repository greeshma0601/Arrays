

/*

Trailing zeroes in factorial Submissions: 5549   Accuracy: 47.43%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Sudo Placement [IITs]
        
For an integer n find number of trailing zeroes in n! . 

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, it contains an integer 'N'.


Output:
In each seperate line output the answer to the problem.


Constraints:
1<=T<=100
1<=N<=1000


Example:
Input:
1
9

Output:
1
Trailing 0s in n! = Count of 5s in prime factors of n!
                  = floor(n/5) + floor(n/25) + floor(n/125) + ....
n = 5: There is one 5 and 3 2s in prime factors of 5! (2 * 2 * 2 * 3 * 5). So count of trailing 0s is 1.

n = 11: There are two 5s and three 2s in prime factors of 11! (2 8 * 34 * 52 * 7). So count of trailing 0s is 2.

We can easily observe that the number of 2s in prime factors is always more than or equal to the number of 5s. So if we count 5s in prime factors, we are done. How to count total number of 5s in prime factors of n!? A simple way is to calculate floor(n/5). For example, 7! has one 5, 10! has two 5s. It is done yet, there is one more thing to consider. Numbers like 25, 125, etc have more than one 5. For example if we consider 28!, we get one extra 5 and number of 0s become 6. Handling this is simple, first divide n by 5 and remove all single 5s, then divide by 25 to remove extra 5s and so on. Following is the summarized formula for counting trailing 0s.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int tz(int n)
{
    int i,c=0;
    for(i=5;n/i>=1;i*=5)
    {
        c+=n/i;
    }
    return c;
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
 int r=tz(n);
 cout<<r<<endl;
 }
	//code
	return 0;
}
