#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere.txt");

int main()
{
    int n,k,i,j,a[101],x;
    cout<<"k=";cin>>k;
    f>>x;
    while(!f.eof()){
        i++;
        a[i]=x;
        f>>x;
    }
    n=i;
    for(i=1;i<n;i++)
        for(j=1+i;i<=n;j++)
            if(a[i]<a[j])swap(a[i],a[j]);
    for(i=1;i<=n;i++)
        if(a[i]==k)cout<<i;
    return 0;
    f.close();
}
