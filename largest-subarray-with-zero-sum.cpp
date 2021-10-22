// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/hashmap-and-heaps/largest-subarray-with-zero-sum-official/ojquestion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int count (vector <int> v,int n)
{
    int sum=0;
    int c=0;
    int res=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum +=v[j];
            // cout << sum << endl;
            c++;
            if(sum==0)
            {
                res=max(res,c);
            }
        }
        c=0;
        sum=0;
    }
    return res;
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
