#include <bits/stdc++.h>
using namespace std;
int main()
{
	int capi[1000001];
	int aux;
	string lo;
	memset(capi,0,sizeof(capi));
	for(int i=1; i< 1000001; i++)
	{
		lo.clear();
		aux=i;
		while(aux!=0)
		{
			lo.push_back(aux%10);
			aux/=10;
		}
		aux=0;

		for(int m=0; m<lo.size()/2; m++)
		{
			if(lo[m]!=lo[lo.size()-1-m])
			{
				aux=1;
				break;
			}
		}
		
		capi[i]=capi[i-1];
		if(aux==0 )
				capi[i]++;
		

	}
	int casos,a,b;
	cin>>casos;
	for(int i=0; i<casos; i++)
	{
		cin>>a>>b;
		cout<<capi[b]-capi[a-1]<<endl;
	} 
	return 0;
}