/*
Multimap Operations
You are given an array A of size N. you need to insert the elements of A into a multimap(element as key and index as value) and display the results. Also, you need to erase a given element x from the multimap and print "erased x" if successfully erased, else print "not found".

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains three lines of input. The first line contains N denoting the size of the array A. The second line contains N elements of the array. The third line contains element x that need to be erased from the set.

Output Format:
For each testcase, in a new line, print the required output.

Your Task:
Since this is a function problem, you don't need to take any input. Just complete the provided functions.

Constraints:
1 <= T <= 100
1 <= N <= 1000
1 <= Ai <= 106

Examples:
Input:
1
10
9 8 7 4 4 2 1 1 9 8
1
Output:
1 6
1 7
2 5
4 3
4 4
7 2
8 1
8 9
9 0
9 8
erased 1
2 5
4 3
4 4
7 2
8 1
8 9
9 0
9 8
*/
//User function Template for C++
multimap<int,int> multimapInsert(int arr[],int n)
{
    multimap<int,int>mp;
   //Insert arr[i] as key and i as value in the multimap 
    for(int i=0;i<n;i++)
    {
       mp.insert({arr[i],i});
    }
    
    return mp;
    
}
void multimapDisplay(multimap<int,int>mp)
{
    //Print the keys and value pairs in new line
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second;
        cout<<endl;
    }
}
void multimapErase(multimap<int,int>&mp,int x)
{
   //If and else condition to erase x from the multimap
   if(mp.find(x)!=mp.end())
   {
       mp.erase(x);
   
    cout<<"erased "<<x;
   } 
    
    else cout<<"not found";
    
    
    cout<<endl;
}
