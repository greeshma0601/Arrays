/*
Two Repeated Elements Submissions: 8960   Accuracy: 22.23%   Difficulty: Easy   Marks: 2
Associated Course(s):   Geeks Classes DSA   Geeks Classes in Noida More
      
Problems
You are given an array of N+2 integer elements. All elements of the array are in range 1 to N. And all elements occur once except two numbers which occur twice. Find the two repeating numbers.

Input:
The first line of the input contains an integer T, denoting the total number of test cases. Then T test cases follow Each test case consists of two lines. First line of each test case contains an integer N denoting the range of numbers to be inserted in array of size N+2. Second line of each test case contains the N+2 space separated integers denoting the array elements.

Output: 
Print the two elements occuring twice in the array. Order of the two elements must be preserved as in the original list, i.e., print the element which arrives first(2nd time).

Constraints: 
1 ≤ T ≤ 30
1 ≤ N ≤ 105

Example:
Input:
1
4
1 2 1 3 4 3

Output:
1 3

Explanation:
Testcase 1: In the given array, 1 and 3 are repeated two times.
*/
#include<bits/stdc++.h>
using namespace std;


# define ll long long 
# define pb push_back
# define mp make_pair
# define NO_OF_CHARS 256

long long maxsubarray(long long a[],long long  n){
    long long i,meh=a[0],msf=a[0];
    for(int i=1;i<n;i++){
        meh=max(a[i],meh+a[i]);
        msf=max(msf,meh);
    }
    return msf;
}

bool prime[1000000+5];
vector<int>prime_store;
void SieveOfEratosthenes(int n) 
{ 
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*2; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
       prime_store.push_back(p);
        //   cout << p << " "; 
} 

bool perfectno(ll n ){
    ll sum =1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            sum+=(i+n/i);
        }
    }
    if(sum==n && n!=1)return true;
    return false;
}  

ll maxprimefactor(ll n){
    ll max = -1;
    while(n%2==0){
        max=2;
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2){
        while(n%i==0){
            max = i;
            n/=i;
        }
    }
    if(n>2)max = n;
    return max;
}

void solve(int arr[], int n){
    int count[100202]={0};
    int i;
    for(int i=0;i<n+2;i++){
        // cout<<arr[i]<<" <==value hai ";
        if(count[arr[i]]==1)cout<<arr[i]<<" ";
        else count[arr[i]]++;
    }
}

int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;cin>>t;
    // SieveOfEratosthenes(1000000);
    while(t--){
        int sum = 0;
        int n;cin>>n;int arr[n+2];
        for(int i=0;i<n+2;i++)cin>>arr[i];

        // solve(str)?cout<<"Yes\n":cout<<"No\n";
        // cout<<solve(arr, n)<<endl;
        solve(arr, n);
        cout<<endl;
    }
	return 0;
}

