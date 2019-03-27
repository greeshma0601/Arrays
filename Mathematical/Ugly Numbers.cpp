/*
Ugly Numbers Submissions: 14346   Accuracy: 39.96%   Difficulty: Hard   Marks: 8
           
Problems
Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. Write a program to find Nth Ugly Number.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. For each testcase there is one line of input that contains the number N.

Output:
Print the Nth Ugly Number.

Constraints:
1 ≤ T ≤ 104
1 ≤ N ≤ 104

Example:
Input:
2
10
4
Output:
12
4

*/

/*
// CPP program to find nth ugly number 
# include<stdio.h> 
# include<stdlib.h> 
  
/*This function divides a by greatest divisible  
  power of b*/
int maxDivide(int a, int b) 
{ 
  while (a%b == 0) 
   a = a/b;  
  return a; 
}     
  
/* Function to check if a number is ugly or not */
int isUgly(int no) 
{ 
  no = maxDivide(no, 2); 
  no = maxDivide(no, 3); 
  no = maxDivide(no, 5); 
    
  return (no == 1)? 1 : 0; 
}     
  
/* Function to get the nth ugly number*/
int getNthUglyNo(int n) 
{ 
  int i = 1;  
  int count = 1;   /* ugly number count */ 
  
  /*Check for all integers untill ugly count  
    becomes n*/ 
  while (n > count) 
  { 
    i++;       
    if (isUgly(i)) 
      count++;  
  } 
  return i; 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    unsigned no = getNthUglyNo(150); 
    printf("150th ugly no. is %d ",  no); 
    getchar(); 
    return 0; 
} 

*/


#include<iostream>
using namespace std;
long long int ugly[10001]; // To store ugly numbers 
    
long long int uglyNumber(int n) {
    unsigned i2 = 0, i3 = 0, i5 = 0; 
    long long int next_multiple_of_2 = 2; 
    long long int next_multiple_of_3 = 3; 
    long long int next_multiple_of_5 = 5; 
    long long int next_ugly_no = 1; 
  
    ugly[0] = 1; 
    for (int i=1; i<n; i++) 
    { 
       next_ugly_no = min(next_multiple_of_2, 
                           min(next_multiple_of_3, 
                               next_multiple_of_5)); 
       ugly[i] = next_ugly_no; 
       if (next_ugly_no == next_multiple_of_2) 
       { 
           i2 = i2+1; 
           next_multiple_of_2 = ugly[i2]*2; 
       } 
       if (next_ugly_no == next_multiple_of_3) 
       { 
           i3 = i3+1; 
           next_multiple_of_3 = ugly[i3]*3; 
       } 
       if (next_ugly_no == next_multiple_of_5) 
       { 
           i5 = i5+1; 
           next_multiple_of_5 = ugly[i5]*5; 
       } 
    }
    return next_ugly_no; 
}

int main()
{
    int t;
    cin >> t;
    int a[t],maxi= INT_MIN;
    for(int i = 0;i<t;i++) {
        cin >> a[i];
        maxi = max(maxi,a[i]); 
    }
    uglyNumber(maxi);
    for(int i = 0;i<t;i++) {
        cout << ugly[a[i]-1] << "\n";
    }
    return 0;
}
