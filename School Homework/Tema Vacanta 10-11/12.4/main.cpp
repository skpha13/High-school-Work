#include <iostream>

using namespace std;

int main()
{
    int n,i,j,a[101],b[101],c,x,ok=1,k=0,z;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    for(i=1;i<=n;i++){
        z=a[i];
        c=a[i]%10;
        a[i]=a[i]/10;
        j=1;
        while(ok==1 && j<=4){
            x=a[i]%10;
            a[i]=a[i]/10;
            if (x!=c)ok=0;
            j++;
        }
        if(ok==1){
            k++;
            b[k]=z;
        }
    ok=1;
    }
    for(i=1;i<k;i++)
        for(j=i+1;j<=k;j++)
            if(b[i]>b[j])swap(b[i],b[j]);
    cout<<endl;
    for (i=1;i<=k;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
