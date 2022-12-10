#include <iostream>

using namespace std;

void ordonare(int x[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(x[i]%2!=0 && x[j]%2!=0 && x[i]>x[j])
                swap(x[i],x[j]);
}

int main()
{
    int x[100],n,i;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    ordonare(x,n);
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    return 0;
}
