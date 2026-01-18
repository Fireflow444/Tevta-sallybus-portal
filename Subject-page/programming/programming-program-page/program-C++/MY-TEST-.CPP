#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int a,b,c;
cout<<"\nEnter first number:";
cin>>a;
cout<<"\nEnter second number:";
cin>>b;
cout<<"\nEnter third number:";
cin>>c;
cout<<"\n"<<c;
cout<<"\n"<<b;
cout<<"\n"<<a;
getch();

clrscr();
cout<<"\n";
int a2,b2,c2;
cout<<"\nEnter first number:";
cin>>a2;
cout<<"\nEnter second number:";
cin>>b2;
cout<<"\nEnter third number:";
cin>>c2;
cout<<"\n\t\tMin:";
if(a2<b2){
if(a2<c2){
cout<<a2;
}
else{cout<<c2;}
}  //if close
else{
if(b2<c2){
}
else{
cout<<c2;
}

}//else close
getch();
clrscr();
int inp;
long res=1;
cout<<"\n\nEnter factorial  number:";
cin>>inp;
for(int i=1;i<inp;i++){
res*=i;
}
cout<<"\nYour factorial is :"<<res;
getch();
clrscr();
int input;
cout<<"\n\n''Prime identifire''\n\nEnter your number:";
cin>>input;

for(int b3=1;b3<input;b3++)


getch();
}