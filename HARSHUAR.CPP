//no to demonstrate armstrong number
#include<iostream.h>
#include<conio.h>
main()
{
int no,result,rem,temp;
result=0;
clrscr();
	cout<<"enter number";
	cin>>no;

	temp=0;

	while(no>0)
	{
	rem=no%10;
	result=rem*rem*rem;
	no=no/10;
	}
	if(temp==result)
	{
	cout<<"no is armstrong"<<no;
	}
	else
	{
	cout<<"no is not armstrong"<<no;
	}

getch();
}

