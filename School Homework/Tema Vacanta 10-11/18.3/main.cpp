int count(int a[101], int n)
{
    int i,p=0;
    float ma;
    for(i=1;i<=n;i++){
        ma+=a[i];
    }
    ma/=n;
    for(i=1;i<=n;i++)
        if(a[i]<=ma)p++;
}
