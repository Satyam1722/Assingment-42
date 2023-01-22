#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue <char>q;
    q.push('g');
    
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}