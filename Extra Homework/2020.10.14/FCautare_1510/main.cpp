#include <iostream>

using namespace std;

int n,i;
double v,x[100];

int cautare(int n,double x[100],double v)
{
    for(i=1;i<=n;i++)
        if(v==x[i])return i;
    return -1;
}

int main()
{
    cin>>n>>v;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";cin>>x[i];
    }
    cout<<cautare(n,x,v);
    return 0;
}
