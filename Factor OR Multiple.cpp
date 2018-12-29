#include <iostream>
using namespace std;

//#include <stdio.h>

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int i,n,k,f=0;
	    cin>>n>>k;
	    int a[n],r=0;
	    for(i=0;i<n;i++)
	    cin>>a[i];
        for(i=0;i<n;i++)
        {
            if((a[i]%k)==0)
            {
                r=a[i]|r;
                f=1;
            }
        }
        
	    if(f==1)
	    {
	        cout<<r;
	    }
	    else
	    cout<<"0";
	    cout<<endl;
	}
	return 0;
}
