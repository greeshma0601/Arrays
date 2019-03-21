/*
Check set bits Submissions: 6757   Accuracy: 56.09%   Difficulty: Basic   Marks: 1
       
Problems
Discussions
Given a number N. Write a program to check whether every bit in the binary representation of the given number is set or not.

Input:
First line of input contains a single integer T which denotes the number of test cases. T test cases follows. First line of each test case contains a single integer N which denotes the number to be checked.

Output:
For each test case, print "YES" without quotes if all bits of N are set otherwise print "NO".

Constraints:
1<=T<=1000
0<=N<=1000

Example:
Input:
3
7
14
4
Output:
YES
NO
NO

*/


#include<bits/stdc++.h>
using namespace std;
bool checkSetBits(int n){
    
    // n+1 should be a power of 2
    
    // To check for power of 2
    
    // All powers of 2 have only one set bit so remove that set bit by n&(n-1) method
    
    // And if resultant is zero then it is power of 2
    
    // Doesn't work for n=0
    
    if(n==0){
        return false;
    }
    
    int num=n+1;
    
    if((num&(num-1))==0){
        return true;
    }
    else{
        return false;
    }
    
}
int main(){

    int t;
    cin>>t;
    while(t--){
    
        int n;
        cin>>n;
        if(checkSetBits(n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    

}
