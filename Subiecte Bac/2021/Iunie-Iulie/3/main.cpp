#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,a,b,rez1,rez2;

int main()
{
    f>>x>>a;
    while(f>>b)
    {
        if(a%1000==x && b%1000==x)
            rez1=a,rez2=b;
        a=b;
    }
    if(rez1 && rez2)
        cout<<rez1<<" "<<rez2;
    else
        cout<<"nu exista";
    return 0;
}
