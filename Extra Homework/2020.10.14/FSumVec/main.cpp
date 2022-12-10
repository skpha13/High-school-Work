#include <iostream>

using namespace std;

int suma(int v[],int n,int i,int j)
{
    int k,s=0;
    for(k=1;k<=n;k++)
        if(k<=i-1 || k>=j+1)
            s+=v[k];
    return s;
}

int main()
{
    int n,i,j,v[101],k;
    cin>>n>>i>>j;
    for(k=1;k<=n;k++)
    {
        cout<<"v["<<k<<"]=";
        cin>>v[k];
    }
    cout<<suma(v,n,i,j);
    return 0;
}
