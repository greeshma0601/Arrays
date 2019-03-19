/*
Number to words Submissions: 9132   Accuracy: 20.14%   Difficulty: Medium   Marks: 4
          
Problems
Discussions
Given number into words. For example, if “1234” is given as input, output should be “one thousand two hundred and thirty four”

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.

Output:

Print the number into words (in small letter).

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 9999

Example:

Input:
2
2
142

Output:
two
one hundred and forty two

*/

#include <bits/stdc++.h>
using namespace std;

char place[5][10]={"","","hundred","thousand"};
	char tens[12][10]={"ten","twenty","thirty","forty","fifty","sixty"
	    ,"seventy","eighty","ninety"
	};
	char onesTens[12][12]={"eleven","twelve","thirteen","fourteen","fifteen"
	    ,"sixteen","seventeen","eighteen","nineteen"
	};
	char ones[12][10]={"one","two","three","four","five","six",
	    "seven","eight","nine"};

void printOne(int n)
{
    if(n<=9)
    {
        printf("%s",ones[n-1]);
    }
}

void printTen(int n)
{
    if(n<=99)
    {
        if(n/10==0)
        {
            printOne(n%10);
        }
        else if((n/10)==1)
        {
            if(n%10==0)
            printf("ten\n");
            else
            {
                int temV=n%10;
                printf("%s",onesTens[(temV-1)]);
            }
        }
        else
        {
            int temV=n/10;
            printf("%s ",tens[temV-1]);
            printOne(n%10);
        }
    }
}

void printHundred(int n)
{
    if(n<=999)
    {
        if(n/100==0)
        {
            if(n%100)
            printf(" and ");
            printTen(n%100);
        }
        else
        {
            int temV=n/100;
            printf("%s hundred",ones[temV-1]);
            if(n%100)
            printf(" and ");
            printTen(n%100);
        }
    }
}

void printThousand(int n)
{
    if(n<=9999)
    {
        if(n/1000==0)
        printHundred(n%1000);
        else
        {
            int temV=n/1000;
            printf("%s thousand ",ones[temV-1]);
            printHundred(n%1000);
        }
    }
}

int main() {
	int t,n,te;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    te=n;
	    int co=0;
	    while(te)
	    {
	        te=te/10;
	        ++co;
	    }
	    if(co==1)
	    {
	        printOne(n);
	    }
	    else if(co==2)
	    {
	        printTen(n);
	    }
	    else if(co==3)
	    {
	        printHundred(n);
	    }
	    else
	    {
	        printThousand(n);
	    }
	    printf("\n");
	}
	return 0;
}
