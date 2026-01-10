#include<iostream.h>
#include<conio.h>

void main(){
clrscr();

long int n,a,b,c,d,e;
cout<<"\n\tEnter the value on n:";
cin>>n;
clrscr();
cout<<"\n\n\tbefore swap:"<<n;
a=n/100000;
n=n%100000;

b=n/10000;
n=n%10000;

c=n/1000;
n=n%1000;

d=n/100;
n=n%100;

e=n/10;
n=n%10;

cout<<"\t after swap:"<<n<<e<<d<<c<<b<<a;

getch();
}