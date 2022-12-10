#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac1.txt");
ifstream g("bac2.txt");

int n1,n2,x,y;

int main()
{
    f>>n1>>x;
    g>>n2>>y;
    while(n1 && n2)
        if(x<y)
        {
            n1--;
            f>>x;
        }
        else
            if(x>y)
            {
                n2--;
                g>>y;
            }
            else
                {
                    cout<<y<<" ";
                    f>>x;
                    g>>y;
                    n1--;
                    n2--;
                }
    return 0;
}
