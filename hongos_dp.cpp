#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll casos, cuanto;
	cin>>casos;
	for(int i=0; i<casos; i++)
	{
		cin>>cuanto;
		ll arr[cuanto];
		ll respuestas[cuanto];
		memset(respuestas,-1,sizeof(respuestas));
		for(ll h=0; h<cuanto; h++)
		{
			cin>>arr[h];		
		}
		for(int j=cuanto-1; j>=0; j--)
		{
			if(j==cuanto-1)
				respuestas[j]=arr[j];
			else
			{
				ll ind=j+arr[j];
				ll p;
				if(ind>=cuanto)
					p=0;
				else
					p=respuestas[ind];
				if(arr[j]+p>respuestas[j+1])
					respuestas[j]=arr[j]+p;
				else
					respuestas[j]=respuestas[j+1];
			}
		}


		ll res=0;
		for( int g=0; g<cuanto; g++)
		{
			if(res<respuestas[g])
				res=respuestas[g];
		}
		cout<<res<<endl;
	}
}