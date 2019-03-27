/*
Pairs with Positive Negative values Submissions: 20587   Accuracy: 21.76%   Difficulty: Easy   Marks: 2
Associated Course(s):   Geeks Classes in Noida
      
Problems
Given an array of distinct integers, print all the pairs having positive value and negative value of a number that exists in the array.

NOTE: If there is no such pair in the array , print "0".

Input:
The first line consists of an integer T i.e number of test cases. The first line of each test case consists of an integer n.The next line of each test case consists of n spaced integers.

Output:
Print all the required pairs in the increasing order of their absolute numbers.

Constraints: 
1<=T<=100
1<=n<=1000
-1000<=a[i]<=1000

Example:
Input:
2
6
1 -3 2 3 6 -1
8
4 8 9 -4 1 -1 -8 -9

Output:
-1 1 -3 3 
-1 1 -4 4 -8 8 -9 9 
*/
#include <iostream>
#include<stack>
#include<vector>
#include<unordered_set>
#include<limits.h>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int num;
        cin>>num;
        vector<int>arr(num);
        set<int>s;
        unordered_set<int>m;
        for(int x=0; x<num; x++)
        {
            cin>>arr[x];
            m.insert(arr[x]);
        }
        for(int j=0; j<num; j++)
        {
            if(arr[j]>0)
            {   
                if(m.find(-(arr[j]))!=m.end())
                {
                    s.insert(arr[j]);
                }
            }
            else if(arr[j]<0)
            {
                if(m.find(abs(arr[j]))!=m.end())
                {
                    s.insert(abs(arr[j]));
                }
            }
        }
        if(s.size()!=0)
        {             
            for(auto p = s.begin(); p!=s.end(); p++)
            {
                int a = *p;
                cout<<-(a)<<" "<<a<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }        
    return 0;
}
