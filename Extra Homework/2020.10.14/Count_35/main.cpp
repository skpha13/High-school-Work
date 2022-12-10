#include <iostream>

using namespace std;

double a[101];
int n;

int count(double a[],int n)
{
    int i,k=0;
    double s=0;
    for(i=0;i<n;i++)
        s+=a[i];
    for(i=0;i<n;i++)
        if(a[i]>=s/n)
            k++;
    return k;
}

int main()
{
    int i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    cout<<count(a,n);
    return 0;
}
