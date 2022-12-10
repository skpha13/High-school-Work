#include <iostream>

using namespace std;

int n;

void inserare(int &n)
{
    int c,p=1,m=0,dif;
    while(n)
    {
        c=n%10;
        if(n>9)
        {
            n/=10;
            dif=c-n%10;
            if(dif<0)dif=-dif;
            m=c*p+m; p*=10;
            m=dif*p+m; p*=10;
        }
        else
            {
                m=c*p+m;
                n/=10;
            }
    }
    n=m;
}

int main()
{
    cin>>n;
    inserare(n);
    cout<<n;
    return 0;
}