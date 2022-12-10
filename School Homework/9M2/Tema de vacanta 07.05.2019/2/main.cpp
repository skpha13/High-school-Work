#include <iostream>

using namespace std;

int main()
{
    int a[101],n,i,emax,emin,k,L,j;
    cout<<"n=";cin>>n;
    for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
   }
    emax=a[1];
   for (i=2;i<=n;i++)if(a[i]>emax)emax=a[i];
    emin=a[1];
   for (i=2;i<=n;i++)if(a[i]<emin)emin=a[i];
   while (a[i]!=emax && k<=n)k++;
   while (a[i]!=emin && L<=n)L++;
   if (k<L)for (i=k;i<=L-1;i++)
                for (j=i+1;j<=L;j++)
                    if (a[i]>a[j])swap(a[i],a[j]);
                    else
                        for (i=L;i<=k-1;i++)
                            for (j=i+1;j<=k;j++)
                                if (a[i]>a[j])swap(a[i],a[j]);
    cout<<"a[";
    for (i=1;i<=n;i++)
        cout<<a[i]<<",";
    cout<<"]";
    return 0;
}
