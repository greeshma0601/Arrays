/*
Problem
Submissions
Leaderboard
Discussions
Editorial
Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each of the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in your array.

For example, the length of your array of zeros . Your list of queries is as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1
Add the values of  between the indices  and  inclusive:

index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]
The largest value is  after all operations are performed.

Function Description

Complete the function arrayManipulation in the editor below. It must return an integer, the maximum value in the resulting array.

arrayManipulation has the following parameters:

n - the number of elements in your array
queries - a two dimensional array of queries where each queries[i] contains three integers, a, b, and k.
Input Format

The first line contains two space-separated integers  and , the size of the array and the number of operations. 
Each of the next  lines contains three space-separated integers ,  and , the left index, right index and summand.

Constraints

Output Format

Return the integer maximum value in the finished array.

Sample Input

5 3
1 2 100
2 5 100
3 4 100
Sample Output

200
Explanation

After the first update list will be 100 100 0 0 0. 
After the second update list will be 100 200 100 100 100. 
After the third update list will be 100 200 200 200 100. 
The required answer will be .
*/
/*
long arrayManipulation(int n, vector<vector<int>> queries) {
  vector<long> resultVector(n);
  long maxVal=0, x=0, i;

  for(int i = 0; i<n ; i++)
  {
      resultVector[i]=0;
  }

  for(i=0; i<queries.size(); i++)
  {
      resultVector[(queries[i][0])-1] += queries[i][2];

      if((queries[i][1]) <= n)
      {
          resultVector[(queries[i][1])] -= queries[i][2];
      }
  }

  for(i=0; i <n; i++)
  {
      x+=resultVector[i];
      if(x>maxVal)
      {
          maxVal=x;
      }
  }

  return maxVal;
}

*/
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
     long int N,K,p,q,sum,i,j,max=0,x=0;

    cin>>N>>K;
    long int *a=new long int[N+1]();

    for(i=0;i<K;i++)
    {
        cin>>p>>q>>sum;
        a[p]+=sum;
        if((q+1)<=N) a[q+1]-=sum;
    }

    for(i=1;i<=N;i++)
    {
       x=x+a[i];
       if(max<x) max=x;

    }

    cout<<max;
    return 0;
   /*int i,j;
   ll n,m;
   cin>>n>>m;
   ll ar[n]={0};
   
   for(j=0;j<m;j++)
   {
        int a,b,k;
       cin>>a>>b>>k;
       for(i=a-1;i<b;i++)
       ar[i]=ar[i]+k;
   }
  for(i=0;i<n;i++)
   cout<<ar[i]<<" ";
   cout<<endl;
   
   ll *me=max_element(ar,ar+n);
    cout<<*me<<endl;*/
}
