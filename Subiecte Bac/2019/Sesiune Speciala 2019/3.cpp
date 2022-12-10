#include <iostream>
#include <fstream>

using namespace std;

ofstream g("bac.txt");

int n,x,y,z;

int main()
{
    cin>>n>>x>>y>>z;
    while(n)
    {
        if(n%2==0) g<<(n/2-1)*(z-x)+y<<" ";
        else g<<n/2*z-(n/2-1)*x<<" ";
        n--;
    }
    g.close();
    return 0;
}