#include <iostream>
#include <fstream>

using namespace std;

ofstream g("bac.out");

int x;

int main()
{
    cin>>x;
    g<<x<<" ";
    while(x>1)
    {
        if(x>10 && x%2==0)
        {
            x/=2;
            g<<x<<" ";
        }
        else
            {
                x--;
                g<<x<<" ";
            }
    }
    g.close();
    return 0;
}