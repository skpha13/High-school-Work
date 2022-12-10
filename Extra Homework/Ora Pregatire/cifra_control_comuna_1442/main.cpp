#include <iostream>

using namespace std;

int sum(int n)
{
    int s=0,s1=0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    while(s/10!=0)
    {
        while(s)
        {
            s1+=s%10;
            s/=10;
        }
        s=s1;
        s1=0;
    }
    return s;
}

/*int sum_cifra_control(int a,int b)
{
    int s=0,i,x,k=0;
    x=sum(a);
    for(i=a;i<=b;i++)
        if(sum(i)==x)
            k++;
    return k;
}
*/
int sum_cifra_control(int a,int b)
{
    int i,k=0;
    for(i=a;i<=b;i+=9)
            k++;
    return k;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<sum_cifra_control(a,b);
    return 0;
}
