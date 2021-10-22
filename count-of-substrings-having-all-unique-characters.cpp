// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/hashmap-and-heaps/count-of-substrings-having-all-unique-characters-official/ojquestion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int count (string s)
{
    unordered_map <char,int> mp;
    int n=s.length();
    int c=0;
    
    for(int i=0;i<n;i++)
    {
        vector <int> v(26,0);
        for(int j=i;j<n;j++)
        {
            if(v[s[j]-'a']==1)
                break;
            v[s[j]-'a']=1;
            c++;
        }
        
    }
    return c;
}

int main()
{
    string s;
    cin >>s;
    cout << count(s);
    return 0;
}
