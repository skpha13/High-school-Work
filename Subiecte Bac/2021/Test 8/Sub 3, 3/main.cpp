#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,a,b,y=1635;

int main()
{
    while(f>>x)
        if(x%2)
        {
            a=b;
            b=x;
        }
    if(a && b)
        cout<<a<<" "<<b;
    else
        cout<<"nu exista";
    return 0;
}
