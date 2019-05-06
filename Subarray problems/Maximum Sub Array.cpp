/*
Maximum Sub Array Submissions: 10417   Accuracy: 28.36%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
       
Problems
Find out the maximum sub-array of non negative numbers from an array.
The sub-array should be continuous. That is, a sub-array created by choosing the second and fourth element and skipping the third element is invalid.

Maximum sub-array is defined in terms of the sum of the elements in the sub-array. Sub-array A is greater than sub-array B if sum(A) > sum(B).

Example:
A : [1, 2, 5, -7, 2, 3]
The two sub-arrays are [1, 2, 5] [2, 3].
The answer is [1, 2, 5] as its sum is larger than [2, 3]

NOTE 1: If there is a tie, then compare with segment's length and return segment which has maximum length
NOTE 2: If there is still a tie, then return the segment with minimum starting index

Input:
The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N depicting the size of array and next line followed by the value of array.

Output:
Print the Sub-array with maximum sum.

Constraints:
1 ≤ T ≤ 40
1 ≤ N ≤ 100
-100 ≤ A[i] ≤ 100

Example:
Input
2
3
1 2 3
2
-1  2
Output
1 2 3
2


*/
#include<bits/stdc++.h>
using namespace std;


# define ll long long 
# define pb push_back
# define mp make_pair
# define NO_OF_CHARS 256

long long maxsubarray(long long a[],long long  n){
    long long i,meh=a[0],msf=a[0];
    for(ll i=1;i<n;i++){
        meh=max(a[i],meh+a[i]);
        msf=max(msf,meh);
    }
    return msf;
}

bool prime[1000000+5];
vector<ll>prime_store;
void SieveOfEratosthenes(ll n) 
{ 
    memset(prime, true, sizeof(prime)); 
    for (ll p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (ll i=p*2; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (ll p=2; p<=n; p++) 
       if (prime[p]) 
       prime_store.push_back(p);
        //   cout << p << " "; 
} 

bool perfectno(ll n ){
    ll sum =1;
    for(ll i=2;i*i<=n;i++){
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
    for(ll i=3;i*i<=n;i+=2){
        while(n%i==0){
            max = i;
            n/=i;
        }
    }
    if(n>2)max = n;
    return max;
}

void solve(int arr[], int n){
    int left = 0, right = 0, max_sum = INT_MIN, max_len = INT_MIN, start;    
    while(right<n){
        while(left<n and arr[left]<0)left++;
        int sum=0;
        right=left;
        while(right<n and arr[right]>=0){
            sum+=arr[right++];
        }
        if(max_sum<sum){
            max_sum = sum;
            max_len = right-left;
            start = left;
        }else if(max_sum==sum and max_len<right-left){
            max_len = right-left;
            start = left;
        }
        left = right;
    }
    
    for(int i=start;i<start+max_len;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;cin>>t;
    // SieveOfEratosthenes(1000000);
    while(t--){
        ll sum = 0;
        int n,m;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        solve(arr, n);
    }
	return 0;
}
