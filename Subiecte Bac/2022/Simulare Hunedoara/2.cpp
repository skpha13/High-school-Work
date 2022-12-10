#include <iostream>
#include <cstring>

using namespace std;

char s[256],v[11][26],*p;
int i,n,ok,k,j,t,nr;

int main()
{
	cin.getline(s,256);
	p=strtok(s," ");
	while(p)
	{
		strcpy(v[++n],p);
		p=strtok(NULL," ");
	}
	for(i=1;i<=n;i++)
    {
		k=strlen(v[i])-1;
		while(!strchr("aeiou",v[i][k]))
			k--;
		for(j=i+1;j<=n;j++)
		    if(strlen(v[i])>2 && strlen(v[j])>2)
            {
                t=strlen(v[j])-1;
                while(!strchr("aeiou",v[j][t]))
                    t--;
                if(strcmp(v[j]+t,v[i]+k)==0)
                {
                    ok=1;
                    cout<<v[i]<<" "<<v[j]<<endl;
                }
            }
    }
	if(!ok)cout<<"NU EXISTA";
	return 0;
}
