#include <iostream>

using namespace std;

int nr_cif(int n,int k)
{
    int p=0,c;
    while(n)
    {
        c=n%10;
        if(c!=0 && k%c==0)
            p++;
        n/=10;
    }
    return p;
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<nr_cif(n,k);
    return 0;
}
