#include <iostream>

using namespace std;

int nr_cif_zero(int n)
{
    int c,k=0;
    if(n==0)return 1;
    while(n)
    {
        c=n%10;
        n/=10;
        if(c==0)
            k++;
    }
    return k;
}

int main()
{
    int n;
    cin>>n;
    cout<<nr_cif_zero(n);
    return 0;
}
