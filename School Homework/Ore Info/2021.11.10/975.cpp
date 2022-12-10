#include <iostream>
#include <cstring>

using namespace std;

char s[256],sep[]=" ,.",*p,t[11]="zzzzzzzzzz";
int ok;

int palindrom(char s[])
{
    int i,j;
    i=0;
    j=strlen(s)-1;
    while(i<j)
    {
        if(s[i]!=s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main()
{
	cin.getline(s,256);
	p=strtok(s,sep);
	while(p)
    {
        if(palindrom(p))
            if(strcmp(t,p)>0)
            {
                strcpy(t,p);
                ok=1;
            }
        p=strtok(NULL,sep);
    }
    if(ok)cout<<t;
    else
        cout<<"IMPOSIBIL";
	return 0;
}
