#include <iostream>

using namespace std;

int n;

int suma(int n);

int main()
{
    cin>>n;
    cout<<suma(n);
}

int suma(int n)
{
    int s=1,i,j,ok;
    for(i=1;i<=n;i++)
    {
        ok=0;
        if(n%i==0)
        {
            for(j=2;j<i;j++)
                if(i%j==0) ok=1;
            if(ok) 
                s+=i;
        }
    }
    return s;
}