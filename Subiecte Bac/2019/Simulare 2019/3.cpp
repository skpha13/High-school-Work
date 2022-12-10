#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int n,x,i,imp1,par1,imp2,par2;

int main()
{
    imp1=par1=-1;
    imp2=par2=1000001;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(x%2==1 && x>imp1) imp1=x;
        else if(x%2==0 && x>par1) par1=x;
    }
    for(i=n+1;i<=2*n;i++)
    {
        f>>x;
        if(x%2==1 && x<imp2) imp2=x;
        else if(x%2==0 && x<par2) par2=x;
    }
    if(imp1<par2 && par1<imp2) cout<<"DA";
    else cout<<"NU";
    f.close();
    return 0;
}