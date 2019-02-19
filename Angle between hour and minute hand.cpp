/*
Angle between hour and minute hand Submissions: 18738   Accuracy: 20.16%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation   Sudo Placement [IITs]
              
Calculate the angle between hour hand and minute hand.

There can be two angles between hands, we need to print minimum of two. Also, we need to print floor of final result angle. For example, if the final angle is 10.61, we need to print 10.

 

Input:

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consists of one line conatining two space separated numbers h and m where h is hour and m is minute.

Output:
Coresponding to each test case, print the angle b/w hour and min hand in a separate line.

Constraints:

1 ≤ T ≤ 100
1 ≤ h ≤ 12
1 ≤ m ≤ 60

Example:

Input
2
9 60
3 30

Output
90
75
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int hm(double h,double m)
{
    if(h == 12)h=0;
    if(m == 60)m=0;
    double ha=0.5*(60*h);
    double ma=0.5*11*m;
    float angle=abs(ha-ma);
    angle=abs(min(360-angle,angle));
    return floor(angle);
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 double h,m;
 cin>>h>>m;
 int r=hm(h,m);
 cout<<r<<endl;
 }
	//code
	return 0;
}
