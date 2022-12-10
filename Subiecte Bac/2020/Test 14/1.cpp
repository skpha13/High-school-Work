#include <iostream>

using namespace std;

int n;

void perechi(int n)
{
    int i,ok=0;
    for(i=1;i<=n/2;i++)
        if(n%i==0 && i<n/i && i%2!=n/i%2)
        {
            cout<<'['<<i<<" "<<n/i<<']';
            ok=1;
        }
    if(!ok)cout<<"nu exista";
}

int main()
{
    cin>>n;
    perechi(n);
    return 0;
}