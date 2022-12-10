#include <iostream>
#include <cstring>

using namespace std;

char s[256],v[]="AEIOU",*p;
int i,f[5],mx,k;

int main()
{
	cin.getline(s,256);
	for(i=0;i<strlen(s);i++)
		if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
    for(i=0;i<strlen(s);i++)
    {
        p=strchr(v,s[i]);
        if(p)
            cout<<p-v;
    }
    for(i=0;i<5;i++)
        if(mx<f[i])
        {
            mx=f[i];
            k=i;
        }
    //cout<<v[k];
	return 0;
}
