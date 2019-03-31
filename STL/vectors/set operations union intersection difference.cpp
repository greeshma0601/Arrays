/*
C++ Sets
Write a program to perform set operation i.e union, intersection and difference on sets using set_union, set_difference and set_intersection functions of STL.
Input: 
The first line of the input contains T denoting the number of test cases. For each test case, the first line takes 2 integer input m & n denoting the size of the two sets A & B. The next line contains m space separated integers of set A, followed by n-space separated integers of set B.

Output: 
For each test case, the output is the set union(A U B), the difference(A-B) and the intersection of the two sets A & B, each in a new line and if no element present after the operation, output is 0.

Constraints:
1<=T<=100
1<=n,m<=50
Example:
Input
1
4 5
1 2 3 4
3 4 5 6 7
Output:
1 2 3 4 5 6 7
1 2
3 4

Explanation:
Union of two sets A i.e (1 2 3 4) and B i.e(3 4 5 6 7) is 1 2 3 4 5 6 7.
Difference i.e A-B is 1 2.
The intersection is 3 4.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {  int t;
    cin>>t;
    while(t--){
    int m,n,x; cin>>m>>n;
    set<int> s1,s2;
    for(int i=0;i<m;i++){
        cin>>x;
        s1.insert(x);
    }
    for(int i=0;i<n;i++){
        cin>>x;
        s2.insert(x);
    }
    vector<int>v;
    set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(v));
    auto it=v.begin();
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    v.clear();
    set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(v));
	if(v.size()){
	    auto it=v.begin();
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    v.clear();
	}
     else
     cout<<"0"<<endl;
     set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(v));
	if(v.size()){
	    auto it=v.begin();
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    v.clear();
	}
     else
     cout<<"0"<<endl;
    }
	return 0;
}
