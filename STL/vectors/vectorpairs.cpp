/*


C++ STL | Set 2 (pair)
Submissions: 2138   Accuracy:

28.27%   Difficulty: Easy   Marks: 2
     

    Problems

Implement different operations on pairs.

Input:
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
A query can be of five types 
1. a s x y (Adds a pair with string s and values x,y to the vector A at the end )
2. b (returns the size of the vector A)
3. c (prints space separated values of each element of the vector of pairs A)
4. d (sorts the pair's array with respect to the values x,y in ascending order)


Output:
The output for each test case will  be space separated integers denoting the results of each query . 

Constraints:
1<=T<=100
1<=Q<=100

Example:

Input
2
5
a ga 4 5 a ra 1 2 a sh 1 1 d c
4
a geeks 10 12  a code 11 11 b c

Output
sh 1 1 ra 1 2 ga 4 5 
2 geeks 10 12 code 11 11


Explanation :
For the first test case
There are five queries. Queries are performed in this order
1. a ga 4 5   --> vector contents {ga,4,5} 
2. a ra 1 2    --> vector contents {ga,4,5}, {ra,1,2}
3. a sh 1 1    --> vector contents are {ga,4,5}, {ra,1,2}, {sh,1,1}
4. d               --> vector get sorted as {sh,1,1}, {ra,1,2}, {ga,4,5}
5. c               --> vector values printed as 'sh 1 1 ra 1 2 ga 4 5 ' without quotes 

For the sec test case 
There are four queries. Queries are performed in this order
1. a geeks 10 12 --> vector A has {geeks,10,12}  
2. a code 11 11   --> vector A has {geeks,10,12}, {code,11,11}
3. b       --> prints the size of the vector A ie 2
4. c       --> prints the elements of the pair of vectors as 'geeks 10 12 code 11 11' without quotes.


*/



/* Inserts a pair  <string,   pair<x, y> > >    into the vector A */
void add_pair(vector<pair<string,pair<int,int> > > &A, string str, int x, int y)
{
     // Your code here
     A.push_back(make_pair(str,make_pair(x,y)));
     
}
/* Returns the size of the vector A */
int get_size(vector<pair<string,pair<int,int> > > &A)
{
     // Your code here
     return A.size();
}
/* Prints space separated values of vector A */
void print_values(vector<pair<string,pair<int,int> > > &A)
{
     for(auto it=A.begin();it!=A.end();it++)
     {
         cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<" ";
     }
     // Your code here
}
bool comp(const pair<string,pair<int,int>> &a,const pair<string,pair<int,int>>  &b)
{
    if (a.second.first<b.second.first)
    {
        return 1;
    }
    else if(a.second.first == b.second.first)
    {
        if(a.second.second<b.second.second)
        return 1;
    }
    return 0;
}
/* Sorts the vector A based on value x and y*/
void sort_pair(vector<pair<string,pair<int,int> > > &A)
{
     // Your code here
     sort(A.begin(),A.end(),comp);
}
