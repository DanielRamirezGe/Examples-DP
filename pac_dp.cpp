#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tam;
	cin>>tam;
	int tab[tam][tam];
	int res[tam+2][tam+2];
	memset(res,0,sizeof(res));
	vector<pair<int,int>> cor;
	pair<int,int> aux;
	for(int i=0; i<tam; i++)
	{
		for(int j=0; j<tam; j++)
		{
			cin>>tab[i][j];
		}
	}
	res[tam-1][tam-1]=0;
	for(int h=tam-2; h>=0; h--)
	{
		res[tam-1][h]=tab[tam-1][h]+res[tam-1][h+1];
	}
	for(int h=tam-2; h>=0; h--)
	{
		res[h][tam-1]=tab[h][tam-1]+res[h+1][tam-1];
	}
	for(int h=tam-2; h>=0 ; h--)
	{
		for(int k=tam-2; k>=0; k--)
		{
			if(res[h][k+1]>res[h+1][k])
				res[h][k]=tab[h][k]+res[h][k+1];			
			else
				
				res[h][k]=res[h+1][k]+tab[h][k];
				
		}
	}
	cout<<res[0][0]<<endl;
	int a,b,ban=0;
	for(int i=0; i<tam; )
		{
			for(int j=0; j<tam; )
			{
				if(i==tam-1 and j==tam-1)
					{
						ban=1;
						break;
					}
				if(res[i+1][j]>res[i][j+1])
				{
					i++;
					aux.first=i+1;
					aux.second=j+1;
					cor.push_back(aux);

				}
				else
				{
					j++;
					aux.first=i+1;
					aux.second=j+1;
					cor.push_back(aux);
				}
			}
			if(ban==1)
				break;
		}
	cout<<1<<" "<<1<<endl;
	for(int j=0; j<cor.size(); j++)
		cout<<cor[j].first<<" "<<cor[j].second<<endl;

}