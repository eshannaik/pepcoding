// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/hashmap-and-heaps/minimum-cost-to-connect-sticks/ojquestion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int count (vector <int> v,int n)
{
    priority_queue <int,vector<int>,greater<int>> q;
    int cost=0;
    
    for(auto x:v)
        q.push(x);
        
    while(q.size()>1)
    {
        int a = q.top();
        q.pop();
        int b=q.top();
        q.pop();
        
        cost += a+b;
        q.push(a+b);
    }
    return cost;
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
