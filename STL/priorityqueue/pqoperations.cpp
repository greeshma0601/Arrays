/*
C++ STL Priority Queue Submissions: 1279   Accuracy: 16.93%   Difficulty: Easy   Marks: 2
        
Problems
Implement different operations on Priority Queue .i.e. adding element, removing element, size of priority queue, print the queue and top element of queue. 

Input:
The first line of input contains an integer T denoting the no of test cases. For each test case, the first line of input contains an integer Q denoting the no of queries followed by Q space separated queries. 
A query can be of the following types:
1 x (Adding x to the priority queue and print the queue)
2 (Removing the element from the top of the priority queue and printing that element )
3 (Get the element at the top of the priority queue)
4 (Get the size of the priority queue)
5 (Print the priority queue) 

Output:
For each test case, the output is according to the query Q performed and if the priority queue is empty the output is -1.

Constraints:
1<=T<=100
1<=Q<=100

Example:
Input:
1
8
1 6
1 1
1 7
4
3
2
5
2
Output:
6
6 1
7 6 1
3
7
7 
6 1 
6

Explanation:
1 6 means adding 6 in the queue and printing that, similarly adding 1 and 7 in the queue and printing the queue i.e. 7 6 1. By 4 it returns the size of the queue i.e 3. With 3 as input, it returns the element at the top i.e 7. With 2 it removes the top element i.e 7 from the queue and prints the element i.e. 7. Having 5 as input, it prints the queue i.e. 6 1 and again 2 remove the element and prints that i.e 6.
*/
void addElement(priority_queue<int> & A, int x)
{
    //your code here
    A.push(x);
    
}
/* remove top element from 
the priority queue*/
void remove_Element(priority_queue<int> &A)
{
    //your code here
    if(A.empty())cout<<"-1"<<endl;
    else {cout<<A.top()<<" "<<endl;A.pop();}
}
/*  returns the top element 
of the priority queue*/
int getElement_at_top(priority_queue<int> &A)
{
    //your code here
    if(A.empty())return -1;
    return A.top();
}
/* returns the size of
the priority queue*/
int getSize(priority_queue<int> &A)
{
    //your code here
    if(A.empty())return -1;
    return A.size();
}
/* prints the element in 
the priority queue*/
void showpq(priority_queue <int> gq) 
{ 
    priority_queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout <<g.top()<<" "; 
        g.pop(); 
    } 
    cout<<endl; 
} 

void print(priority_queue<int> &A)
{
    //your code here
    if(A.empty())cout<<"-1"<<endl;
    else{
   showpq(A);
    }
}
