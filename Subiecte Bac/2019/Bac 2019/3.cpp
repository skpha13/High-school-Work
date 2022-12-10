#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,y,mx,i=1,poz;

int main()
{
    f>>x;
    cout<<x<<" ";
    mx=x;
    while(f>>y)
    {
        i++;
        if(y>mx)
        {
            cout<<y<<" ";
            mx=y;
            poz=i;
        }
        else
            if(y==mx && i-poz==1)
            {
                cout<<y<<" ";
                poz=i;
            }
        x=y;
    }
    f.close();
    return 0;
}