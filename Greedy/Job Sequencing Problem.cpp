/*
Job Sequencing Problem Submissions: 6670   Accuracy: 28.88%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Geeks Classes DSA
         
Problems
Given a set of N jobs where each job i has a deadline and profit associated to it. Each job takes 1 unit of time to complete and only one job can be scheduled at a time. We earn the profit if and only if the job is completed by its deadline. The task is to find the maximum profit and the number of jobs done.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case consist of an integer N in first line denoting the number of jobs and the next line consist of Job id, Deadline and the Profit associated to that Job.

Output:
Output the number of jobs done and the maximum profit.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Deadline <= 100
1 <= Profit <= 500

Example:
Input:
2
4
1 4 20 2 1 10 3 1 40 4 1 30
5
1 2 100 2 1 19 3 2 27 4 1 25 5 1 15

Output:
2 60
2 127

Explanation:
Testcase 1: 2 jobs can be done with maximum profit of 60.
 
*/
#include <iostream>
#include<algorithm>
using namespace std;
struct job{
    int jid,deadline,profit;
};
bool compare(job j1, job j2){
    return j1.profit>j2.profit;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        job arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i].jid;
	        cin>>arr[i].deadline;
	        cin>>arr[i].profit;
	    }
	    sort(arr,arr+n,compare);
	    
        bool slot[n];
        int maxprofit=0,c=0;
        for (int i=0; i<n; i++) 
          slot[i] = false; 
    for (int i=0; i<n; i++) 
    { 
       for (int j=min(n, arr[i].deadline)-1; j>=0; j--) 
       { 
          if (slot[j]==false) 
          { 
             c++;
             maxprofit=arr[i].profit+maxprofit;
             slot[j] = true; 
             break; 
          } 
       } 
    }
    
         cout << c<<" "<< maxprofit<<endl;
 
    }
	return 0;
}
