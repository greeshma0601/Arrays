
/*
Fredo and Array Update
Fredo is assigned a new task today. He is given an array A containing N integers. His task is to update all elements of array to some minimum value x , that is,  ;  such that sum of this new array is strictly greater than the sum of the initial array. Note that x should be as minimum as possible such that sum of the new array is greater than the sum of the initial array.

Input Format:
First line of input consists of an integer N denoting the number of elements in the array A.
Second line consists of N space separated integers denoting the array elements.

Output Format:
The only line of output consists of the value of x.

Input Constraints:


SAMPLE INPUT 
5
1 2 3 4 5
SAMPLE OUTPUT 
4
Explanation
Initial sum of array 
When we update all elements to 4, sum of array  which is greater than .
Note that if we had updated the array elements to 3,  which is not greater than . So, 4 is the minimum value to which array elements need to be updated.
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
        
        int i,n;
        cin>>n;
        int a[n];
        int sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];  
            sum+=a[i];
        }
        //int *m=min_element(a,a+n);
        int f=1,k=1,r;
        while(f)
        {
            int s=n*k;
            if(s>sum)
            {
                f=0;
                r=k;
                break;
            }
            k++;
            
        }
        cout<<r<<endl;
        
}


