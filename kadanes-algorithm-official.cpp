// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/kadanes-algorithm-official/ojquestion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int count (vector <int> v,int n)
{
    int sum=0;
    int c=0;
    int maxx=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        sum += v[i];
        // cout << sum << endl;
        if(sum>maxx)
            maxx=sum;
        
        if(sum<0)
            sum=0;
    }
    return maxx;
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
