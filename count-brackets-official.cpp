// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/count-brackets-official/ojquestion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int c=0;
void count (int open,int close)
{
    if(open==close && close==0)
    {
        c++;
        return;
    }
    
    if(open>0)
        count(open-1,close);
        
    if(close>open)
        count(open,close-1);
}

int main()
{
    int n;
    cin>>n;
    
    count(n,n);
    cout << c << endl;
    return 0;
}
