#include <iostream>

using namespace std;

int main()
{
    int n,x,valmin;
    cout<<"n=";cin>>n;
    cout<<"x=";cin>>x;
    while (x)
    {
        valmin=x;
        cin>>x;
        if (valmin>x)
            valmin=x;
        cin>>x;
    }
}
