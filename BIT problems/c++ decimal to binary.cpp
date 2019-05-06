// C++ program to convert a decimal 
// number to binary number 

#include <iostream> 
using namespace std; 

// function to convert decimal to binary 
void decToBinary(int n) 
{ 
	// array to store binary number 
	int binaryNum[32]; 

	// counter for binary array 
	int i = 0; 
	while (n > 0) { 

		// storing remainder in binary array 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 

	// printing binary array in reverse order 
	for (int j = i - 1; j >= 0; j--) 
		cout << binaryNum[j]; 
} 

// Driver program to test above function 
int main() 
{ 
	int n = 17; 
	decToBinary(n); 
	return 0; 
} 
// CPP program to Decimal to binary conversion 
// using bitwise operator 
// Size of an integer is assumed to be 32 bits 
#include <iostream> 
using namespace std; 

// Function that convert Decimal to binary 
int decToBinary(int n) 
{ 
	// Size of an integer is assumed to be 32 bits 
	for (int i = 31; i >= 0; i--) { 
		int k = n >> i; 
		if (k & 1) 
			cout << "1"; 
		else
			cout << "0"; 
	} 
} 

// driver code 
int main() 
{ 
	int n = 32; 
	decToBinary(n); 
} 
