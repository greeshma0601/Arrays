/*
Tic-Tac-Toe
A Tic-Tac-Toe board is given after some moves are played. Find out if the given board is valid, i.e., is it possible to reach this board position after some moves or not.

Note that every arbitrary filled grid of 9 spaces isn’t valid e.g. a grid filled with 3 X and 6 O isn’t valid situation because each player needs to take alternate turns.

Note :  The game starts with X



Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is given as a 1D array of size 9.

Output:

Print Valid if board is valid, else Invalid.

Constraints:

1 ≤ T ≤ 100

Example:

Input:
2
X X O O X O O O O 
X X O O O X X O X

Output:
Invalid
Valid
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// This matrix is used to find indexes to check all 
// possible wining triplets in board[0..8] 
int win[8][3] = {{0, 1, 2}, // Check first row. 
                {3, 4, 5}, // Check second Row 
                {6, 7, 8}, // Check third Row 
                {0, 3, 6}, // Check first column 
                {1, 4, 7}, // Check second Column 
                {2, 5, 8}, // Check third Column 
                {0, 4, 8}, // Check first Diagonal 
                {2, 4, 6}}; // Check second Diagonal 
  
// Returns true if character 'c' wins. c can be either 
// 'X' or 'O' 
bool isCWin(char *board, char c) 
{ 
    // Check all possible winning combinations 
    for (int i=0; i<8; i++) 
        if (board[win[i][0]] == c && 
            board[win[i][1]] == c && 
            board[win[i][2]] == c ) 
            return true; 
    return false; 
} 
  
// Returns true if given board is valid, else returns false 
bool isValid(char board[9]) 
{ 
    // Count number of 'X' and 'O' in the given board 
    int xCount=0, oCount=0; 
    for (int i=0; i<9; i++) 
    { 
    if (board[i]=='X') xCount++; 
    if (board[i]=='O') oCount++; 
    } 
  
    // Board can be valid only if either xCount and oCount 
    // is same or xount is one more than oCount 
    if (xCount==oCount || xCount==oCount+1) 
    { 
        // Check if 'O' is winner 
        if (isCWin(board, 'O')) 
        { 
            // Check if 'X' is also winner, then 
            // return false 
            if (isCWin(board, 'X')) 
                return false; 
  
            // Else return true xCount and yCount are same 
            return (xCount == oCount); 
        } 
  
        // If 'X' wins, then count of X must be greater 
        if (isCWin(board, 'X') && xCount !=oCount+1 ) 
        return false;  
  
        // If 'O' is not winner, then return true 
        return true; 
    } 
    return false; 
} 
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;//cin>>n;
 char a[9];for(i=0;i<9;i++)cin>>a[i];
 (isValid(a))? cout <<"Valid":cout<<"Invalid";
 cout<<endl;
 }
	//code
	return 0;
}
