/*


Count of Subarrays Submissions: 1976   Accuracy: 51.97%   Difficulty: Medium   Marks: 4
      
Given an array of N positive integers  a1, a2 ............ an.
The value of each contiguous subarray in given array is the maximum element present in that subarray. Return the number of subarrays having value strictly greater than K.

Input:

The first line of the input contains 'T' denoting the total number of testcases.Then follows the description of testcases.
The first line of each testcase contains two space separated positive integers N and K denoting the size of array and the value of K. The second line contains N space separated positive integers denoting the elements of array.

Output:

Output the number of subarrays having value strictly greater than K.

Constraints:

1<=T<=50
1<=N<=100
1<=a[i]<=10^5

Example:

Input:
2
3 2
3 2 1
4 1
1 2 3 4

Output:
3
9

*/

#include <iostream>

int main()
{
    unsigned t = 0;
	std::cin >> t;
	while (t--)
	{
        unsigned n =0, k = 0, tmp = 0, count = 0;
        std::cin >> n >> k;
        int lastGreatIndex = -1;
        for (unsigned i = 0; i < n; i++)
        {
            std::cin >> tmp;
            if (tmp > k)
            {
                count += (i-lastGreatIndex)*(n-i);
                lastGreatIndex = i;
            }
        }
        std::cout << count << std::endl;
	}
	return 0;
}
