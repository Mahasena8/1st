#include<iostream>
using namespace std;
int main()
{
	int no1, no2,ans = 0;
	char ch;
	cout<<endl<<"For add enter +"<<endl<<"For sub enter -";
	cout<<endl<<"for multi. enter *"<<endl<<"For div. enter /";
	cout<<endl<<"for exit enter 0";
	while( ch != '0')
	{	
	//char ch;
	cout<<endl<<"Enter Operator : ";
	cin>>ch;
	switch(ch)
	{
		case '+' : cout<<"Enter 1st No. : ";
			   cin>>no1;
			   cout<<"Enter 2nd No. : ";
			   cin>>no2;
			   ans = no1 + no2;
			   cout<<no1<<" + "<<no2<<" = "<<ans;
			   break;
		
		case '-' : cout<<"Enter 1st No. : ";
			   cin>>no1;
			   cout<<"Enter 2nd No. : ";
			   cin>>no2;
			   ans = no1 - no2;
			   cout<<no1<<" - "<<no2<<" = "<<ans;
			   break;
		case '*' : cout<<"Enter 1st No. : ";
			   cin>>no1;
			   cout<<"Enter 2nd No. : ";
			   cin>>no2;
			   ans = no1 * no2;
			   cout<<no1<<" * "<<no2<<" = "<<ans;
			   break;
		case '/' : cout<<"Enter 1st No. : ";
			   cin>>no1;
			   cout<<"Enter 2nd No. : ";
			   cin>>no2;
			   if(no2 == 0)
				   cout<<endl<<"Can not div by zero";
			   else
			   {
			 	 ans = no1/no2;
			  	cout<<no1<<" / "<<no2<<" = "<<ans;
			   }
			   break;
		case '0' : break;

		default : cout<<endl<<"Ente valid operator"<<endl;
			  break;
	}
	}	
	return 0;
}
