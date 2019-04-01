/*
C++ STL List
Implement different operation on List A i.e. adding an element in front and end, removing an element from the front and end, sorting elements, reversing the list and printing the list.

Input:
The first line of input contains an integer T denoting the no of test cases.For each test case, the first line of input contains an integer Q denoting the no of queries. Then in the next line are Q space separated queries.
A query can be of eight types 
1 x (Adds an element x to the list A at the end and print list A)
2 (Sorts the list A in ascending order and print list A )
3 (Reverses the list A and print list A)
4 (Prints the size of the list A)
5 (Prints space-separated values of the list)
6 (Remove an element from the back of the list and print list A )
7(Remove an element from the front of the list and print list A)
8 x (Adds element x in front of the list and print list A)

Output:
The output for each test case will be according to the query that is performed and if the list is empty output is -1. 

Constraints:
1<=T<=100
1<=Q<=100

Example:
Input:
1
8
1 5
8 1
3
4
5
6
1 6
7
Output:
5
1 5
5 1 
2
5 1
5
5 6
6

*/
//User function Template for C++
/*You are required to complete below methods*/
/*prints space separated 
elements of list A*/
void print(list<int> &A)
{
	//Your code here
	if(A.empty())cout<<"-1";
	else{
	for(auto it=A.begin();it!=A.end();it++)
	{
	    cout<<*it<<" ";
	}}
	cout<<endl;
}
/*remove element from 
back of list A*/
void remove_from_back(list<int> &A)
{
   //Your code here
   if(A.empty()) cout<<"-1";
   
  else A.pop_back();
}
/*remove element from 
front of list A*/
void remove_from_front(list<int> &A)
{
   //Your code here
   if(A.empty()) cout<<"-1";
   
  else A.pop_front();
}
/*inserts an element x at 
the back of the list A */
void add_to_list(list<int> &A,int x)
{
	//Your code here
	A.push_back(x);
}
/*sort the list A in ascending order*/
void sort_list(list<int> &A)
{
	//Your code here
	if(A.empty()) cout<<"-1";
	else A.sort();
}
/*reverses the list A*/
void reverse_list(list<int> &A)
{
	//Your code here
	if(A.empty()) cout<<"-1";
	
	else A.reverse();
}
/*returns the size of the list  A */
int size_of_list(list<int> &A)
{

	
	 return A.size();
}
/*inserts an element x at 
the front of the list A*/
void add_from_front(list<int> &A,int x)
{
	//Your code here
	A.push_front(x);
}
