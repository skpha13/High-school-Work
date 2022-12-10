#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p;
int n,ok;

int main()
{
    cin.getline(s,101);
    cin>>n;
    p=strtok(s," ");
    while(p)
    {
        if(strlen(p)==n) 
        {
            cout<<p<<endl;
            ok=1;
        }
        p=strtok(NULL," "); 
    }
    if(!ok)cout<<"nu exista";
    return 0;
}