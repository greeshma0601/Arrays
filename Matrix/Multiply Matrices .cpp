/*
Multiply Matrices Submissions: 5410   Accuracy: 39.63%   Difficulty: School   Marks: 0 *School Problem's Submission isn't counted in score!
       
Problems
Given two square Matrices A[][] and B[][]. Your task is to complete the function multiply which stores the multiplied matrices in a new matrix C[][].
 

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the squarematrix . Then in the next two lines are N*N space separated values of the matrix A[][] and B[][].
 

Output:
For each test case in a new line output will be the space separated values of the matrix C[][].
 

Constraints:
1 <=T<= 100
1 <= N <= 20
 

Example(To be used for the expected output):
Input:
2
2
7 18 2 9 
14 5 5 18 
2
17 4 17 16 
9 2 7 1 
Output:
188 359 73 172 
181 38 265 50 
*/
/*Complete the function below*/
void multiply(int mat1[][100], int mat2[][100], int res[][100], int N)
{
      //add code here.
      
          int i, j, k; 
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < N; k++) 
                res[i][j] += mat1[i][k] *  
                             mat2[k][j]; 
        } 
    } 
}
