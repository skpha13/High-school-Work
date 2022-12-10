#include <iostream>

using namespace std;

int nr_prim(int n)
{
    int ok,i,k=1;
    while(k>0)
    {
        n++;
        ok=1;
        if(n<2)ok=0;
        for(i=2;i*i<=n;i++)
            if(n%i==0)
            {
                ok=0;
                break;
            }
        if(ok)return n;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    cout<<nr_prim(n);
    return 0;
}
