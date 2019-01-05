#include<cstdlib>
#include<limits>
#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
	int i,t,k,n,j;
	cin>>t;
    
	while(t--){
	    cin>>n;
	
	int a[n];
	    int f,s;
	for(k=0;k<n;k++)
	cin>>a[k];
	
	if(n<2)
	{
	    cout<<a[0];
	}
	else{
	    f=s=INT_MIN;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>f)
	        {
	            
	            s=f;
	            f=a[i];
	        }
	        else if(a[i]>s && a[i]!=f)
	        {
	            s=a[i];
	        }
	        
	    }
	   cout<<s<<"\n";
	}
	 
	}
	return 0;
}
