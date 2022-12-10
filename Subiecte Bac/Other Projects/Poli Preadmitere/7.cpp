#include <iostream>

using namespace std;

int a[]={1,2,5,8,9,11},b[]={1,5,7,11,22,45},i,j,n=6,m=5;

int main()
{
    i=0;
    j=0;
    while(i<n && j<m)
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else
            if(a[i]<b[j]) i=i+i;
            else
                j++;
}