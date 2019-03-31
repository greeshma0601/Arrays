/*
Weird Number Submissions: 907   Accuracy: 21.97%   Difficulty: Basic   Marks: 1
   
Problems
Write a program to check whether a number is wierd or not. A weird number is weird if the sum of the proper divisors (divisors including 1 but not itself) of the number is greater than the number, but no subset of those divisors sums to the number itself.

Example:

The smallest weird number is 70. Its proper divisors are 1, 2, 5, 7, 10, 14, and 35; these sum to 74, but no subset of these sums to 70. The number 12, for example, is not weird, because the proper divisors of 12 are 1, 2, 3, 4, and 6, sum of divisors is 16; but there is a subset {2, 4, 6} with sum 12, i.e., 2+4+6 = 12.

Input:

First line contains number of test cases T. Then following T lines contains an integer N.


Output:

Output "Weird" if given number is strong else "Not Weird" .


Constraints:

1<=T<=100
2<=N<=10000


Example:

Input:
2
5
70

Output:
Not Weird
Weird

*/

// C++ program to check if the 
// number is weird or not 
#include <bits/stdc++.h> 
using namespace std; 

// code to find all the factors of 
// the number excluding the number itself 
vector<int> factors(int n) 
{ 
	// vector to store the factors 
	vector<int> v; 
	v.push_back(1); 

	// note that this loop runs till sqrt(n) 
	for (int i = 2; i <= sqrt(n); i++) { 

		// if the value of i is a factor 
		if (n % i == 0) { 
			v.push_back(i); 

			// condition to check the 
			// divisor is not the number itself 
			if (n / i != i) { 
				v.push_back(n / i); 
			} 
		} 
	} 
	// return the vector 
	return v; 
} 

// Function to check if the number 
// is abundant or not 
bool checkAbundant(int n) 
{ 
	vector<int> v; 

	int sum = 0; 

	// find the divisors using function 
	v = factors(n); 

	// sum all the factors 
	for (int i = 0; i < v.size(); i++) { 
		sum += v[i]; 
	} 

	// check for abundant or not 
	if (sum > n) 
		return true; 
	else
		return false; 
} 

// Function to check if the 
// number is semi-perfecr or not 
bool checkSemiPerfect(int n) 
{ 
	vector<int> v; 

	// find the divisors 
	v = factors(n); 

	// sorting the vector 
	sort(v.begin(), v.end()); 

	int r = v.size(); 

	// subset to check if no is semiperfect 
	bool subset[r + 1][n + 1]; 

	// initialising 1st column to true 
	for (int i = 0; i <= r; i++) 
		subset[i][0] = true; 

	// initialing 1st row except zero position to 0 
	for (int i = 1; i <= n; i++) 
		subset[0][i] = false; 

	// loop to find whther the number is semiperfect 
	for (int i = 1; i <= r; i++) { 
		for (int j = 1; j <= n; j++) { 

			// calculation to check if the 
			// number can be made by summation of diviors 
			if (j < v[i - 1]) 
				subset[i][j] = subset[i - 1][j]; 
			else { 
				subset[i][j] = subset[i - 1][j] || 
							subset[i - 1][j - v[i - 1]]; 
			} 
		} 
	} 

	// if not possible to make the 
	// number by any combination of divisors 
	if ((subset[r][n]) == 0) 
		return false; 
	else
		return true; 
} 

// Function to check for 
// weird or not 
bool checkweird(int n) 
{ 
	if (checkAbundant(n) == true && 
		checkSemiPerfect(n) == false) 
		return true; 
	else
		return false; 
} 

// Driver Code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;

	if (checkweird(n)) 
		cout << "Weird"; 
	else
		cout << "Not Weird"; 
    
        cout<<endl;
    }
    
	return 0; 
} 
