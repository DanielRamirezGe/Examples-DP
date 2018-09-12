#include <bits/stdc++.h>
using namespace std;
int main()
{
	int cuantos;
	cin>>cuantos;
	int arr[cuantos];
//	int tab[cuantos];
//	memset(tab,0,sizeof(tab));
	vector < int > vec;
	for(int i=0; i<cuantos; i++)
	{
		cin>>arr[i];		
	}
	int tot=0;
	int ban=1;
	for(int i=0; i<cuantos; i++)
	{
		if(arr[i]>0)
		{
			tot+=arr[i];
			ban=2;
		}
		i
	}
	for(int i=0; i<cuantos; i++)
	{
		for(int j=0; j<cuantos; j++)
			cout<<tab[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	int mayor=tab[0][0];
	for(int i=0; i<cuantos; i++)
		for(int j=0; j<cuantos; j++)
			if(mayor<tab[i][j])
				mayor=tab[i][j];
	cout<<mayor<<endl;
}