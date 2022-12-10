#include <iostream>

using namespace std;

int  n,a[101],i,x,ogl,j;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    i=1;
    while(i<=n)
    {
        ogl=0;
        x=a[i];
        while(x!=0)
        {
            ogl=ogl*10+x%10;
            x=x/10;
        }
        if(ogl==a[i])
        {
            for(j=i+1;j<=n;j++)
                a[j-1]=a[j];
            n--;
        }
            else
                i++;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
