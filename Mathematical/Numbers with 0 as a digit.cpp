/*
Numbers with 0 as a digit Submissions: 1786   Accuracy: 35.97%   Difficulty: Basic   Marks: 1
      
Problems
Given an integer N. The task is to count the number of integers from 1 to N(inclusive) which contain 0’s as a digit.

Input:
The first line consists of an integer T i.e number of test cases. The only line of each test case consists of an integer N.

Output:
Print the required output.

Constraints: 
1<=T<=100
1<=n<=10000

Example:
Input:
2
21
101

Output:
2
11
*/

#include <iostream>
#include <string>
using namespace std;

int numZero(string inNum){
    int numCounter = 0;
    int numRange = stoi(inNum);
    for( int i = 1; i <= numRange; i++){
        if(i%10 == 0){
            numCounter++;
        }
        else{
            int tempNum = i;
            while(tempNum > 1){
                if(tempNum % 10 == 0){
                    numCounter++;
                    break;
                }
                else{
                    tempNum = tempNum / 10;
                }
            }
        }
    }
    return numCounter;
}

int main() {
	int testCases;
	string myNum;
	cin >> testCases;
	while(testCases--){
	    cin >> myNum;
	    cout << numZero(myNum) << endl;
	}
	return 0;
}
