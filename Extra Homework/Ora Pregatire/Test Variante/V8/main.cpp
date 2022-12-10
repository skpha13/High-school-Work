#include <iostream>

using namespace std;

void f(int n)
{
    if(n!=0)
    {
        if(n%2==0)
            cout<<n<<" ";
        f(n-1);
        cout<<n<<" ";
    }
    else
        cout<<endl;
}

int t(int a,int b)
{
    if(b<1)return -1;
    else
        if(a%b==0)
            return 1+t(a/b,b);
        else
            return 0;
}

int m(long n,int k)
{
    if(n!=0)
        if(n%10==k)
            return 1+m(n/10,k);
        else return 0;
    else return 0;
}

int z(int n)
{
    int c;
    if(n==0)return 9;
    else
    {
        c=z(n/10);
        if(n%10<c)return n%10;
        else
            return c;
    }
}

int h(int n)
{
    if(n<=1)return n;
    else return n+h(n-2);
}

int g(int x,int y)
{
    if(x<y)return 1+g(x+1,y);
    if(y<x)return 1+g(y+1,x);
    return 1;
}

void l(int x)
{
    if(x<=9)
    {
        cout<<x+1;
        l(x+2);
        cout<<x+3;
    }
}

int t(int n)
{
    int c;
    if(n!=0)
    {
        if(n%2==1)
            c=1+t(n/2);
        else
            c=t(n/2);
        cout<<n%2;
        return c;
    }
    else
        return 0;
}

int u(int n)
{
    int c;
    if(n!=0)
    {
        if(n%2==0)
            c=1+u(n/2);
        else c=u(n/2);
        cout<<n%2;
        return c;
    }
    else return 0;
}

int y(long n)
{
    if(n==4)return n;
    else
    {
        if(n%10==4 || n%10==0)return n+y(n/10);
        else
            return n+y(n*2);
    }
}

void p(char c)
{
    if(c>'A')p(c-1);
    cout<<c;
    if(c>'A')p(c-1);
}

int r(unsigned int n)
{
    if(n==0)return 0;
    else if(n%2==0)
            return n%10+r(n/10);
        else
            return r(n/10);
}

int o(int a,int b)
{
    if(2*a>=b)
        return 0;
    if(b%a==0)
        return b-a;
    return o(a+1,b-1);
}

long m(long x)
{
    if(x>9)
        return (x/10+x%10);
    else
        return x;
}

long v(int c)
{
    if(c<1)
        return 1;
    else
        return m(c+v(c-1));
}

int main()
{
    cout<<v(6);
    return 0;
}
