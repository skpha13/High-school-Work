#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int main()
{
    int i,x,n,c,s1=0,s2=0,k=0;
    while(f>>x){
        cout<<x<<" ";
        k++;
        if(k==5){
            cout<<endl;
            k=0;
        }
        n=x;
        while(n>0){
            c=n%10;
            n/=10;
            s1+=c;
        }
        if(s1%2==0)s2++;
        s1=0;
    }
    cout<<endl<<endl;
    cout<<s2;
    cout<<endl;
    f.close();
    return 0;
}
