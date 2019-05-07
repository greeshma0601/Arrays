/*
Minimum Cost of ropes Submissions: 11080   Accuracy: 46.71%   Difficulty: Medium   Marks: 4
Associated Course(s):   Geeks Classes DSA- Tutorials
          
Problems
There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N where N is the number of ropes. The second line of each test case contains N input L[i],length of ropes.

Output:
For each testcase, print the minimum cost to connect all the ropes.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 ≤ L[i] ≤ 106

Example:
Input:
1
4
4 3 2 6

Output:
29

Explanation:
For example if we are given 4 ropes of lengths 4, 3, 2 and 6. We can connect the ropes in following ways.
1) First connect ropes of lengths 2 and 3. Now we have three ropes of lengths 4, 6 and 5.
2) Now connect ropes of lengths 4 and 5. Now we have two ropes of lengths 6 and 9.
3) Finally connect the two ropes and all ropes have connected.

Total cost for connecting all ropes is 5 + 9 + 15 = 29. This is the optimized cost for connecting ropes. Other ways of connecting ropes would always have same or more cost. For example, if we connect 4 and 6 first (we get three strings of 3, 2 and 10), then connect 10 and 3 (we get two strings of 13 and 2). Finally we connect 13 and 2. Total cost in this way is 10 + 13 + 15 = 38.
 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    vector<ll> v(n+1);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	   
	    
	    priority_queue<ll,vector<ll>,greater<ll> > pq;
	    
	    // Push all elements to the queue
	    for(int i=0;i<n;i++){
	        pq.push(v[i]);
	    }
	    
	    ll cost=0;
	    
	    while(pq.size()!=1){
	        
	        // Take out 2 minimum length ropes
	        ll first=pq.top();
	        pq.pop();
	        ll second=pq.top();
	        pq.pop();
	        
	        // Add cost of merging them
	        cost+=first+second;
	        
	        // Push the resultant rope into queue
	        pq.push(first+second);
	        
	    }
	    
	    cout<<cost<<endl;
	    
	}
	return 0;
}
