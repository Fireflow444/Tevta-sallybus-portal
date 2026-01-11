#include<iostream.h>
#include<conio.h>
void main(){
clrscr();

int n1,n2;
char opt;
cout<<"\n\n\n\t\t\t- - -Calculator- - -\n";
//getting number 1 value


cout<<"\n\n\t\tEnter  your vlaue:";
cin>>n1;

//getting number 2 value
cout<<"\n\t\tEnter 2nd vlaue:";
cin>>n2;

//getting operator
cout<<"aEnter which operation you perform";
cin>>opt;


switch(opt){

case '+':
cout<<"case 1";
break;

case '2':
cout<<"case 2";
break;

case '3':
cout<<"Exit";
goto exit;
break;

default:
cout<<"\n\t\t\tprograming authority...";

}


getch();
exit:
}