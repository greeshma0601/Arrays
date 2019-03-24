/*
Numbers containing 1, 2 and 3 Submissions: 20637   Accuracy: 20.09%   Difficulty: Easy   Marks: 2
Associated Course(s):   Geeks Classes in Noida   Geeks Classes DSA
           
Problems
Discussions
Given an array arr of N numbers. The task is to print only those numbers whose digits are from set {1,2,3}.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an integer N and the second line contains N space separated array elements.

Output:
For each test case, In new line print the required elements in increasing order. if there is no such element present in the array print "-1".

Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= A[i] <= 106

Example:
Input:
2
3
4 6 7
4
1 2 3 4

Output:
-1
1 2 3

*/

#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
 
map<ll,ll> arr;
int main()
 {
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll t,n,p;cin>>t;
    while(t--)
    {
        arr.clear();
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>p;
            arr[p]++;
        }
        bool check;
        int cnt=0;
        for(auto m: arr)
        {
            check = false;
            ll i = m.first;
          //  cout<<i<<endl;
            while(i)
            {
                if(i%10==1 || i%10==2 || i%10==3)
                    i/=10;
                else{
                    check=true;
                    break;
                }
            }
            if(!check){
                for(int k=0;k<m.second;k++)
                cout<<m.first<<" ";
                cnt++;
            }
        }
        if(cnt==0)
            cout<<-1<<endl;
        else
            cout<<endl;
    }
 
	return 0;
}
