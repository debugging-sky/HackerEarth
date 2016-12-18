/*
MODIFY SEQUENCE

Suppose we have a sequence of non-negative integers, Namely a_1, a_2, ... ,a_n. At each time we can choose one term a_i with 0 < i < n and we subtract 1 from both a_i and a_i+1. We wonder whether we can get a sequence of all zeros after several operations.

Input

The first line of test case is a number N. (0 < N <= 10000) The next line is N non-negative integers, 0 <= a_i <= 1069

Output

If it can be modified into all zeros with several operations output “YES” in a single line, otherwise output “NO” instead.
*/


//   https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/modify-sequence/


#include <iostream>
using namespace std;

int main()
{
long long n,i,temp,num=0;// N->NUMBER
cin>>n;
for (i=0;i<n;i++)
{
cin>>temp;
num+=temp;
num*=10;   
num=num%11;    // IT WILL BE ALWAYS MULTIPLE OF 11 CHECK OUT COMMENTS OF THE PROGRAM FOR MORE CLARIFICATION
}
if (num%11==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
