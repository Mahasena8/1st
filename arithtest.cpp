#include"arith.h"
#include<iostream>
using namespace std;
int main()
{
	float no1, no2, ans=0;
	char ch;
	cout<<"Enter + for add"<<endl<<"Enter - for sub"<<endl;
	cout<<"Enter * for multi"<<endl<<"Enter / for div"<<endl;
	cout<<"Enter 0 for exit"<<endl;
	do
	{
		cout<<endl<<"Enter Operator :";
	       cin>>ch;	
		switch(ch)
		{
			case '+' : cout<<endl<<"Enter 1st no. :";
				   cin>>no1;
				   cout<<endl<<"Enter 2nd no. :";
				   cin>>no2;
				   ans = add(no1, no2);
				   cout<<endl<<no1<<" + "<<no2<<" = "<<ans;
				   break;

			case '-' : cout<<endl<<"Enter 1st no. :";
				   cin>>no1;
				   cout<<endl<<"Enter 2nd no. :";
				   cin>>no2;
				   ans = sub(no1, no2);
				   cout<<endl<<no1<<" - "<<no2<<" = "<<ans;
				   break;
			case '*' : cout<<endl<<"Enter 1st no. :";
				   cin>>no1;
				   cout<<endl<<"Enter 2nd no. :";
				   cin>>no2;
				   ans = multi(no1, no2);
				   cout<<endl<<no1<<" * "<<no2<<" = "<<ans;
				   break;
			case '/' : cout<<endl<<"Enter 1st no. :";
				   cin>>no1;
				   cout<<endl<<"Enter 2nd no. :";
				   cin>>no2;
				   if ( no2 == 0)
					   cout<<endl<<"can not div by zero";
				   else
				   {
				   ans = div(no1, no2);
				   cout<<endl<<no1<<" + "<<no2<<" = "<<ans;
				   }
				   break;
		//	case '0' : break;
			default : cout<<endl<<"Enter valid operator.";
				  break;


		}

		

	}while(ch != '0');
	return 0;

}
