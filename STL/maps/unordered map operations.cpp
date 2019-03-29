/*
C++ STL | Set 7 (unordered map) Submissions: 506   Accuracy: 46.86%   Difficulty: Basic   Marks: 1
      
Problems
Implement different operations on unordered maps.

Input:
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
A query can be of four types 
1. a x y (adds an entry with key x and value y to the unordered map)
2. b x (print value of  x if present in the unordered map else print -1. )
3. c (prints the size of the unordered map)
4. d x (removes an entry with key x from the unordered map)

Output:
The output for each test case will  be space separated integers denoting the results of each query . 

Constraints:
1<=T<=100
1<=Q<=100

Example(To be used only for expected output):

Input
2
5
a 1 2 a 66 3 b 66 d 1 c
3
a 1 66 b 5 c

Output
3 1
-1 1

Explanation :
For the first test case
There are five queries. Queries are performed in this order
1. a 1 2     -->  map has a key 1 with value 2 
2. a 66 3   ---> map has a key 66 with value 3
3. b 66      ---> prints the value of key 66 if its present in the map ie 3.
4. d 1        --->  erases an entry from map with key 1
5. c           ---> prints the size of the map ie 1

For the sec test case 
There are three queries. Queries are performed in this order
1. a 1 66   ---> adds a key 1 with a value of 66 in the map
2. b 5        --->  since the key 5 is not present in the map hence -1 is printed.
3. c           ---> prints the size of the map ie 1

*/


/*You are required to complete below methods */
/*Inserts an entry with key x and value y in map */
void add_value(unordered_map<int,int> &m,int x,int y)
{
	//Your code here
//	m.insert(pair<int,int>(x,y));

    m[x]=y;
}
/*Returns the value with key x from the map */
int find_value(unordered_map<int,int> &m,int x)
{
      //Your code here
      if(m.find(x)!=m.end())
      {
         return m[x]; 
      }
      return -1;
}
/*Returns the size of the map */
int getSize(unordered_map<int,int> &m)
{
	//Your code here
	return m.size();
}
/*Removes the entry with key x from the map */
void removeKey(unordered_map<int,int> &m,int x)
{
	//Your code here
	m.erase(x);
}
