//Math gam/e in C++
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void Normal();
void Medium();
void Complex();
void add(int);
void sub(int);
void mul(int);
void div(int);
void math()
{
	p:
	system("cls");
	int choice;
	cout<<"\n\t\t\t\tMath Game";
	cout<<"\n\n 1. Normal Mode";
	cout<<"\n\n 2. Medium  Mode";
	cout<<"\n\n 3. Complex  Mode";	
	cout<<"\n\n 4. Exit";
	cout<<"\n\n Enter Your choice :";
	cin>>choice;
	switch(choice)
	{
	case 1:
		Normal();
    	break;
	case 2:
		Medium();
	    break;
	case 3:
		Complex();
	    break;
    case 4:
	    exit(0);
		default:
		cout<<"\n\n Invalid value......Please Try Again.....";
		}
		getch();
	goto p;
	}
	void Normal()
		{
		p:
	system("cls");
	int choice;
	cout<<"\n\t\t\t\tNormal Mode";
	cout<<"\n\n 1. Addition";
	cout<<"\n\n 2. Subtraction";
	cout<<"\n\n 3. Multiplication";	
	cout<<"\n\n 4. Division";
	cout<<"\n\n 5. Go Back";
	cout<<"\n\n Enter Your choice";
	cin>>choice;
	switch(choice)
	{
	case 1:
		add(1);
    	break;
	case 2:
		sub(1);
	    break;
	case 3:
		mul(1);
	    break;
	case 4:
		div(1);
	    break;
	case 5:
		math();
	default:
		cout<<"\n\n Invalid value......Please Try Again";
		}
		getch();
		goto p;
		}
		void Medium()
		{
			p:
	system("cls");
	int choice;
	cout<<"\n\t\t\tMedium Mode";
	cout<<"\n\n 1. Addition";
	cout<<"\n\n 2. Subtraction";
	cout<<"\n\n 3. Multiplication";	
	cout<<"\n\n 4. Division";
	cout<<"\n\n 5. Go Back";
	cout<<"\n\n Enter Your choice";
	cin>>choice;
	switch(choice)
	{
	case 1:
		add(2);
    	break;
	case 2:
		sub(2);
	    break;
	case 3:
		mul(2);
	    break;
	case 4:
		div(2);
	    break;
	case 5:
		math();
	default:
		cout<<"\n\n Invalid value......Please Try Again";
		}
		getch();
		goto p;
		}
	void Complex()
		{
			p:
	system("cls");
	int choice;
	cout<<"\n\t\t\tComplex Mode";
	cout<<"\n\n 1. Addition";
	cout<<"\n\n 2. Subtraction";
	cout<<"\n\n 3. Multiplication";	
	cout<<"\n\n 4. Division";
	cout<<"\n\n 5. Go Back";
	cout<<"\n\n Enter Your choice";
	cin>>choice;
switch(choice)
	{
	case 1:
		add(3);
    	break;
	case 2:
		sub(3);
	    break;
	case 3:
		mul(3);
	    break;
	case 4:
		div(3);
	    break;
	case 5:
		math();
	default:
		cout<<"\n\n Invalid value......Please Try Again";
		}
		getch();
		goto p;
		}
		void add(int n)
		{
			int a,b,sum=0,ans,c=0;
			system("cls");
			if(n == 1)
			{
				for(int i=1;i<=5;i++)
				{
			 	a=rand()%11;
			 	b=rand()%11;
			 	cout<<"\n\n "<<a<<" + "<<b<<" = ";
			 	cin>>ans;
			 	sum =a+b;
			 	if(ans == sum)
			 	c++;
			  }
			  if(c >= 3)
			  cout<<"\n\n You Are Winner....";
			  else
			  cout<<"\n\n You Are Not Winner....";
			}
			else if(n == 2)
			{
				for(int i=1;i<=5;i++)
				{
			 	a=rand()%16;
			 	b=rand()%16;
			 	cout<<"\n\n "<<a<<" + "<<b<<" = ";
			 	cin>>ans;
			 	sum =a+b;
			 	if(ans == sum)
			 	c++;
			  }
			  if(c >= 3)
			  cout<<"\n\n You Are Winner....";
			  else
			  cout<<"\n\n You Are Not Winner....";
			}
			else
			{
				for(int i=1;i<=5;i++)
				{
			 	a=rand()%21;
			 	b=rand()%21;
			 	cout<<"\n\n "<<a<<" + "<<b<<" = ";
			 	cin>>ans;
			 	sum =a+b;
			 	if(ans == sum)
			 	c++;
			  }
			  if(c >= 3)
			  cout<<"\n\n You Are Winner....";
			  else
			  cout<<"\n\n You Are Not Winner....";
			}
			}
		void sub(int n)
		{
			int a,b,sub,ans,c=0;
			system("cls");
			if(n == 1)
			{
				for(int i=1;i<=5;i++)
				{
			 	a=rand()%11;
			 	b=rand()%11;
			 	cout<<"\n\n "<<a<<" - "<<b<<" = ";
			 	cin>>ans;
			 	sub =a-b;
			 	if(ans == sub)
			 	c++;
			  }
			  if(c >= 3)
			  cout<<"\n\n You Are Winner....";
			  else
			  cout<<"\n\n You Are Not Winner....";
			}
			else if(n == 2)
			{
				for(int i=1;i<=5;i++)
				{
			 	a=rand()%16;
			 	b=rand()%16;
			 	cout<<"\n\n "<<a<<" - "<<b<<" = ";
			 	cin>>ans;
			 	sub =a-b;
			 	if(ans == sub)
			 	c++;
			  }
			  if(c >= 3)
			  cout<<"\n\n You Are Winner....";
			  else
			  cout<<"\n\n You Are Not Winner....";
			}
			else
			{
				for(int i=1;i<=5;i++)
				{
			 	a=rand()%21;
			 	b=rand()%21;
			 	cout<<"\n\n "<<a<<" - "<<b<<" = ";
			 	cin>>ans;
			 	sub =a-b;
			 	if(ans == sub)
			 	c++;
			  }
			  if(c >= 3)
			  cout<<"\n\n You Are Winner....";
			  else
			  cout<<"\n\n You Are Not Winner....";
			}	
		}
		void mul(int n)
		{
			int a,b,mul,ans,c=0;
			system("cls");
			if(n == 1)
			{
				for(int i=1;i<=5;i++)
				{
			 	a=rand()%3;
			 	b=rand()%3;
			 	cout<<"\n\n "<<a<<" * "<<b<<" = ";
			 	cin>>ans;
			 	mul =a*b;
			 	if(ans == mul)
			 	c++;
			  }
			  if(c >= 3)
			  cout<<"\n\n You Are Winner....";
			  else
			  cout<<"\n\n You Are Not Winner....";
			}
			else if(n == 2)
			{
				for(int i=1;i<=5;i++)
				{
			 	a=rand()%6;
			 	b=rand()%6;
			 	cout<<"\n\n "<<a<<" * "<<b<<" = ";
			 	cin>>ans;
			 	mul =a*b;
			 	if(ans == mul)
			 	c++;
			  }
			  if(c >= 3)
			  cout<<"\n\n You Are Winner....";
			  else
			  cout<<"\n\n You Are Not Winner....";
			}
			else
			{
				for(int i=1;i<=5;i++)
				{
			 	a=rand()%9;
			 	b=rand()%9;
			 	cout<<"\n\n "<<a<<" * "<<b<<" = ";
			 	cin>>ans;
			 	mul =a*b;
			 	if(ans == mul)
			 	c++;
			  }
			  if(c >= 3)
			  cout<<"\n\n You Are Winner....";
			  else
			  cout<<"\n\n You Are Not Winner....";
			}
		}
		void div(int n)
		{
			int a,b,div,ans,c=0;
			system("cls");
			if(n == 1)
			{
				for(int i=1;i<=5;i++)
				{
			 	a=rand()%3;
			 	b=rand()%3;
			 	cout<<"\n\n "<<a<<" / "<<b<<" = ";
			 	cin>>ans;
			 	div =a/b;
			 	if(ans == div)
			 	c++;
			  }
			  if(c >= 3)
			  cout<<"\n\n You Are Winner....";
			  else
			  cout<<"\n\n You Are Not Winner....";
			}
			else if(n == 2)
			{
				for(int i=1;i<=5;i++)
				{
			 	a=rand()%6;
			 	b=rand()%6;
			 	cout<<"\n\n "<<a<<" / "<<b<<" = ";
			 	cin>>ans;
			 	div =a/b;
			 	if(ans == div)
			 	c++;
			  }
			  if(c >= 3)
			  cout<<"\n\n You Are Winner....";
			  else
			  cout<<"\n\n You Are Not Winner....";
			}
			else
			{
				for(int i=1;i<=5;i++)
				{
			 	a=rand()%9;
			 	b=rand()%9;
			 	cout<<"\n\n "<<a<<" / "<<b<<" = ";
			 	cin>>ans;
			 	div =a/b;
			 	if(ans == div)
			 	c++;
			  }
			  if(c >= 3)
			  cout<<"\n\n You Are Winner....";
			  else
			  cout<<"\n\n You Are Not Winner....";
			}
		}
main()
{
	math();
}
