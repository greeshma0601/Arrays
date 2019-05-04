/*
Finding the numbers Submissions: 22269   Accuracy: 34.55%   Difficulty: Easy   Marks: 2
                
Problems
You are given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. You need to find the other two numbers and print them in ascending order.
 

Input :
The first line contains a value T, which denotes the number of test cases. Then T test cases follow .The first line of each test case contains a value N. The next line contains 2*N+2 space separated integers.

Output :
Print in a new line the two numbers in ascending order.

Constraints :
1<=T<=100
1<=N<=10^6
1<=A[i]<=5*10^8

Example:
Input :
2
2
1 2 3 2 1 4
1
2 1 3 2

Output :
3 4
1 3
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int sz = 2*n+2;
	    
	    int a[sz];
	    
	    for(int i = 0;i < sz;i++)
	        cin>>a[i];
	        
	    map<int,int>mp;
	    
	    vector<int>v(2);
	    for(int i = 0;i < sz;i++)
	        mp[a[i]]++;
	        
	    map<int,int>::iterator it;
	    int i = 0;
	    for(it = mp.begin();it != mp.end();it++)
	    {
	        if(it->second % 2 != 0)
	        {
	            v[i++] = it->first;
	        }
	    }
	    
	    sort(v.begin(),v.end());
	    
	    for(int i = 0;i < v.size();i++)
	        cout<<v[i]<<" ";
	        
	        cout<<endl;
	    
	}
	return 0;
}



#include <stdio.h>
#define arr_size 1000000

void find_numbers(long [],long);

int main() {
	int t;
	long n,num,i,j;
    long arr[arr_size];
	scanf("%d",&t);
	for(i=0;i<t;i++)    {
	    scanf("%ld",&n);
	    num=2*n+2;
	    for(j=0;j<num;j++)    
	        scanf("%ld",&arr[j]);
	    find_numbers(arr,num);
	}
	return 0;
}

void find_numbers(long arr[],long size)   {
    long a_xor_b=0,rightmost_setbit,k,i=0,j=0,a=0,b=0,min,max;
    long setbit[size],unsetbit[size];
    for(k=0;k<size;k++) 
        a_xor_b^=arr[k];
    rightmost_setbit=(a_xor_b&-a_xor_b);
    for(k=0;k<size;k++) {
        if(arr[k]&rightmost_setbit)
            setbit[i++]=arr[k];
        else
            unsetbit[j++]=arr[k];
    }
    for(k=0;k<i;k++)
        a^=setbit[k];
    
    for(k=0;k<j;k++)
        b^=unsetbit[k];
    
    min=a<b?a:b;
    max=a>b?a:b;
    printf("%ld %ld\n",min,max);
}
Can be done with XOR operation and a little trick: 
Example: 
1, 8, 9, 10, 9, 10
Xor them all --> result will be 1 ^ 10 --> 0001 ^ 1010 --> 1011

1011-> Find the rightmost bit set in the result and find similar ones in the original input.

1 --> 0001 --> select
8 --> 1000
9 --> 1001 --> select
10 --> 1010
9 --> 1001 --> select
10 --> 1010

Xor the selected --> (1 ^ 9 ^ 9) 
Xor that with the original answer: (1 ^ 9 ^ 9) ^ (1 ^ 10) --> 10
10 is one of the numbers we seek. 
The other is 10 ^ (1 ^ 10) --> 1
1 and 10

Another example: 
6, 2, 2, 3, 3, 5
Xor them --> 6 ^ 2 ^ 2 ^ 3 ^ 3 ^ 4 --> (6 ^ 4) --> (110 ^ 100) --> (010)
The rightmost bit set is the second bit. 
Find the numbers with the second bit set in the input: 
6--> 110--> select 
2--> 010--> select
2--> 010--> select
3--> 011--> select
3-->011--> select
5-->101
Xor the selected: (6 ^ 2 ^ 2 ^ 3 ^ 3) 
Xor that with the original answer: (6 ^ 2 ^ 2 ^ 3 ^ 3) ^ (6 ^ 4) --> 4
4 is one of the answers. 
The other is 4 ^ (6 ^ 4) --> 6
4 and 6

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    n=2*n+2;
	    int A[n];
	    int i;
	    int xo=0;
	    for(i=0;i<n;i++){
	        cin>>A[i];
	    }
	    for(i=0;i<n;i++){
	        xo=xo^A[i];
	    }
	    int mask=xo & ~(xo-1);
	    int a=0,b=0;
	    for(i=0;i<n;i++){
	        if(A[i] & mask)
	        a=a^A[i];
	        else
	        b=b^A[i];
	    }
	    if(a<b)
	    cout<<a<<" "<<b<<"\n";
	    else
	    cout<<b<<" "<<a<<"\n";
	    
	}
	return 0;
}
