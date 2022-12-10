#include <iostream>

using namespace std;

int b,n;

int transformareBaza10(int b,int n);

int main()
{
    cin>>b>>n;
    cout<<transformareBaza10(b,n);
    return 0;
}

int transformareBaza10(int b,int n)
{
    int i=0,s=0,j,p,c;
    while(n)
    {
        c=n%10;
        p=1;
        for(j=1;j<=i;j++) p*=b;
        s+=c*p;
        n/=10;
        i++;
    }
    return s;
}