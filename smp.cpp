#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std ;
int  main()
{    int times ;
cin>>times ;
for(int q=0;q<times;q++)
{

	string a ;
	string b ;
	cin>> a ;
	cin>> b ;
	long int length1 = a.size() ;
	long int length2 =b.size()  ;
	long int frequency[27] ;	
	for(long int i=0;i<26;i++)
	{
		frequency[i] =0 ;
		
	}
	for(long int i=0;i<length1;i++)
	{  
	int z =a[i]-97 ;
		frequency[z] ++;
	}
	for(long int i=0;i<length2;i++)
	{
		int z =b[i]-97 ;
		frequency[z] --;	
	}
	int j= 0 ;
	string required ="" ;
for(int k=0;k<26;k++)
{ 
	long int count =frequency[k] ;
	char r = 97+k ;
	if(count==0)
	continue ;
	else
	{
		for(int i=0 ;i<count;i++)
		{  
		    
			required =required+r ;
		}
	}
}

sort(required.begin(),required.end()) ;
long int length = required.size() ;
 if(b[0]<required[0])
{
	cout<<(b+required)<<endl ;
}

 else if(required[0]==b[0])
{
	for(long int i=0 ;i<length-1;i++)
{
	int z =required[i] ;
	int v = required[i+1] ;
	int u =  b[0] ;
	if(u>=z&&u<=v)
	{   string required1="" ;
	 string required2="" ;
	      required1 =required1+required.substr(0,i)+b+required.substr(i,length) ;
	      required2 =required2+required.substr(0,i)+required.substr(i,length)+b ;
	    cout<<min(required1,required2)<<endl ;
		break ;
	}
}
}
else if(b[0]>required[length-1])
{
	cout<<(required+b)<<endl ;
}
else if(required[length-1]==b[0])
{
	for(int i=0 ;i<length-1;i++)
{
	int z =required[i] ;
	int v = required[i+1] ;
	int u =  b[0] ;
	if(u>=z&&u<=v)
	{   string required1="" ;
	 string required2="" ;
	      required1 =required1+required.substr(0,i+1)+b+required.substr(i+1,length) ;
	      required2 =required1+required.substr(0,i+1)+required.substr(i+1,length)+b ;
	    
		cout<<min(required1,required2)<<endl ;
		break ;
	}
}

}
else
{
for(int i=0 ;i<length-1;i++)
{
	int z =required[i] ;
	int v = required[i+1] ;
	int u =  b[0] ;
	if(u>=z&&u<v)
	{
		string required1 ="" ;
		required1 =required1+required.substr(0,i+1)+b+required.substr(i+1,length) ;
		cout<<required1<<endl ;
		break ;
	}
	
}

}

}
	
}

