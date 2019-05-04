/*
Fill array with 1's Submissions: 7265   Accuracy: 21.47%   Difficulty: Easy   Marks: 2
         
Problems
Given an array of 0 and 1. In how many iterations it is possible that the whole array can be filled with 1's, if in a single iteration immediate neighbours of 1's can be filled.

Input:
The first line contains a single integer T, the number of test cases. The first line consists of a single integer N(length of array). The next line consists of a N spaced integers(either 0 or 1).

Output:
For each testcase, print the minimum number of iterations to fill the whole array with 1's (if possible). If it is not possible to fill the array with 1s, print "-1" (without quotes).

Constraints:
1 <= T <= 103
1 <= N <= 107
0 <= Ai <= 1

Examples:
Input:
2
4
1 0 1 0
17
0 0 1 1 0 0 1 1 0 1 1 1 1 0 0 0 1

Output:
1
2

Explanation:
Test Case 1: Both the 0s has 1 as their immediate neighbour. So, we only need one iteration to fill the array with 1.
*/
#include<iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    int start = 0;
	    while(start < n && arr[start]==0){
	        start++;
	    }
	    int end = n-1;
	    while(end >= 0 && arr[end] == 0){
	        end--;
	    }
	    int m  = 0;
	    int c = 0;
	    for(int i = start ; i <= end;){
	        c = 0;
	        while(i <= end && arr[i]==0){
	            c++;
	            i++;
	        }
	        m = max(m,c);
	        while(i <= end && arr[i]==1){
	            i++;
	        }
	    }
	    int ans = max(start ,n- end-1);
	    ans = max(ans , (m+1)/2);
	    if(n==ans){
	        ans = -1;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
