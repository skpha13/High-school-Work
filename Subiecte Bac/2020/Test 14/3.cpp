#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int x,a,b,c;

int main()
{
    a=b=c=1e9;
    while(f>>x)
        if(x%100==20)
            if(x<a)
            {
                c=b;
                b=a;
                a=x;
            }
            else
                if(x<b)
                {   
                    c=b;
                    b=x;
                }
                else
                    if(x<c)
                        c=x;
    cout<<a<<" "<<b<<" "<<c;
    f.close();
    return 0;
}