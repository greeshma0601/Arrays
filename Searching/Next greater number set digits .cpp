/*
Next greater number set digits Submissions: 15099   Accuracy: 29.84%   Difficulty: Easy   Marks: 2
                        
Problems
Given a number n, find the smallest number that has same set of digits as n and is greater than n. If x is the greatest possible number with its set of digits, then print “not possible”.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is n,n is the number.

Output:

Print the greater number than n with same set of digits and if not possible then print "not possible" without double quote.

Constraints:

1 ≤ T ≤ 100
1 ≤ n ≤ 100000

Example:

Input
2
143
431

Output
314
not possible
 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s = to_string(n);
	    int i;
	    for(i=s.length()-2;i>=0;i--){
	        if(s[i] < s[i+1])
	            break;
	    }
	    if(i<0 && s[i+1]>=s[i+2]){
	        cout << "not possible" << endl;
	        continue;
	    }
	    int d1 = i,d2=-1;
	    int curr=INT_MAX;
	    for(;i<s.length();i++){
	        if(i==s.length()-1)
	            break;
	        if(s[i+1]<=s[d1])
	            break;
	    }
	    d2=i;
	    swap(s[d1],s[d2]);
	    string t = s.substr(d1+1);
	    sort(t.begin(),t.end());
	    for(int j=d1+1;j<s.length();j++)
	        s[j] = t[j-d1-1];
	    cout << s<<endl;
	}
	return 0;
}
