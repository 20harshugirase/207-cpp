#include<iostream.h>
#include<conio.h>
class demo
{
 int x,y,z;
 public:
     void get();
     void show();
     void operator-();
     void operator+();
 };
 void demo::get()
 {
 cout<<"\nenter the no";
 cin>>x>>y>>z;
 }
 void demo::show()
 {
 cout<<"x="<<x<<"\ty="<<y<<"\tz="<<z;
 }
 void demo::operator-()
 {
  x=-x;
  y=-y;
  z=-z;
 }
 void demo::operator+()
 {
 x=+x;
 y=+y;
 z=+z;
 }
 void main()
 {
 clrscr();
 demo d;
 d.get();
 cout<<"\nbefore function call\n";
 d.show();
 -d;
 cout<<"\nafter function call on-operator\n";
 d.show();
 +d;
 d.get();
 cout<<"\n after function call on+operator\n";
 d.show();
 getch();
 }