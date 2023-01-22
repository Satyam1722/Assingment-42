#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue <int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    queue <int>q1;
    q1.push(9);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    q.swap(q1);
    cout<<"after exhange : "<<endl;

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }

    return 0;
}