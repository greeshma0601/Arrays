/*
Minimum indexed character Submissions: 5954   Accuracy: 54.71%   Difficulty: Easy   Marks: 2
Associated Course(s):   Geeks Classes DSA   Geeks Classes in Noida
          
Problems
Given a string str and another string patt. Find the character in patt that is present at the minimum index in str. If no character of patt is present in str then print ‘No character present’.

Input:
The first line of input contains an integer T denoting the number of test cases. Then the description of T test cases follow. Each test case contains two strings str and patt respectively.

Output:
Print the character in patt that is present at the minimum index in str.
Print "No character present" (without quotes) if no character of patt is present in str.

Constraints:
1 <= T <= 105
1 <= |str|,|patt| <= 105

Example:
Input:
2
geeksforgeeks
set
adcffaet
onkl

Output:
e
No character present

Explanation:
Testcase 1: e is the character which is present in given patt "geeksforgeeks" and is first found in str "set".
 

** For More Input/Output Examples Use 'Expected Output' option **

*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void find(string str,string patt)
{
    unordered_map<char,int > ump;
    int minIndex=INT_MAX;
    int m=str.length();
    int n=patt.length();
    int curr=-1;
    for(int i=0;i<m;i++)
    {
        if(ump.find(str[i])==ump.end())
        {
            ump[str[i]]=i;//storing 1st index of each char
        }
        
        
    }
    for(int i=0;i<n;i++)
    {
        if(ump.find(patt[i])!=ump.end())
        {
            //curr=ump[patt[i]];
          if(minIndex>ump[patt[i]])
          {
              minIndex=ump[patt[i]];
          }
            
        }

    }
    
    if(minIndex!=INT_MAX)
    cout<<str[minIndex];
    else
    cout<<"No character present";
    cout<<endl;
    
    
    
    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str,patt;
	    cin>>str;
	    cin>>patt;
	    find(str,patt);
	    
	    
	}
	return 0;
}
