#include <iostream>

using namespace std;

int x,y,k;

void afisare(int x,int y,int k)
{
    int i;
    while(x<=y)
    {
        for(i=1;i<=k;i++)
            if(x<=y)
            {
                cout<<x<<" ";
                x++;
            }
        cout<<"*"<<" ";
    }
}

int main()
{
    cin>>x>>y>>k;
    afisare(x,y,k);
    return 0;
}
