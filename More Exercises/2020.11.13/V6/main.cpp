#include <iostream>
#include <fstream>

using namespace std;

ofstream f("BAC.TXT");

int n,p,a[101],q,i;

(void s1(int &a,int &b)
{
    int x;
    x=a;
    a=b;
    b=x;
}


int s2(int a[],int p,int q)
{
    for(p=1;p<=q;p++)
        if(a[p]%5==0)
            return p;
    return -1;
}

void rez(int n,int a[])
{

}

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    rez(n,a);
    for(i=1;i<=n;i++)
        g<<a[i]<<" ";
    return 0;
}
