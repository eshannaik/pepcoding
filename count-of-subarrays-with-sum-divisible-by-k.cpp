// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/hashmap-and-heaps/count-of-subarrays-with-sum-divisible-by-k-official/ojquestion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int count (vector <int> v,int n,int k)
{
    int sum=0;
    unordered_map <int,int> mp;
    int c=0;
    int rem=0;
    mp[0]=1;
    for(int i=0;i<n;i++)
    {
        sum += v[i];
        // cout << v[i] << sum << endl;
        rem=sum%k;
        if(rem<0)
            rem +=k;
        if(mp.find(rem)!=mp.end())
        {
            // cout << mp[sum] << endl;
            c += mp[rem];
            mp[rem]++;
        }
        else
            mp[rem]=1;
    }
    
    return c;
}
int main()
{
    int n;
    cin>>n;
    int n1=n;
    
    vector <int> v;
    while(n--)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    
    int k;
    cin>>k;
    
    cout << count(v,n1,k);
    return 0;
}
