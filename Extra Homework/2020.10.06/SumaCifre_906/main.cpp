#include <iostream>

using namespace std;

void sumcif(int n,int &s,int &t)
{
    int c;
    s=t=0;
    while(n)
    {
        c=n%10;
        n/=10;
        if(c%2==0)
            s+=c;
        else
            t+=c;
    }
}

int main()
{
    int n,s,t;
    cin>>n;
    sumcif(n,s,t);
    cout<<s<<" "<<t;
    return 0;
}
