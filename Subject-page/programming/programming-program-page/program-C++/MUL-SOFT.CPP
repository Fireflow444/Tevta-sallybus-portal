#include<iostream.h>
#include<conio.h>
void main(){
restr:
clrscr();
char op;
cout<<"\n\n\t\t\tMultipult software---";
cout<<"\n\n\t\t1.Check grades.";
cout<<"\n\t\t2.Check maximum numbers.";
cout<<"\n\t\t3.Check vowels alphabets.";
cout<<"\n\t\t4.Exit.\n";
cout<<"\n\t\tSelect option:";
cin>>op;
clrscr();
switch(op)
{

case '1':
int v1,v2,result;
char oper;
cout<<"\n\n\t\t\t---Calculator---";
cout<<"\n\n\t\tEnter your 1 value:";
cin>>v1;
cout<<"\n\t\tEnter your operator:";
cin>>oper;
cout<<"\n\t\tEnter your 2nd value:";
cin>>v2;
if(oper=='+'){
result=v1+v2;
}
else if(oper=='-'){
result=v1-v2;
}
else if(oper=='*'){
result=v1*v2;
}
else if(oper=='/'){
result=v1/v2;
}
cout<<"\n\n\t\t\tResult:";
cout<<"\n\t\t\t"<<v1<<oper<<v2<<" = "<<result;

goto restr;
break;

case '2':
  //grade machine
int m; //45657 2231
float per; //3.4 ,23.2
cout<<"\n\n\t\t\t---Grade machine---";
cout<<"\n\n\t\tEnter your marks:";
cin>>m;
per=(m/1200.0)*100;//
cout<<"\n\n\t\t";
if(per<=100.0 && per>=90.0){
cout<<"A+ grade.";
}
else if(per>=80.0){
cout<<"A grade.";
}
else if(per>=70.0){
cout<<"B+ grade.";
}
else if(per>=60.0){
cout<<"B grade.";
}
else if(per>=45.0){
cout<<"C grade.";
}
else{
cout<<"you are fail.";
}

getch();
goto restr;
break;

case '3':
int a,b,c,d;
cout<<"\n\n\t\t\t---Maximum number---";
cout<<"\n\n\t\tEnter Four values:";
cout<<"\n\n\t\tEnter 1 value:";
cin>>a;
cout<<"\n\t\tEter 2 value:";
cin>>b;
cout<<"\n\t\tEter 3 value:";
cin>>c;
cout<<"\n\t\tEter 4 value:";
cin>>d;
cout<<"\n\t\t";
if(a>b || a>c || a>d){
cout<<a<<" is Max value.";
}
else if(b>c ||b>d){
cout<<b<<" is Max value.";
}
else if(c>d){
cout<<c<<" is Max value.";
}
else{
cout<<d<<" is MAx value.";
}

break;

case '4':
goto a;
break;

}

getch();
a:

}