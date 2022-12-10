#include <iostream>
#include <fstream>

using namespace std;

ifstream f("knivel1.in");
ofstream g("knivel1.out");

int s[10001],n,k;

void creare(int n)
{
    int x;
    f>>x;
    s[n]+=x;
    if(x)
    {
        creare(n+1);
        creare(n+1);
    }
}

int main()
{
    creare(n);
    f>>k;
    g<<s[k];
    return 0;
}
