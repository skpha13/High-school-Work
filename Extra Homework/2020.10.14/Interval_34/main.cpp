#include <iostream>

using namespace std;

int a[101],n,i;

int interval(int a[], int n)
{
    int i,k=0,p,u;
    p=a[0];
    u=a[n-1];
    if(p>u)
        swap(p,u);
    for (i=0;i<n;i++)
        if(a[i]<=u && a[i]>=p)
            k++;
    return k;
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    cout<<interval(a,n);
    return 0;
}
