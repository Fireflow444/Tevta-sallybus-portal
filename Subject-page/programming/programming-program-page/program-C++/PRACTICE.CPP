#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
clrscr();
char op;
delay(100);
cout<<"\n\n\t\t\t     - - -N A D R A- - -";
delay(100);
cout<<"\n\n\n\t\t\t1.Enter your data.";
cout<<"\n\t\t\t2.Show your data. (Current you enter)";
cout<<"\n\t\t\t3.Exit.";
cout<<"\n\n\n\t\t\tSelecting option:";
op=getch();
switch(op){

case '1':
clrscr();
char name[20];
cout<<"\n\n\t\t\t    - - -Entering data- - -";
cout<<"\n\n\t\t\tEnter your name:";
cin>>name;


case '2':
break;

case '3':
goto exit;
}
getch();

exit:
}

