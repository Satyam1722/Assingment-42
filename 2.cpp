#include<bits/stdc++.h>
using namespace std;

void get_railway_ticket(queue <int>&q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" get ticket "<<endl;
        q.pop();
    }
}
int main()
{
    queue <int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    get_railway_ticket(q);

    return 0;
}