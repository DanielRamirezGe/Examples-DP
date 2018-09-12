#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int con=0;
	while(scanf("%d",&n)!=EOF)
	{
		int mat[n+2][n+2];
		int acc[n+2][n+2];
		memset(acc,0,sizeof(acc));
		//memset(mat,0,sizeof(mat));
		for(int i=1; i<=n ; i++)
			for(int j=1; j<=n ; j++)
				cin>>mat[i][j];
		for(int i=1; i<=n ; i++)
			for(int j=1; j<=n ; j++)
				acc[i][j]=acc[i-1][j]+acc[i][j-1]-acc[i-1][j-1]+mat[i][j];	

		int max=-99999999;
		int num;
		/*for(int i=1; i<=n ; i++)
		{
			for(int j=1; j<=n ; j++)
				cout<<acc[i][j]<<" ";
			cout<<endl;
		}
		cout<<endl;*/	
		for(int j=n; j>=0; j--)
		{
			for(int i=n; i>=0; i--)
			{
				for (int m=j; m>0 ; m--)
				{
					for(int l=i; l>0; l--)
					{
						num=acc[i][j]-acc[l-1][j]-acc[i][m-1]+acc[l-1][m-1];
						//cout<<acc[i][j]<<"-"<<acc[l-1][j]<<"-"<<acc[i][m-1]<<"+"<<acc[l-1][m-1]<<"="<<num;
						//printf("\t%d  %d\n",l,m);
						if(max<num)
							max=num;
					}
				}
			}
		}
		cout<<max<<endl;


	}
}