#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int a1,a2,sum,prod,modul;
cout<<"\t\nEnter your 1st number:";
cin>>a1;
cout<<"Enter your 2nd number:";
cin>>a2;
sum=a1+a2;
prod=a1*a2;
modul=a1%a2;
clrscr();
cout<<"\n\n\t"<<"a+b="<<sum<<"\t a*b="<<prod<<"\ta%b="<<modul<<"\n";

getch();
}