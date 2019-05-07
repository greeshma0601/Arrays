/*
Choose and Swap Submissions: 986   Accuracy: 13.54%   Difficulty: Easy   Marks: 2
   
Problems
You are given a string s of lower case english alphabets. You can choose any two characters in the string and replace all the occurences of the first character with the second character and replace all the occurences of the second character with the first character. Your aim is to find the lexicographically smallest string that can be obtained by doing this operation at most once.

Input:
The first line of input contains an integer  T, denoting the number of test cases. Then T test cases follow. Each test case contains a string s of lower case English alphabets.

Output:
For each test case, in a new line print the lexicographically smallest string that is possible after doing the operation at most once.

Constraints:
1<=T<=300
1<=length of s<=10000

Example: 
Input:
2
ccad
abba
Output:
aacd
abba

Explanation: 
First Test Case
In ccad, we choose ‘a’ and ‘c’ and after doing the replacement operation once we get, aacd and this is the lexicographically smallest string possible.

Second Test Case
In abba, we can get baab after doing the replacement operation once for ‘a’ and ‘b’ but that is not lexicographically smaller than abba and so the answer is abba.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    map<char,int>m;
	    for(int i=0;i<s.size();i++)
	    {
	        char low=s[i];
            char high=s[i];
            int j;
            for(j=i+1;j<s.size();j++)
            {
                if(low>s[j] && m.find(s[j])==m.end())
                {
                    low=s[j];
                }
            }
            m[low]=1;
            if(low==high)
            {
                continue;
            }
            string ret=s;
            for(j=0;j<s.size();j++)
            {
                if(ret[j]==low)
                {
                    if(j<i)
                    {
                        break;
                    }
                    ret[j]=high;
                }
                else if(ret[j]==high)
                {
                    ret[j]=low;
                }
            }
            if(j==s.size())
            {
                s=ret;
                break;
            }
            
            	        
	    }
	    cout<<s<<endl;
	}
	return 0;
}
