#include <iostream>

using namespace std;

int n;

int Egal(int n)
{
    int c=0;
    while(n)
    {
        if(n%2==1 && c==0)
        {
            c=n%10;
            n/=10;
        }
        else
            if(n%2==1 && n%10!=c) return 0;
        n/=10;
    }
    return 1;
}

int main()
{
    cout<<Egal(7240);
    return 0;
}