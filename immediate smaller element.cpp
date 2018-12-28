/*Input
2
5
4 2 1 5 3
6
5 6 2 3 1 7

Output
2 1 -1 3 -1
-1 2 -1 1 -1 -1*/
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    b[i]=-1;
	    for(i=0;i<n-1;i++)
	    {
	        if(a[i]>a[i+1])
	        {
	           b[i]=a[i+1]; 
	        }
	        else{b[i]=-1;}
	    }
	    for(i=0;i<n;i++)
	    cout<<b[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
