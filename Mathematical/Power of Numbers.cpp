/*Power of Numbers
Given a number N, let the reverse of the number be R. The task is to print the output of the Expression pow(N,R), where pow function represents N raised to power R.
Note: As answers can be very large, print the result modulo 100000007.

Input:
The first line of the input consists of an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing an integer N.

Output:
Corresponding to each test case, print in a new line, the output of the expression pow as described above.

Constraints:
1 <= T <= 103
1 <= N <= 105

Example:
Input:
2
2
12

Output:
4
33235307

Explanation:
Testcase 1: The reverse of 2 is 2 and after raising power of 2 by 2 we get 4 which gives remainder as 4 by dividing 1000000007./*/*
*/
#include <iostream>
using namespace std;
#define MOD 100000007
long long exponent(long long x, long long n){
long long result = 1;
while(n > 0) {
if(n&1)
result = (result*x)%MOD;
x = (x*x)%MOD;
n >>= 1;
}
return result;
}
long long reverse(long long num) {
long long rev = 0;
while(num > 0){
rev *= 10;
rev += num%10;
num /= 10;
}
return rev;
}
int main() {
long long T, N;
cin>>T;
while(T--) {
cin>>N;
cout<<exponent(N, reverse(N))<<endl;
}
return 0;
}
