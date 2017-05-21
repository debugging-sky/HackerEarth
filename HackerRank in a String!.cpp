/*
https://www.hackerrank.com/challenges/hackerrank-in-a-string

We say that a string, , contains the word hackerrank if a subsequence of the characters in spell the word hackerrank. For example, haacckkerrannkk does contain hackerrank, but haacckkerannk does not (the characters all appear in the same order, but it's missing a second r).

More formally, let be the respective indices of h, a, c, k, e, r, r, a, n, k in string . If is true, then contains hackerrank.

You must answer queries, where each query consists of a string, . For each query, print YES on a new line if contains hackerrank; otherwise, print NO instead.

Input Format

The first line contains an integer denoting (the number of queries).
Each line of the subsequent lines contains a single string denoting .

Constraints

Output Format

For each query, print YES on a new line if contains hackerrank; otherwise, print NO instead.

Sample Input 0

2
hereiamstackerrank
hackerworld

Sample Output 0

YES
NO

Explanation 0

We perform the following queries:


    The characters of hackerrank are bolded in the string above. Because the string contains all the characters in hackerrank in the same exact order as they appear in hackerrank, we print YES on a new line.
    does not contain the last three characters of hackerrank, so we print NO on a new line.

*/

#include <bits/stdc++.h>

using namespace std;

void subsequence_checker(string s){
    string h="hackerrank";
    int i=0,j=0;
    
    //h-> hackerrank
    //s-> input string
    
    //We iterate till we don't reach to end of any of the strings
    while(h[i] && s[j]){
        if(h[i]==s[j])
            {
            i++;        // if we match any character of the input string with character from "hackerrank" 
                        // we iterate both i and j
            j++;
        }
        else        //  or else we just iterate on j i.e. on the input string characters
            j++;
        
    }
    
    if(i==10)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
    
}

int main(){
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        string s;
        cin >> s;
        
        subsequence_checker(s);
        
        // your code goes here
    }
    return 0;
}
