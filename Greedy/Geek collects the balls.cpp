/*

Geek collects the balls Submissions: 5730   Accuracy: 22.02%   Difficulty: Medium   Marks: 4
   
Problems
There are two parallel roads, each containing N and M buckets, respectively. Each bucket may contain some balls. The buckets on both roads are kept in such a way that they are sorted according to the number of balls in them. Geek starts from the end of the road which has the bucket with a lower number of balls(i.e. if buckets are sorted in increasing order, then geek will start from the left side of the road).
The geek can change the road only at the point of intersection(which means, buckets with the same number of balls on two roads). Now you need to help Geek to collect the maximum number of balls.

Input:
The first line of input contains T denoting the number of test cases. The first line of each test case contains two integers N and M, denoting the number of buckets on road1 and road2 respectively. 2nd line of each test case contains N integers, number of balls in buckets on the first road. 3rd line of each test case contains M integers, number of balls in buckets on the second road.

Output:
For each test case output a single line containing the maximum possible balls that Geek can collect.

Constraints:
1<= T <= 1000
1<= N <= 10^3
1<= M <=10^3
0<= A[i],B[i]<=10^6

Example:
Input:
1
5 5
1 4 5 6 8
2 3 4 6 9

Output:
29

Explanation:

The path with maximum sum is (2,3,4)[5,6](9). Integers in [] are the buckets of first road and in () are the buckets of second road. So, max balls geek can collect is 29.
*/
#include <bits/stdc++.h>
using namespace std;

int getmaxcoins(int a[],int b[],int n,int m)
{
   int i=0,j=0;
    
  long long ans=0,sum1=0,sum2=0;
      
      for(i=0,j=0;i<n &&j<m;) {
          
          
          if(a[i]<b[j]){
              sum1+=a[i];
              i++;
        }
        else if(a[i]>b[j])
          {
              sum2+=b[j];
              j++;
        }
        else
        {
            sum1+=a[i];
            sum2+=b[j];
            
            
            
            //  i++;
            // j++;
            
            if(sum1>sum2)
             ans+=sum1;
            else
             ans+=sum2;


            int sum=0;             
             if(sum1>sum2)
             {
                 i++;
                 j++;
                 
                 while(i<n && a[i]==a[i-1]){
                  sum+=a[i];
                  i++;
                 }
                ans+=sum; 
             }
             else
             {
                 i++;
                 j++;
                 
                  while(j<m && b[j]==b[j-1]){
                  sum+=b[j];
                  j++;
                 }
                ans+=sum;
                 
             }
             
             sum1=sum2=0;
        }
          
      }
      
      for(;i<n;i++)
      sum1+=a[i];
      
      for(;j<m;j++)
      sum2+=b[j];
      
      ans+=max(sum1,sum2);
      
    //   if(a[n-1]!=b[m-1])
    //   {
    //       ans+=max(sum1,sum2);
    //   }
    
    return ans;
}

int main() {
    
    int t,i,n,m;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n>>m;
        
        int buc1[n];
        int buc2[m];
        
        for(i=0;i<n;i++)
        cin>>buc1[i];
        
        for(i=0;i<m;i++)
        cin>>buc2[i];
        
        cout<<getmaxcoins(buc1,buc2,n,m)<<endl;
    }
	//code
	return 0;
}
