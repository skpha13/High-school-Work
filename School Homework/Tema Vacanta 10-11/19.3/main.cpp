int aranjare(int a[101],int n)
{
    int i,j,z;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(a[i]<0 && a[j]>=0){
                z=a[j];
                a[j]=a[i];
                a[i]=z;
            }
}
