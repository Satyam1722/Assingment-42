#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue <string>q;
    int n;
    string s;
    
    cout<<"No. of input : ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>s;
        q.push(s);
    }

    vector <string>v;
    
    while(!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        q.push(v[i]);
    }

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    

    return 0;
}