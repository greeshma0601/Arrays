/*
Numbers with same first and last digit Submissions: 5291   Accuracy: 27.84%   Difficulty: Easy   Marks: 2
        
Problems
Given an range of number's starting with integer L and ending at R, the task is to count the numbers which have same first and last digits.

Input:
The first line of the input contains an integer T, denoting the number of test cases. The T test case follow. The only line of the each test case contains two space seperated integer's L and R. 

Output:
For each test case output a single line containing a single integer denoting the count of the required number's.

Constraints:
1<=T<=104
1<=L, R<=10^8

Example:
Input:
2
7 68
5 40

Output:
9
8

Explanation:
TestCase1:
Number with same first and last digits in the given range are: [7 8 9 11 22 33 44 55 66].
*/
#include<bits/stdc++.h>
using namespace std;
bool can_be_counted(long long int i){
    if(i/10==0){
        return true;
    }
    int firstDigit,lastDigit;
    lastDigit=i%10;
    while(i>9){
        i=i/10;
    }
    firstDigit=i;
    return firstDigit==lastDigit;
    
}
int main()
 {
	int test;
	cin>>test;
	while(test--){
	    long long int lr,ur;
	    cin>>lr>>ur;
	    long long int count=0;
	    for(long long int i=lr;i<=ur;i++){
	        if(can_be_counted(i)){
	            count++;
	        }
	        
	    }
	    cout<<count<<endl;
	
	
	
	
	
	}
	return 0;
}
