/*
Distance between 2 points Submissions: 3747   Accuracy: 33.48%   Difficulty: School   Marks: 0 *School Problem's Submission isn't counted in score!
         
Problems
Given coordinates of 2 points on a cartesian plane, output the distance between them rounded up to nearest integer.

Input:
The first line of the input contains the number of test cases T. For each test case there will be single line containing 4 integers denoting the 2 co-ordinates (x1,y1) and (x2,y2).

Output: 
For each test case print in a single line the distance between the two points.

Constraints:
1 <= T <= 100
-1000000 <= |x1,x2,y1,y2| <= 1000000

Example: 
Input:
4
0 0 2 -2
-20 23 -15 68
30 37 79 -51
-69 63 57 11

Output:
3
45
101
136

 
*/
#include<iostream>

using namespace std;
#include<math.h>
double round(double d)
{
  return floor(d + 0.5);
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     long int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  double ans=pow(pow((x2-x1),2)+pow((y1-y2),2),.5);
  int x=round(ans);
  cout<<x<<endl;
 }
}
