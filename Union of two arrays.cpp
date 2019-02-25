#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n1,n2,i;cin>>n1;cin>>n2;
 int a1[n1],a2[n2];
 for(i=0;i<n1;i++)cin>>a1[i];
 for(i=0;i<n2;i++)cin>>a2[i];
 sort(a1,a1+n1);
 sort(a2,a2+n2);
 //int m=max(n1,n2);
 int j=0;
 i=0;
 while(i<n1 && j<n2)
 {
     if(a1[i]<a2[j])
     {
         cout<<a1[i++]<<" ";
     }
     else if(a2[j]<a1[i])
     {
        cout<<a2[j++]<<" "; 
     }
     else//a1[i] == a2[j];
     {
         cout<<a1[i++]<<" ";
         j++;
     }
 }
 while(i<n1)
 {
     cout<<a1[i++]<<" ";
 }
 while(j<n2)
 {
     cout<<a2[j++]<<" ";
 }
 cout<<endl;
 }
	//code
	return 0;
}
