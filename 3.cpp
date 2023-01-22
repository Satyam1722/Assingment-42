#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue <int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    if(q.size()==0)
    cout<<"queue is empty "<<endl;
    else
    cout<<"queue is not empty"<<endl;

    return 0;
}