#include <iostream>

using namespace std;

int n;

int sumfactcif(int n)
{
    int i,s=0,p,c;
    if(n==0)return 1;
    while(n)
    {
        c=n%10;
        p=1;
        for(i=1;i<=c;i++)
            p=p*i;
        s+=p;
        n/=10;
    }
    return s;
}

int main()
{
    cin>>n;
    cout<<sumfactcif(n);
    return 0;
}
