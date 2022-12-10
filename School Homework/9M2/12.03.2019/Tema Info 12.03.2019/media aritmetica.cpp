#include <iostream>

using namespace std;

int main()
{
    int x,ma,k=1,t;
    cout<<"x=";cin>>x;
    t=x;
    while (x!=0)
    {
        k=k+1;
        cout<<"x=";cin>>x;
        ma=(t+x)/2;
        t=x;
    }
    return 0;
}
