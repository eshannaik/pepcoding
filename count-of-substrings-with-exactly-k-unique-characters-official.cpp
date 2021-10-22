// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/hashmap-and-heaps/count-of-substrings-with-exactly-k-unique-characters-official/ojquestion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int count (string s,int k)
{
    int n=s.length();
    int c=0;
    
    for(int i=0;i<n;i++)
    {
        unordered_map <char,int> res;
        for(int j=i;j<n;j++)
        {
            res[s[j]]++;
            if(res.size()==k)
                c++;
        }
        
    }
    return c;
}

int main()
{
    string s;
    int k;
    cin >>s;
    cin >>k;
    cout << count(s,k);
    return 0;
}
