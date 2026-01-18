#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
clrscr();
char o;
cout<<"\n\n\t\t\t- - -Triangle loop- - -";
cout<<"\n\n\n\t\tPress any key";
o=getch();
delay(500);
cout<<".";
delay(500);
cout<<".";
delay(500);
cout<<".";
delay(250);

clrscr();
 cout<<"\n\n\t\t\t- - -Left triangle- - -";
cout<<"\n\n\tPress enter to show triagnle:\n\n";
getch();
delay(250);

//row loop
for(int i1=1;i1<=10;i1++){
cout<<"\t\t";

//column loop
for(int j1=1;j1<=i1;j1++){
cout<<" \5";
}

cout<<"\n";
}

getch();




clrscr();
 cout<<"\n\n\t\t\t- - -Mirror triangle- - -";
cout<<"\n\n\tPress enter to show triagnle:\n\n";
getch();
delay(250);

//row loop
for(int i2=1;i2<=10;i2++){
cout<<"\t\t";

//column loop
for(int j2=i2;j2<=10;j2++){
cout<<" \5";
}

cout<<"\n";
}
getch();



clrscr();
 cout<<"\n\n\t\t\t- - -Right triangle- - -";
cout<<"\n\n\tPress enter to show triagnle:\n\n";
getch();
delay(250);

//row loop
for(int i3=1;i3<=10;i3++){
cout<<"\t\t";


//spaces column loop

for(int j3=i3;j3<=10;j3++){
cout<<"  ";
 }

//column loop
for(int k3=1;k3<=i3;k3++){
cout<<" \2";
}

cout<<"\n";
}

getch();


clrscr();
 cout<<"\n\n\t\t\t- - -Mirror_right triangle- - -";
cout<<"\n\n\tPress enter to show triagnle:\n\n";
getch();
delay(250);

//row loop
for(int i4=1;i4<=10;i4++){
cout<<"\t\t";

//space loop
for(int j4=1;j4<=i4;j4++){
cout<<"  ";
 }

//column loop
for(int k4=i4;k4<=10;k4++){
cout<<" \2";
}

cout<<"\n";
}


getch();





getch();
}