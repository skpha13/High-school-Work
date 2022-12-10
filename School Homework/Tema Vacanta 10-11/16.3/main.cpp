int multiplu(int n,int a[101],int k)
{
    int i,p;
    for(i=1;i<=n;i++){
        if(a[i]%k==0 && a[i]%10==k)p++;
    }
}

