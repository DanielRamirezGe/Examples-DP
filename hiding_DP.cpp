#include <bits/stdc++.h>
using namespace std;
int main()
{
	int casos,num;
	cin>>casos;
	long long arr[casos];
	cin>>num;
	arr[0]=num;
	for(int i=1; i<casos; i++)
	{
		cin>>num;
		arr[i]=arr[i-1]+num;
	}
	sort(arr,arr+casos);
	int res=0;	
	int con=1;
	for(int i=0;i<casos-1; i++)
	{

		num=arr[i];
		if(arr[i+1]==num)
			con++;
		else
		{
			if(num==0)
					res+=(con*(con+1))/2;
			else
					res+=(con*(con-1))/2;
			con=1;
		}
		if(i==casos-2 and con!=1)
			res+=(con*(con-1))/2;
	}
	cout<<res<<endl;	
	return 0;
}