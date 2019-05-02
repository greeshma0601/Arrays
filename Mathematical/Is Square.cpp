/*
Is Square Submissions: 5129   Accuracy: 23.14%   Difficulty: Easy   Marks: 2
       
Problems
Given four different points in space. Find whether these points can form a square or not.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each testcase contains x1, y1, x2, y2, x3, y3, x4, y4(four points coordinates) separated by space.

Output:
Print "Yes"(without quotes) if it is square else "No"(without quotes).

Constraints:
1 ≤ T ≤ 30
1 ≤ x1, x2, x3, x4, y1, y2, y3, y4 ≤ 100

Example:
Input:
1
20 10 10 20 20 20 10 10

Output:
Yes
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int d[6];
         d[0]=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
         d[1]=sqrt(pow(x1-x4,2)+pow(y1-y4,2));
         d[2]=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
         d[3]=sqrt(pow(x3-x4,2)+pow(y3-y4,2));
         d[4]=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
         d[5]=sqrt(pow(x4-x2,2)+pow(y4-y2,2));
        
        sort(d,d+6);

        if(d[0]==d[1]&&d[1]==d[2]&&d[2]==d[3]&&d[3]==d[0]&&d[5]==d[4]&&d[5]!=0&&d[4]!=0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
	//code
	return 0;
}
