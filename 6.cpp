#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue <int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    if(q.empty())
    cout<<"queue is empty "<<endl;
    else
    cout<<"queue is not empty "<<endl;

    cout<<"size of queue is : "<<q.size()<<endl;

    return 0;
}