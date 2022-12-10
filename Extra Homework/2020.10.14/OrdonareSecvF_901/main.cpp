#include <iostream>

using namespace std;

void ordonare(int a[],int n,int st,int dr)
{
    int i,j;
    for(i=st;i<dr;i++)
        for(j=i+1;j<=dr;j++)
            if(a[i]>a[j])swap(a[i],a[j]);
}

int main()
{
    int n,i,a[1001],st,dr;
    cin>>n>>st>>dr;
    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    ordonare(a,n,st,dr);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
