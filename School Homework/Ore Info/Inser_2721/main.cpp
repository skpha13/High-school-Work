#include <iostream>

using namespace std;

void Insert(int a[],int &n)
{
    int i=1;
    int j;
    while (i<=n)
    if (a[i]%2!=0)
    {
        for (j=n; j>=i+1; j--) a[j+1]=a[j];
        a[i+1]=2*a[i];
        n++;
        i+=2;
    }
    else i++;
}
