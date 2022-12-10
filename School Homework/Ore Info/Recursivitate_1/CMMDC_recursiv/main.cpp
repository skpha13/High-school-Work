#include <iostream>

using namespace std;

int cmmdc_neeficient(int a,int b)
{
    if(a==b)
        return a;
    if(a>b)
        return cmmdc_neeficient(a-b,b);
    else
        return cmmdc_neeficient(a,b-a);
}

int cmmdc_eficient(int a,int b)
{
    if(b==0)return a;
    return cmmdc_eficient(b,a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<cmmdc_neeficient(a,b)<<endl;
    cout<<cmmdc_eficient(a,b)<<endl;
    return 0;
}
