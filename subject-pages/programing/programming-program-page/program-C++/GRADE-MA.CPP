#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int marks;
cout<<"\n\n\tEnter your marks:";
cin>>marks;
clrscr();
cout<<"\n\n\t";
if(marks<=100 && marks>=81){cout<<"Your grade is A+";}
else if(marks>=80){cout<<"Your grade is A";}
else if(marks>=75){cout<<"Your grade is B+";}
else if(marks>=65){cout<<"Your grade is B";}
else if(marks>=1){cout<<"Your have fail";}
else if(marks>=0){cout<<"Invalid press key";}
getch();

}