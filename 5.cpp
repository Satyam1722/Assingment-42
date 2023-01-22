#include<bits/stdc++.h>
using namespace std;

void schedule_interview(queue <int>&q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" interview "<<endl;
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
    
    schedule_interview(q);

    return 0;
}