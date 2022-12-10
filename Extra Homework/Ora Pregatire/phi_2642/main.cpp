#include <iostream>

using namespace std;

int cmmdc(int a,int b)
{
    int r=a%b;
    while(r)
    {
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}

int Phi(int n)
{
    int i,k=0;
    for(i=1;i<n;i++)
        if(cmmdc(i,n)==1)
            k++;
    return k;
}

int main()
{
    int n;
    cin>>n;
    cout<<Phi(n);
    return 0;
}
