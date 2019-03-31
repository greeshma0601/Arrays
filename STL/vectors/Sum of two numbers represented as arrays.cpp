/*
Sum of two numbers represented as arrays Submissions: 6812   Accuracy: 29.31%   Difficulty: Easy   Marks: 2
          
Problems
Given two numbers represented by two different arrays A and B. The task is to find the sum array. The sum array is an array representation of addition of two input arrays.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case contains two integers N and M separated by a space denoting the size of A and B respectively. The second line of each test case contains N elements and next line contains M elements.

Output:
Output the sum array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ M ≤ 106
0 ≤ Ai, Bi≤ 9

Example:
Input:
2
3 3
5 6 3
8 4 2
6 4
2 2 7 5 3 3
4 3 3 8 

Output:
1 4 0 5
2 3 1 8 7 1

Explanation:
Testcase 2: Sum of each elements of both arrays A and B gives an array equals 2, 3, 1, 8, 7, 1.
*/
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;




int a[10000000];
int b[10000000];

int main() {
	//code
	vector <int> v ;
	
	int t;
	
	cin >> t;
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    for(int i = 0; i < n; i++){
	        cin >> a[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> b[i];
	    }
	    
	    int c = 0;
	    int i = 0, j = 0, s = 0;
	    int end = min(n, m);
	    for( i = n-1, j = m-1; i >=n-end && j >= m-end; i--,j--){
	           s = a[i] + b[j] + c;
	       v.push_back(s%10);
	       c=s/10;
	    }
	    
	    if(i >= 0 && j < 0){

	        while(i>=0){
	            int s = a[i] + c;
                                                            
	            v.push_back(s%10);
	            if(s>9){
    	            if(s%10 >= 0){
    	                c = 1;
    	            }
	            }
	            else{
	                c = 0;   
	            }
	         i--;
	        }
	       
	    }
	    else if(j >= 0 && i < 0){
	        
	        while(j >= 0){

	            int s = a[j] + c;
	            v.push_back(s%10);
	            if(s%10 > 0){
	                c = s%10;
	            }
	            if(s%10 == 0){
	                c = 1;
	            }
	            j--;
	        }
	    }
	    
	    reverse(v.begin(), v.end());
	    
	    if(c > 0){
	        cout << c << " ";
	    }
	    
	    for(int i = 0;i<v.size();i++){
	        cout << v[i] << " ";
	    }
	    cout << endl;
	    v.clear();

	}
	
	return 0;
}
