#include <iostream>

using namespace std;

int suma(int a,int b)
{
    if(a==0)return b;
    else
        return suma(a-1,b+1);
}

int prod(int a,int b)
{
    if(b==1)return a;
    else
        return a+prod(a,b-1);
}

int cat(int a,int b)
{
    if(a<b)return 0;
    else
        return 1+cat(a-b,b);
}

int rest(int a,int b)
{
    if(a<b)return a;
    else
        return rest(a-b,b);
}

int pa(int a,int n,int r)
{
    if(n==0)return 0;
    else
    {
        cout<<a<<" ";
        return pa(a+r,n-1,r);
    }
}

int main()
{
    int a,b,n,r;
    cin>>a>>b>>n>>r;
    cout<<"1) "<<suma(a,b)<<endl;
    cout<<"2) "<<prod(a,b)<<endl;
    cout<<"3) "<<cat(a,b)<<endl;
    cout<<"4) "<<rest(a,b)<<endl;
    cout<<"5) ";
    pa(a,n,r);
    return 0;
}

/*Variante BAC:

V3=  xyyy
V4=  01111
V5=  7*****
V6=  0/7
V7=  42
V8=  2
     1 2 3
V9=  3
V10= 9
*/
