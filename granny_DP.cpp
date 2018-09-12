#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 9999959999
//9 999 959 999;
ll mat[1001][2001];
ll fun (ll l, ll s)
{
	if(l==0 and s==0 )
	{
		return  mat	[0][0]=1;
	}
	//auto &res=mat[l][s];
	if(mat[l][s]!=-1)
		return mat[l][s];
	if(l-1>=0 and s-1>=0)
	 	return mat[l][s]= (1 + fun(l-1,s+1)+fun(l,s-1))%mod;
	 if(l-1>=0)
	 	return mat[l][s]=(1+ fun(l-1,s+1))%mod;
	 if(s-1>=0)
	 	return mat[l][s]=( 1+ fun(l,s-1))%mod;

}
int main()
{
	int lar,small;
	memset(mat, -1, sizeof( mat ));
	while(cin>>lar and cin>>small and lar!=0 and small!=0)
	{
		
		cout<<fun(lar,small)<<endl;
		/*for(int i=0; i<1000; i++)
			for(int j=0; j<1000; j++)
				cout<<mat[i][j]<<" ";
			cout<<endl;*/
	}
}