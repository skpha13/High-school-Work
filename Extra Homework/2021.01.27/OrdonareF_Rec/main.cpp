#include <iostream>

using namespace std;

int a[1001],n,i;

void ordonare(int a[1001],int n)
{
    int i;
    if(n>0)
    {
        for(i=1;i<n;i++)
            if(a[i]<a[i-1])
                swap(a[i],a[i-1]);
        ordonare(a,n-1);
    }
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    ordonare(a,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
