// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/hashmap-and-heaps/count-of-all-subarrays-with-zero-sum-official/ojquestion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int count (vector <int> v,int n)
{
    int sum=0;
    int c=0;
    // int res=0;
    unordered_map<int,int>res;
    
    for(int i=0;i<n;i++)
    {
        sum += v[i];
        // cout << sum << endl;
        if(res.find(sum)!=res.end())
        {
            res[sum]++;
            c+=res[sum]-1;
        }
        else
            res[sum]=1;
        // for(int j=i;j<n;j++)
        // {
        //     sum +=v[j];
        //     if(sum==0)
        //         res++;
        // }
        // // c=0;
        // sum=0;
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
    cout << count(v,n1);
    return 0;
}
