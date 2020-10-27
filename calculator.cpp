#include<iostream>
using namespace std ;
int main()
{
	float  i ,j,k ;
	cout<<"enter your numbers"<< endl ;
	cin>>i>>j ;
	int choice ;
	cout << "enter your choice"<<endl ;
	cout << " 1 for addition 2 for multiplication 3 for substraction 4 for division 5 for modulus"<<endl ;
	cin>>choice ;
	if(choice==1)
	k = i+j ;
	if(choice==2)
	k =i*j ;
	if(choice==3)
	k= i-j ;
	if(choice==4)
     {
     	k= i/j ;
	 }
	if(choice==5)
	{
	 int z =i ;
	 int p =j ;
	 	int t=z/p ;
	k = i - (t*j)  ;
   }

	
	cout<< k<<endl ;
}
