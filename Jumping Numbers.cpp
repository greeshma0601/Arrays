/*
Jumping Numbers Submissions: 15347   Accuracy: 34.69%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Sudo Placement [IITs]
     
Given a positive number X. Find all Jumping Numbers smaller than or equal to X. 
Jumping Number: A number is called Jumping Number if all adjacent digits in it differ by only 1. All single digit numbers are considered as Jumping Numbers. For example 7, 8987 and 4343456 are Jumping numbers but 796 and 89098 are not.

Input:
The first line of the input contains T denoting the number of testcases. Each testcase contain a positive number X.

Output:
Output all the jumping numbers less than X in sorted order. Jump to example for better understanding.

Constraints:
1 <= T <= 100
1 <= N <= 109

Example:
Input:
2
10
50
Output:
0 1 2 3 4 5 6 7 8 9 10
0 1 2 3 4 5 6 7 8 9 10 12 21 23 32 34 43 45

Explanation:
Testcase 2: Here, the most significant digits of each jumping number is following increasing order, i.e., jumping numbers starting from 0, followed by 1, then 2 and so on, themselves being in increasing order 2, 21, 23.

*/

#include <iostream>
#include<bits/stdc++.h> 
#include <algorithm>
using namespace std;

void bfs(vector<int> &numbers,int current_number,int x)
{
    std::queue<int> queue;
    queue.push(current_number);
    
    while(!queue.empty())
    {
        
    current_number = queue.front();
    queue.pop();
    
    if(current_number <= x)
    {
        // cout << current_number << " ";
        numbers.push_back(current_number);
        int last_digit = current_number % 10;
        
        if(last_digit == 0)
        queue.push(current_number*10 + last_digit+1); // 0 only has 1 for valid adjacent digit
        
        else if (last_digit == 9)
        queue.push(current_number*10 + last_digit-1); // 9 only has 8 for valid adjacent digit
        
        else
        {
        queue.push(current_number*10 + last_digit-1); // for 1, this gives 10
        queue.push(current_number*10 + last_digit+1);// for 1, this gives 12
        }
    }
    }
}



void jumpingNumbers(int x)
{
    vector<int> numbers;
    numbers.push_back(0); // 0 present in all sequences
    
    for (int i = 1; i <= 9 && i <= x; i++) {
        bfs(numbers,i,x); // go from 1 to 9, 1 prints 10,12,101...x, 2 prints 21,23,...x so on using bfs
    }
    
    sort(numbers.begin(),numbers.end()); // to preserve order
    
    for (int i : numbers) {
        cout << i << " ";
    }
    
}



int main() {
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int x;
	    cin >> x;
	    jumpingNumbers(x);
	    cout << endl;
	}
	
}
