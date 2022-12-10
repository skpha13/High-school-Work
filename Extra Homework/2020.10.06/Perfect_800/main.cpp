#include <iostream>

using namespace std;

void perfect(int a,int b)
{
    int k=0,i,j,s;
    for(i=b;i>=a;i--)
    {
        s=0;
        for(j=1;j*2<=i;j++)
            if(i%j==0 && j<i)
                s+=j;
        if(s==i)
        {
            cout<<i<<" ";
            k++;
        }
    }
    if(!k)cout<<"nu exista";
}

int main()
{
    int a,b;
    cin>>a>>b;
    perfect(a,b);
    return 0;
}
