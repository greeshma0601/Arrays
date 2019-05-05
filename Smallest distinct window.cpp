/*
Smallest distinct window Submissions: 8832   Accuracy: 38.51%   Difficulty: Medium   Marks: 4
              
Problems
Given a string 's'. The task is to find the smallest window length that contains all the characters of the given string at least one time.
For eg. A = “aabcbcdbca”, then the result would be 4 as of the smallest window will be “dbca”.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains a string S.

Output:
For each test case in a new line print the length of the smallest such string.

Constraints:
1 <= T <= 100
1 <= |S| <= 105

Example:
Input:
2
aabcbcdbca
aaab

Output:
4
2

Explanation:
Testcase 1: Smallest window size is 4 which is of "dbca" which consists all characters of the string.
*/
// C++ program to find the smallest window containing 
// all characters of a pattern. 
#include<bits/stdc++.h> 
using namespace std; 

const int MAX_CHARS = 256; 

// Function to find smallest window containing 
// all distinct characters 
string findSubString(string str) 
{ 
	int n = str.length(); 

	// Count all distinct characters. 
	int dist_count = 0; 
	bool visited[MAX_CHARS] = {false}; 
	for (int i=0; i<n; i++) 
	{ 
		if (visited[str[i]] == false) 
		{ 
			visited[str[i]] = true; 
			dist_count++; 
		} 
	} 

	// Now follow the algorithm discussed in below 
	// post. We basically maintain a window of characters 
	// that contains all characters of given string. 
	// https://www.geeksforgeeks.org/find-the-smallest-window-in-a-string-containing-all-characters-of-another-string/ 
	int start = 0, start_index = -1, min_len = INT_MAX; 

	int count = 0; 
	int curr_count[MAX_CHARS] = {0}; 
	for (int j=0; j<n; j++) 
	{ 
		// Count occurrence of characters of string 
		curr_count[str[j]]++; 

		// If any distinct character matched, 
		// then increment count 
		if (curr_count[str[j]] == 1 ) 
			count++; 

		// if all the characters are matched 
		if (count == dist_count) 
		{ 
			// Try to minimize the window i.e., check if 
			// any character is occurring more no. of times 
			// than its occurrence in pattern, if yes 
			// then remove it from starting and also remove 
			// the useless characters. 
			while (curr_count[str[start]] > 1) 
			{ 
				if (curr_count[str[start]] > 1) 
					curr_count[str[start]]--; 
				start++; 
			} 

			// Update window size 
			int len_window = j - start + 1; 
			if (min_len > len_window) 
			{ 
				min_len = len_window; 
				start_index = start; 
			} 
		} 
	} 

	// Return substring starting from start_index 
	// and length min_len 
	return str.substr(start_index, min_len); 
} 

// Driver code 
int main() 
{
    int t;cin>>t;
    while(t--){
    	string str;cin>>str; 
    	cout << findSubString(str).size()<<endl; 
    }
	return 0; 
} 
