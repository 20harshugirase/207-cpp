//check to given no is prime or not
#include<iostream.h>
#include<conio.h>

class Test
{
public:
	int check(int x)
	{
	   int i,p=0;


	   for(i=2;i<x;i++)
	   {
		if(x%i==0)
		{
		  p=1;
		  break;
		}
	   }
	   return p;
	}
};
void main()
{
clrscr();
	int x,p;

	cout<<"Enter a number";
	cin>>x;

	Test obj;
	p=obj.check(x);

	if(p==0)
	{
	  cout<<"number is prime:"<<x;
	}
	else
	{
	  cout<<"number is not prime:"<<x;
	}
getch();
}
