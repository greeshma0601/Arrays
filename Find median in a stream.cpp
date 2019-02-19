/*
Find median in a stream Submissions: 32036   Accuracy: 30.57%   Difficulty: Hard   Marks: 8
Associated Course(s):   Interview Preparation   Sudo Placement [IITs]
                                  
Given an input stream of N integers. The task is to insert these numbers into a new stream and find the median of the stream formed by each insertion of X to the new stream.

Input:
The first line of input contains an integer N denoting the number of elements in the stream. Then the next N lines contains integer x denoting the number to be inserted into the stream.
Output:
For each element added to the stream print the floor of the new median in a new line.
 
Constraints:
1 <= N <= 106
1 <= x <= 106
 
Example:
Input:
4
5
15
1 
3
Output:
5
10
5
4
 
Explanation:
Testcase 1:
Flow in stream : 5, 15, 1, 3 
5 goes to stream --> median 5 (5) 
15 goes to stream --> median 10 (5, 15) 
1 goes to stream --> median 5 (5, 15, 1) 
3 goes to stream --> median 4 (5, 15, 1, 3) 

*/

/*

using namespace std;
int main()
 {
     int n,i;
	 cin>>n;
	 int v[n];
	 for(i=0;i<n;i++)
	 {
	     cin>>v[i];
	 }
	 priority_queue<int> maxHeap;
	 priority_queue<int,vector<int>,greater<int> > minHeap;
	 double median=0;
	 for(i=0;i<n;i++)
	 {
	     if(v[i]<=median) maxHeap.push(v[i]);
        else minHeap.push(v[i]);

        if(maxHeap.size()>minHeap.size()+1)
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } 
        if(minHeap.size()>maxHeap.size()+1)
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        } 

        if(maxHeap.size()==minHeap.size()) 
            median=(maxHeap.top()+minHeap.top())/2.0;
        else if(maxHeap.size()<minHeap.size())    
            median=double(minHeap.top());
        else median=double(maxHeap.top());    
        
        cout<<floor(median)<<"\n";
	 }
	 
	 
	return 0;
}

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    multiset<int> a;
    int x,size,median;
    cin >> x;
    a.insert(x);
    multiset<int>::iterator l,r;
    l=a.begin(); r=a.begin();
    size=1;
    median=((*l)+(*r))/2;
    
    for(int i=1;i<n;i++){
        cout << median << endl;
        int x;
        cin >> x;
        a.insert(x);
        if(size%2){
            if(x>=median) r++;
            else l--;
        }
        else{
            if(x >= *r) l++;
            else if(x < *l) r--;
            else{ r--; l++; }
        }
        size++;
        median=((*l)+(*r))/2;
    }
    cout << median << endl;
    
    return 0;
}
