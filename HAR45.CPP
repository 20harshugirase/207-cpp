//friend function
#include<iostream.h>
#include<conio.h>

class demo
{
	private:
		int a;
	public:
		void get();
		friend void show(demo s);
};

void demo::get()
{
	cout<<"enter value of A";
	cin>>a;
}

void show(demo s)
{
	cout<<"value of A is"<<s.a;
}
void main()
{
	clrscr();
	demo d;
	d.get();
	show(d);

	getch();
}


