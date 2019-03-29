/*
C++ STL | Set 6 (set)
Implement different operations on a set s .

Input:
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
A query can be of four types 
1. a x (inserts an element x to the set s)
2. b (prints the contents of the set s)
3. c x (erases an element x from the set s)
4. d x (prints 1 if the element x is present in the set else print -1)
5. e (prints the size of the set s)

Output:
The output for each test case will  be space separated integers denoting the results of each query . 

Constraints:
1<=T<=100
1<=Q<=100

Example:

Input
2
6
a 1 a 2 a 3 b c 2 b
5
a 1 a 5 e d 5 d 2
 
Output
1 2 3 1 3
2 1 -1

Explanation :
For the first test case
There are six queries. Queries are performed in this order
1. a 1     { insert 1 to set now set has {1} }
2. a 2     {inserts 2 to set now set has {1,2} }
3. a 3     {inserts 3 to set now set has {1,2,3} }
4. b        {prints the set contents ie 1,2,3}
5. c 2     {removes 2 from the set }
6. b        {prints the set contents ie 1,3}

For the second test case 
There are five queries. Queries are performed in this order
1. a 1     {inserts 1 to set now set has {1} }
2. a 11   {inserts 11 to set now set has {1,11} }
3. e        {prints the size of the set ie 2}
4. d 5     {since five is present prints 1}
5. d 2     {since 2 is not present in the set prints -1}

*/

/* You are required to complete below methods */
/*inserts an element x to the set s */
void insert(set<int> &s,int x)
{
    //Your code here
    
    s.insert(x);
}
/*prints the contents of the set s */
void print_contents(set<int> &s)
{
    //Your code here
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
}
/*erases an element x from the set s */
void erase(set<int> &s,int x)
{
    //Your code here
    s.erase(x);
}
/*returns 1 if the element x is
present in set s else returns -1 */
int find(set<int> &s,int x)
{
    
    //Your code here
    set<int>::iterator it;
    it=s.find(x);
    if(it!=s.end())
    {
       return 1;
    }
    return -1;
    
}
/*returns the size of the set s */
int size(set<int> &s)
{
   //Your code here
   return s.size();
}
