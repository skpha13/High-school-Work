#include <iostream>

using namespace std;

int n,nr;

void paritate(int n, int &nr)
{
    int i;
    nr=0;
    for(i=1;i<=n;i++)
        if(n%i==0 && i%2==n%2)
            nr++;
}

int main()
{
    cin>>n;
    paritate(n,nr);
    cout<<nr;
    return 0;
}