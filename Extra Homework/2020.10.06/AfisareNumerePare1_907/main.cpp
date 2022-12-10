#include <iostream>

using namespace std;

void afisare(int a,int b)
{
    int i;
    if(a>b)
        for(i=b;i<=a;i++)
            if(i%2==0)
                cout<<i<<" ";
    if(a<b)
        for(i=a;i<=b;i++)
            if(i%2==0)
                cout<<i<<" ";
}

int main()
{
    int a,b;
    cin>>a>>b;
    afisare(a,b);
    return 0;
}
