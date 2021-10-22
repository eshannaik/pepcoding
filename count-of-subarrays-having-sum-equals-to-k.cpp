// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/hashmap-and-heaps/count-of-subarrays-having-sum-equals-to-k-official/ojquestion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int count (vector <int> v,int n,int k)
{
    int sum=0;
    unordered_map <int,int> mp;
    int c=0;
    
    for(int i=0;i<n;i++)
    {
        sum += v[i];
        // cout << v[i] << sum << endl;
        if(sum==k)
            c++;
        if(mp.find(sum-k)!=mp.end())
        {
            // cout << mp[sum] << endl;
            c += mp[sum-k];
        }
            mp[sum]++;
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
