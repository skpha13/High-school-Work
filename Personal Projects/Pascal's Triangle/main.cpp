#include <iostream>

using namespace std;

int n;

int binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void triangle(int n)
{
    if(n==1)
    {
        cout<<" "<<1<<endl;
        cout<<1<<" "<<1;
        return ;
    }
    if(n==2)
    {
        cout<<"    "<<1<<endl;
        cout<<"  "<<1<<"   "<<1<<endl;
        cout<<1<<"   "<<2<<"   "<<1;
        return ;
    }
    for(int j=0;j<=n;j++)
    {
        for(int i=(n-j)*(n-2);i>=1;i--)
            cout<<" ";
        for(int l=0;l<=j;l++)
        {
            cout<<binomialCoeff(j,l);
            for(int i=1;i<n-1;i++)
                cout<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    cout<<"Input value for Pascal's triangle: ";
    cin>>n;
    triangle(n);
    cout<<"type anything to close: ";
    cin>>n;
}