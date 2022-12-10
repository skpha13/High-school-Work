#include <iostream>

using namespace std;

int a,b,k,nr;

void divizor(int a,int b, int k,int &nr)
{
    int i;
    for(i=a;i<=b;i++)
        if(i%k==0 && i%10==k)
            nr++;
}

int main()
{
    cin>>a>>b>>k;
    divizor(a,b,k,nr);
    cout<<nr;
    return 0;
}
