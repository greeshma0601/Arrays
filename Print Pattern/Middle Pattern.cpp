/*
Middle Pattern Submissions: 7752   Accuracy: 25.54%   Difficulty: Basic   Marks: 1
      
Problems
Discussions
Given an odd length word your task is to complete the function printPattern that takes a string s as its argument and prints it from the middle of the word such that it follows the following pattern.
 

Input: PROGRAM                            Input: RAT
Output:                                   Output:
            G                                       A
          GR                                      AT  
        GRA                                     ATR
      GRAM
    GRAMP
  GRAMPR
GRAMPRO

The above is proper shaped pattern for the test case, but when
printed in a single line it becomes as shown in the output. 
Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing an odd length string s.

Output:
Corresponding to each test case in a new line print the pattern in a  single line where each row of the pattern is separated by a "$" instead of a new line.

Constraints:
1 ≤ T ≤ 20
1<=size of string(s)<=20

Example(To be used only for expected ouput):
Input
2
PROGRAM
RAT

Output

            G$          GR$        GRA$      GRAM$    GRAMP$  GRAMPR$GRAMPRO$
    A$  AT$ATR$
** For More Input/Output Examples Use 'Expected Output' option **
Contributor: Harshit Sidhwa
Author: Shubham Joshi 1

*/

/*method prints the given pattern in a single line */
void printPattern(string s)
{
   //Your code here
    int n=s.length();
   int sp=2*n-2;
   cout<<n<<endl;
     string x=s.substr(0,n/2);
     cout<<x<<endl;
     string y=s.substr(n/2,n);
     cout<<y<<endl;
     y+=x;
     
   for(int i=0;i<n;i++)
   {
           string r = y.substr(0,i+1);
       
       for(int j=0;j<sp;j++)
       cout<<" ";
       cout<<r<<"$";
       sp-=2;       
   } 
}
