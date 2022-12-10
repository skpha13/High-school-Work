#include <iostream>

using namespace std;

int sub(int v[100],int n,int a)
{
    int k;
    for(int i=1;i<=n;i++)
        if(v[i]<a)
            k++;
    return k;
}

int main()
{
    int v[101],n,a,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    cin>>a;
    cout<<sub(v,n,a);
    return 0;
}
