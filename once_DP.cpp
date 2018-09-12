#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	int imp[]={209,319,429,539,649,759,869,979,10989};
	int par[]={11,22,33,44,55,66,77,88,99};
	//while(cin>>num and num!=0)
	/*int arr[999999];
	memset(arr,-1,sizeof(arr));
	for(int i=1; i<99999999; i++)
		{
			long long p=i*11;
			long long g=0;
			int in=0;
			while(p!=0)
			{
				g+=p%10;
				in++;
				p/=10;
			}
			if(arr[g]==-1)
			{
			//	cout<<11*i<<"  "<<g<<endl;
				arr[g]=11*i;
			}
		}
	for(int i=1; i<999999; i++)
		//if(arr[i]!=-1)	
			cout<<i<<"  "<<arr[i]<<endl;*/
	while(cin>>num and num!=0)
	{
		int mod=num%28;
		cout<<mod<<"  "<<arr[mod]<<endl;
	}
} 	 	 	