#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int p[10],u[10],mx,i,x;

int main()
{
    while(f>>x && ++i)
        if(p[x]==0)p[x]=i;
        else
        {
            u[x]=i;
            if(u[x]-p[x]>mx)
                mx=u[x]-p[x];
        }
    cout<<mx+1<<endl;
    for(i=0;i<=9;i++)
        if(u[i]-p[i]==mx)cout<<i<<" ";
    f.close();
    return 0;
}