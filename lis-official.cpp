// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/lis-official/ojquestion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int c=0;
int count (vector <int> v,int n)
{
    vector <int> dp(n,1);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[j]<v[i])
                dp[i]=max(dp[i],1+dp[j]);
        }
    }
    return *max_element(dp.begin(),dp.end());
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
