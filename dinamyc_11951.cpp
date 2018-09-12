#include <bits/stdc++.h>
using namespace std;
int mat[103][103];
int acc[103][103];
int num;
int bus(int i,int j,int ind)
{	
	int med=j-i/2; 
	if(i==j)
		return acc[ind][med]
	if(acc[ind][med]-acc[j-i-1][j]-acc[i][j-i-1]+acc[]==num)
		return num;
	if(acc[ind][med]<num)
		return bus(i+med+1,j,ind)
	return bus(i,med-1);
}	
int main()
{
	memset(mat,0,sizeof(mat));
	memset(acc,0,sizeof(acc));
	int casos,renglones,columnas;
	scanf("%d",casos);
	for(int i=0; i<casos; i++)
	{
		scanf("%d%d%d",&renglones,&columnas,&num);
		for(int i=1; i<=renglones; i++)
			for(int j=1; j<=columnas ; j++)
			{
				scanf("%d",&mat[i][j]);
				acc[i][j]=mat[i][j]+acc[i-1][j]+acc[i][j-1]-acc[i-1][j-1];
			} 		
		for(int j=0; j<renglones; j++)
		{
			for(int q=0; q<columnas; q++)
		}
	}

}