#include <iostream>
#include <fstream>

using namespace std;

ifstream f("hanoi.in");
ofstream g("hanoi.out");

char a,b,c;
int n,k=1,i;

void hanoi(int n,char a,char b,char c)
{
    if(n==1)g<<a<<"->"<<c<<" "<<endl;
    else
    {
        hanoi(n-1,a,c,b);
        g<<a<<"->"<<c<<" "<<endl;
        hanoi(n-1,b,a,c);
    }
}

int main()
{
    f>>n;
    a='A';
    b='B';
    c='C';
    for(i=1;i<=n;i++)
        k*=2;
    g<<k-1<<endl;
    hanoi(n,a,b,c);
    return 0;
}
