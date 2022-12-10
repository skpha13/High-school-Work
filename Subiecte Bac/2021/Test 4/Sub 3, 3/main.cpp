#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac1.txt");
ifstream g("bac2.txt");

int n1,n2,x,y,n,i,j,ok;

int main()
{
    f>>n1>>x;
    g>>n2>>y;
    i=j=1;
    while(i<=n1 && j<=n2)
    {
        if(x<y && x%5==0)
        {
            ok=1;
            cout<<x<<" ";
            f>>x;
            i++;
        }
        else 
            if(y<x && y%5==0) 
            {
                ok=1;
                cout<<y<<" ";
                g>>y;
                j++;
            }
        else 
            {
                f>>x;
                i++;
                g>>y;
                j++;
            }
    }
    do
    {
        if(x%5==0)
        {
            ok=1;
            cout<<x<<" ";
        }
    } while (f>>x);
    do
    {
        if(y%5==0)
        {
            ok=1;
            cout<<y<<" ";
        }
    } while (g>>y);
    if(!ok)cout<<"nu exista";
    return 0;
}
