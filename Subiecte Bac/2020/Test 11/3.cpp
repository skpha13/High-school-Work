#include <iostream>
#include <fstream>

using namespace std;
 
ifstream f("bac.txt");

int x,y,k;

int main()
{
    f>>x;
    k=1;
    while(f>>y)
    {
        if(x!=y)
        {
            cout<<x<<" "<<k<<" ";
            x=y;
            k=1;
        }
        else
            k++;
    }
    cout<<x<<" "<<k;
    f.close();
    return 0;
}