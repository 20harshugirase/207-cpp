//number to demonstrate palindrome number
#include<iostream.h>
#include<conio.h>
 main()
{
 int n,r,rev=0,p;
 clrscr();

 cout<<"enter the number";
 cin>>n;

 p=n;
 while(n>0)
 {
 r=n%10;
 rev=(rev*10)+r;
 n=n/10;
 }

 if(p==rev)
 {
 cout<<"no is palindrome";
 }
 else
 {
 cout<<"no is not palindrome";
 }
getch();
}
