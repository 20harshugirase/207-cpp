//Program to demonstrate structure

#include<iostream.h>
#include<conio.h>

class student
{
	private:

	char name[10];
	int rollno;

	void display()
	{
		cout<<"Invite class";
	}
};
void main()
{
	student s;
	s.display();

	cout<<"Enter Name"<<endl;
	cin>>s.name;

	cout<<"Enter Rollno"<<endl;
	cin>>s.rollno;

	cout<<"Student Name is:-"<<s.name<<endl;
	cout<<"Student Rollno is"<<s.rollno<<endl;
getch();
}