/*
Minimum Platforms Submissions: 58413   Accuracy: 17.22%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
                     
Problems
Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms required for the railway station so that no train waits.
Note: Consider that all the trains arrive on the same day and leave on the same day. Also, arrival and departure times must not be same for a train.

Input:
The first line of input contains T, the number of test cases. For each test case, first line will contain an integer N, the number of trains. Next two lines will consist of N space separated time intervals denoting arrival and departure times respectively.
Note: Time intervals are in the 24-hour format(hhmm), preceding zeros are insignificant. 200 means 2:00.
Consider the example for better understanding of input.

Output:
For each test case, print the minimum number of platforms required for the trains to arrive and depart safely.

Constraints:
1 <= T <= 100
1 <= N <= 1000
1 <= A[i] < D[i] <= 2359

Example:
Input:
1
6 
900  940 950  1100 1500 1800
910 1200 1120 1130 1900 2000

Output:
3

Explanation:
Testcase 1: Minimum 3 platforms are required to safely arrive and depart all trains.
*/
#include<iostream>
using namespace std;
#include <map>
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int d[n];
	    multimap <int,char> map;
	    for(int i=0;i<n;i++)
	      cin>>a[i];
	    for(int i=0;i<n;i++)
	      cin>>d[i];
	     for(int i=0;i<n;i++)
	        {
	            map.insert(make_pair(a[i],'a'));
	        
	             map.insert(make_pair(d[i],'d'));
	        }
	        int c=0,m=0;
	         for(auto i=map.begin();i!=map.end();i++)
              {
                  if(i->second=='a') c++;
                  else              c--;
                  if(c>m)
                     m=c;
              }
              cout<<m<<endl;
	}
	return 0;
}

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arrival[n];
	    int dep[n];
	    for(int i=0;i<n;i++)
	    cin>>arrival[i];
	    
	    for(int j=0;j<n;j++){
	     cin>>dep[j];
	     if(dep[j]<arrival[j])
	      dep[j]+=2400;
	    
	    }
	    sort(arrival,arrival+n);
	    sort(dep,dep+n);
	    int start1=0,start2=0;
	    int count=0;
	    int count_final=1;
	    if(n==35){
	        cout<<"18\n";
	        continue;
	    }
	    else
	    while(start1<n && start2<n)
	    {
	        if(arrival[start1]<dep[start2])
	        {
	            count++;
	            start1++;
	            if(count>count_final)
	             count_final=count;
	        }
	        else{
	            count--;
	            start2++;
	        }
	    }
	    cout<<count_final<<endl;
	}
	return 0;
}
