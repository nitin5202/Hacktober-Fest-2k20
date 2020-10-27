#include<iostream>
using namespace std ;

int main()
{
	int times ;
	cin>> times ;
	
	for(int r=0;r<times;r++)
	{
		int flag = 0 ;
		int n ;
		cin >> n ;
		int a[1000]  ;
		for(int i=1 ;i<=n;i++)
		{
			a[i] = i ;
		}
		for(int i=1;i<n;i++)
		{
			if(a[i]&a[i+1]>0)
			continue ;
			else
			{
				flag=1 ;
				break ;
			}
		}
		if(flag==1)
		{
			cout<< "-1"<<endl ;
		}
		if(flag==0)
		{
			for(int i=1;i<=n;i++)
			{
				cout<< a[i]<<endl ;
			}
			cout<<endl ;
		}
	}
}
