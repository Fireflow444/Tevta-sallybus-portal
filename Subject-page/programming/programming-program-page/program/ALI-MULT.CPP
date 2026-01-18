#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int marks;
char ok[18];
cout<<"\n\tMarks is outoff /100"<<"\n\n\tEnter your marks:";
cin>>marks;
clrscr();
cout<<"\n\n\t";
if(marks>=40){
  cout<<"you are pass";
}
else{
cout<<"You can not pass beacause you can failed\n";
}
cout<<"\n\tNext program is starting....";
cin>>ok;
//next program
clrscr();
int a1,b2;
cout<<"\n\tEnter any two and \ni can find you howes greater value:";
cin>>ok;
clrscr();
cout<<"\n\n\tEnter first value:" ;
cin>>a1;
cout<<"\n\n\tEnter your second value:";
cin>>b2;
clrscr();
cout<<"\n\n\t";
if(a1>b2){
cout<<"'A' value is maximum value:"<<a1;
}
else{
cout<<"'B' value is maximum value:"<<b2;
}
//



getch();
}