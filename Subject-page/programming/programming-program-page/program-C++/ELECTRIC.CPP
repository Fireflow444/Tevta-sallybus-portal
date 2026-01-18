#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int u;
long id,ddt;
char name[20];
cout<<"\n\n\t\t\t\t----GEPCO---";
cout<<"\n\n\t\t\t Enter your name:";
cin>>name;
cout<<"\n\t\t\tEnter your Account id:";
cin>>id;
//cout<<"\n\t\t\tEnter you due-date :";
//cin>>ddt;
cout<<"\n\t\t\tEnter your month Electric Unit:";
cin>>u;

if(u>=300){
u+=10;
}
else if(u<=200){
u+=5;
}
else if(u<=150){
u+=3;
}

cout<<u;

getch();
}