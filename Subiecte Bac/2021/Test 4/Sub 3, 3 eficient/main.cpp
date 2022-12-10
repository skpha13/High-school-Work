#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac1.txt");
ifstream g("bac2.txt");

int n1,n2,x,y,ok;

int main()
{
    f>>n1>>x;
    g>>n2>>y;
    while(n1 && n2)
    {
        if(x<y)
        {
            if(x%5==0)
            {
                cout<<x<<" ";
                ok=1;
            }
            n1--;
            f>>x;
        }
        else
            if(x>y)
            {
                if(y%5==0)
                {
                    cout<<y<<" ";
                    ok=1;
                }
                n2--;
                g>>y;
            }
        if(x==y)
        {
            f>>x;
            g>>y;
            n1--;
            n2--;
        }
    }
    while(n1)
    {
        if(x%5==0)
        {
            cout<<x<<" ";
            ok=1;
        }
        n1--;
        f>>x;
    }
    while(n2)
    {
        if(y%5==0)
        {
            cout<<y<<" ";
            ok=1;
        }
        n2--;
        g>>y;
    }
    if(!ok)cout<<"nu exista";
    return 0;
}
