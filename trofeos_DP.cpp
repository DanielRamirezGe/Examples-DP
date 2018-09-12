#include<bits/stdc++.h>
using namespace std;
/*typedef struct arr
{
	int i;
	int j;
	int valor;
	int tiempo;
} arr;
arr[100];*/
int cuanto;
int mat[101][101][100];
int tiem[101][101][100];
int fun(int i,int j,int t)
{
	//cout<<"t: "<<t<<" valor: "<<i<<endl;
	if(t>100 or i<0 or j<0 or j>100 or i>100)
		return 0;
	auto &res=mat[i][j][t];
	if(~res)
		return res;
	res=tiem[i][j][t] + max( max(fun(i+1,j,t+1), fun(i-1,j,t+1)),max( max(fun(i,j+1,t+1), fun(i,j-1,t+1)), fun(i,j,t+1)));	
	return res;
}
int main()
{
					

	int a,b;
	cin>>a>>b;
	cin>>cuanto;
	int i,j,tiempo,valor;
	cout<<a<<" "<<b<<" "<<cuanto<<endl;
	memset(mat,-1,sizeof(mat));
	memset(tiem,0,sizeof(tiem));
	for(int h=0; h<cuanto; h++)
	{
		cin>>i;
		cin>>j;
		cin>>valor;
		cin>>tiempo;
		tiem[i][j][tiempo]=valor;

	}
	int mayor=fun(a,b,0);
	cout<<mayor<<endl;
}