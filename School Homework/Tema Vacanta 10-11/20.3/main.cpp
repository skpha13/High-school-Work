int aranjare(int a[101],int n)
{
    int i,m=n,z;
    for(i=1;i<=n;i++)
        if(a[i]==0)
            if(a[m]!=0){
                z=a[n];
                a[n]=a[i];
                a[i]=z;
                m--;
            }
                else
                    m--;
}
