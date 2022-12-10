#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int x,ok;

int main()
{
    while(f>>x)
        if(x%2==0)
        {
            cout<<x<<" ";
            ok=1;
        }
    if(!ok)cout<<"nu exista";
    return 0;
}
