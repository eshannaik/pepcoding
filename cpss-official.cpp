// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/cpss-official/ojquestion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int count (string s)
{
    int n=s.length();
    int c=0;
    for(int i=0;i<n;i++)
    {
        int l=i;
        int r=i;
        
        while(l>=0 && r<n && s[l]==s[r])
        {
            c++;
            l--;
            r++;
        }
        
        l=i;
        r=i+1;
        
        while(l>=0 && r<n && s[l]==s[r])
        {
            c++;
            l--;
            r++;
        }
    }
    return c;
}

int main()
{
    string n;
    cin>>n;
    
    cout << count(n);
    return 0;
}
