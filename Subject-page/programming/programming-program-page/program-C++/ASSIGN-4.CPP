#include<iostream.h>
#include<conio.h>
void main()
{
char o;
restr:
clrscr();
cout<<"\n\t\t\t- - -Assignment- - - ";
cout<<"\n\n\t\t1.Draw table.";
cout<<"\n\t\t2.Factorial.";
cout<<"\n\t\t3.Prime number.";
cout<<"\n\t\t4.Draw Triangle.";
cout<<"\n\t\t5.press '5' we Exit.";
o=getch();
clrscr();
switch(o){

case '1':
//table
int tnum,strnum,ednum;
cout<<"\n\n\t\t\t- - -Table machine- - -";

cout<<"\n\n\t\tEnter your table number:";
cin>>tnum;
cout<<"\n\n\t\tEnter starting point:";
cin>>strnum;
cout<<"\n\n\t\tEnter ending point:";
cin>>ednum;
cout<<"\n\t";
clrscr();
cout<<"\n\n\t\t\t- - -"<<tnum<<" Table- - -";
for(int s=strnum;s<=ednum;s++){
cout<<"\t\t\n"<<tnum<<" x "<<s<<" = "<<tnum*s;
}
getch();
goto restr;


case '2':
//factorial
int fac=1,or;
cout<<"\n\n\n\t\t\t- - -Factorial- - -";
cout<<"\n\n\t\t\tEnter auy number:";
cin>>or;
for(int v=1;v<=or;v++){
fac=fac*v;

}
cout<<"\n\t\t"<<or<<" Factorial is: "<<fac;

getch();
clrscr();
goto restr;

case '3':
int pri;
cout<<"\n\n\t\t\t- - -\1 Prime number \1- - -";
cout<<"\n\n\t\tEnter your number:";
cin>>pri;
clrscr();
cout<<"\n\n\t\t\t- - -R e s u l t- - -";
cout<<"\n\n\t\t";
for(int g=2;g<pri;g++){

if(pri%g==0){
cout<<"This number is not prime number.";
}

}
break;

case '4':
break;

case '5':
goto exit;

default:
cout<<"\n\n\t\tWrong option select";
getch();
goto restr;
}



getch();
exit:
}