/*
Common elements Submissions: 18127   Accuracy: 21.63%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
           
Given three increasingly sorted arrays A, B, C of sizes N1, N2, and N3 respectively, you need to print all common elements in these arrays.

Note: Please avoid printing the same common element more than once.

Input:
First line contains a single integer T denoting the total number of test cases. T testcases follow. Each testcase contains four lines of input. First line consists of 3 integers N1, N2 and N3, denoting the sizes of arrays A, B, C respectively. The second line contains N1 elements of A array. The third lines contains N2 elements of B array. The fourth lines contains N3 elements of C array.

Output:
For each testcase, print the common elements of array. If not possible then print -1.

Constraints:
1 <= T <= 100
1 <= N1, N2, N3 <= 107
1 <= Ai, Bi, Ci <= 1018

Example:
Input:
1
6 5 8
1 5 10 20 40 80
6 7 20 80 100
3 4 15 20 30 70 80 120
Output:
20 80

Explanation:
Testcase1:  20 and 80 are the only common elements
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        int *a=new int[n1];
        int *b=new int[n2];
        int *c=new int[n3];
        for(int i=0;i<n1;i++)
            cin>>a[i];
        for(int i=0;i<n2;i++)
            cin>>b[i];
        for(int i=0;i<n3;i++)
            cin>>c[i];   
        unordered_set<int> s1,s2,s3;
        vector<int> v;
        for(int i=0;i<n1;i++)
            s1.insert(a[i]);
        for(int i=0;i<n2;i++)
        {
            if(s1.find(b[i])!=s1.end())
                s2.insert(b[i]);
        }
        for(int i=0;i<n3;i++)
        {
            if(s2.find(c[i])!=s2.end())
                {
                    if(s3.find(c[i])==s3.end())
                    {
                        v.push_back(c[i]);
                        s3.insert(c[i]);
                    }
                }
        }
        if(v.size()==0)
            cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
    }
}
