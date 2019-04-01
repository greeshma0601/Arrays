/*
C++ STL Deque
Implement different operation on a Deque i.e. adding an element in front and end, removing an element from front and end, sort the Deque, reverse the Deque, getting the size of the Deque. 

Input:
The first line of input contains an integer T denoting the no of test cases. For each test case, the first line of input contains an integer Q denoting the no of queries followed by Q space separated queries. 
A query can be of the following types:
1 x (Adding an element in front of the deque and printing the deque)
2 x (Adding an element in last of the deque and printing the deque)
3 (Removing the element from the front of the deque and printing the deque)
4 (Removing the element from the last of the deque and printing the deque)
5 (Sorting the deque and printing the deque)
6 (Reversing the deque and printing the deque)
7 (Printing the deque)
8 (Returning the size of the deque)
9 (Printing the element that is in front of the deque)
10 (Printing the element that is in back of the deque)

Output:
For each test case, the output is according to the query Q performed and if the deque is empty the output is -1.

Constraints:
1<=T<=100
1<=Q<=100

Example:
Input:
1
10
1 6
2 9
9
10
5
6
7
8
3
4
Output:
6 
6 9 
6
9
6 9 
9 6 
9 6 
2
6 
-1

*/
//User function Template for C++
/*You are required to complete below methods*/
/*prints space separated 
elements of the deque A*/
void print(deque<int> &A)
{
	//Your code here
    if(A.empty())cout<<"-1";
    else
    {
        for(auto it=A.begin();it!=A.end();it++)
        cout<<*it<<" ";
    }
    cout<<endl;
}
/*inserts an element x at 
the front of the deque A*/
void add_in_front(deque<int> &A,int x)
{
	//Your code here
	A.push_front(x);
}
/*inserts an element x at 
the back of the deque A */
void add_in_back(deque<int> &A,int x)
{
	//Your code here
	A.push_back(x);
}
/*remove element from 
back of the deque A*/
void remove_from_back(deque <int> &A)
{
   //Your code here
   if(A.empty())cout<<"-1";
   else
   {
       A.pop_back();
   }
}
/*remove element from 
front of the deque A*/
void remove_from_front(deque<int> &A)
{
   //Your code here
    if(A.empty())cout<<"-1";
   else
   {
       A.pop_front();
   }
}
/*sort the the deque A in ascending order*/
void sort(deque<int> &A)
{
	//Your code here
	if(A.empty())cout<<"-1";
   else
	sort(A.begin(),A.end());
}
/*reverses the deque A*/
void reverse(deque<int> &A)
{
	//Your code here
	if(A.empty())cout<<"-1";
   else reverse(A.begin(),A.end());
}
/*returns the size of the deque  A */
int size(deque<int> &A)
{
	//Your code here
	return A.size();
}
/* returns element at front
of the deque*/
int element_at_front(deque <int> &A)
{
    //Your code here
    if(A.empty())cout<<"-1";
   else
    return A.front();
}
/*returns element at end
of the deque*/
int element_at_back(deque <int> &A)
{
    //Your code here
    if(A.empty())cout<<"-1";
   else
    return A.back();
}
