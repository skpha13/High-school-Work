int interval(int a[101], int n)
{
    int i,k,z;
    if(a[1]>a[n]){
        z=a[n];
        a[n]=a[1];
        a[1]=z;
    }
    for(i=1;i<=n;i++){
        if(a[i]>=a[1] && a[i]<=a[n])k++;
    }
}
