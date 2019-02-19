/*
Overlapping rectangles
Given two rectangles, find if the given two rectangles overlap or not. A rectangle is denoted by providing the x and y co-ordinates of two points: the left top corner and the right bottom corner of the rectangle. Two rectangles sharing a side are considered overlapping.

Note : It may be assumed that the rectangles are parallel to the coordinate axis.

rectanglesOverlap

Input:
The first integer T denotes the number of testcases. For every test case, there are 2 lines of input. The first line consists of 4 integers: denoting the co-ordinates of the 2 points of the first rectangle. The first integer denotes the x co-ordinate and the second integer denotes the y co-ordinate of the left topmost corner of the first rectangle. The next two integers are the x and y co-ordinates of right bottom corner. Similarly, the second line denotes the cordinates of the two points of the second rectangle in similar fashion.

Output:
For each testcase, output (either 1 or 0) denoting whether the 2 rectangles are overlapping. 1 denotes the rectangles overlap whereas 0 denotes the rectangles do not overlap.

Constraints:
1 <= T <= 10
-104 <= x, y <= 104

Example:
Input:
2
0 10 10 0
5 5 15 0
0 2 1 1
-2 -3 0 2

Output:
1
0

Explanation:
Testcase 1: Given two rectangles overlap each other thus answer returns 1.

 

*/

#include<bits/stdc++.h> 
using namespace std;
struct Point 
{ 
	int x, y; 
}; 

// Returns true if two rectangles (l1, r1) and (l2, r2) overlap 
bool doOverlap(Point l1, Point r1, Point l2, Point r2) 
{ 
	// If one rectangle is on left side of other 
	if (l1.x > r2.x || l2.x > r1.x) 
		return false; 

	// If one rectangle is above other 
	if (l1.y < r2.y || l2.y < r1.y) 
		return false; 

	return true; 
} 


// Driver program to test above functions 
int main() 
{ 
    int t;cin>>t;
    while(t--){
        struct Point p1,q1,p2,q2;
        cin>>p1.x>>p1.y>>q1.x>>q1.y;
        cin>>p2.x>>p2.y>>q2.x>>q2.y;
        doOverlap(p1,q1,p2,q2)?cout<<"1\n":cout<<"0\n";
    }
	return 0; 
} 
