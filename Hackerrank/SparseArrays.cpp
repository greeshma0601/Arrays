/*
There is a collection of input strings and a collection of query strings. For each query string, determine how many times it occurs in the list of input strings.

For example, given input  and , we find  instances of ',  of '' and  of ''. For each query, we add an element to our return array, .

Function Description

Complete the function matchingStrings in the editor below. The function must return an array of integers representing the frequency of occurrence of each query string in strings.

matchingStrings has the following parameters:

strings - an array of strings to search
queries - an array of query strings
Input Format

The first line contains and integer , the size of . 
Each of the next  lines contains a string . 
The next line contains , the size of . 
Each of the next  lines contains a string .

Constraints

 
 
 .

Output Format

Return an integer array of the results of all queries in order.

Sample Input 1

CopyDownload
Array: strings
aba
baba
aba
xzxb

 



Array: queries
aba
xzxb
ab

 
4
aba
baba
aba
xzxb
3
aba
xzxb
ab
Sample Output 1

2
1
0
Explanation 1

Here, "aba" occurs twice, in the first and third string. The string "xzxb" occurs once in the fourth string, and "ab" does not occur at all.


Sample Input 2

CopyDownload
Array: strings
def
de
fgh

 



Array: queries
de
lmn
fgh

 
3
def
de
fgh
3
de
lmn
fgh
Sample Output 2

1
0
1

Sample Input 3

CopyDownload
Array: strings
abcde
sdaklfj
asdjf
na
basdn
sdaklfj
asdjf
na
asdjf
na
basdn
sdaklfj
asdjf

 



Array: queries
abcde
sdaklfj
asdjf
na
basdn

 
13
abcde
sdaklfj
asdjf
na
basdn
sdaklfj
asdjf
na
asdjf
na
basdn
sdaklfj
asdjf
5
abcde
sdaklfj
asdjf
na
basdn
Sample Output 3

1
3
4
3
2
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
  vector<int>ms;
  int s=queries.size();
  for(int i=0;i<s;i++)
  {
      string a=queries[i];
      int c=count(strings.begin(),strings.end(),a);
      ms.push_back(c);
  }
return ms;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
