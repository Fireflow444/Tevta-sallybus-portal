#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
float per;
int marks;
long rol;
char name[20];
cout<<"\n\n\t\t\t---Big project---";
cout<<"\n\n\t\t\tEnter your name:";
cin>>name;
cout<<"\n\t\t\tEnter your Roll no:";
cin>>rol;
cout<<"\n\t\t\tEnter your matric marks:";
cin>>marks;
per=(marks/1200.0)*100;
clrscr();
cout<<"\n\n\n\t\t\t";
if(per>=70.0)
{
cout<<"You are eligible for FSC.";
}
else if(per>=60.0){
cout<<"You are eligible for ICS";
}
else if(per>=45.0){
cout<<"You are eligible for FA/ICOM";
}
else{
cout<<"You are not eligible";
}
if(per>=45.0){
getch();
clrscr();
char inp;
cout<<"\n\n\t\t\t---Your confirm detial---";
cout<<"\n\n\t\t\tYour name is:"<<name;
cout<<"\n\t\t\tYour Roll no is:"<<rol;
cout<<"\n\t\t\tYour marks is:"<<marks;
cout<<"\n\n\t\t\tYou can Press any key to use multipule software\n\t\t\tif you can quit press 'Q'\n\t\t\t";
cin>>inp;
if(inp=='Q' || inp=='q'){
clrscr();
goto quit;
} //quit block
else{
clrscr();
int op;
restr:
cout<<"\n\n\t\t\t";
cout<<"---Multipule software---";
cout<<"\n\n\t\t\t1.Vowel alpabets.";
cout<<"\n\n\t\t\t2.Even/odd.";
cout<<"\n\n\t\t\t3.Average value.";
cout<<"\n\n\t\t\t4.Exit.";
  op=getch();
 if(op=='1'){
 clrscr();
 char in;
 cout<<"\n\n\t\t\t---Vowel machine---";    //vowel
 cout<<"\n\n\t\t\tEnter a single alphabet:";
 cin>>in;
 if(in=='A'|| in=='a' || in=='E' || in=='e' || in=='I' || in=='i' || in=='O' || in=='o' || in =='U' || in=='u'){
 cout<<"\n\n\t\tEnter alphabet is vowel.";
 }
else{
cout<<"\n\n\t\tEnter alphabet is not vowel";
}
getch();
clrscr();
goto restr;
 }

 else if(op=='2'){
 char num;
 cout<<"\n\n\t\t\t---Even odd---";
 cout<<"\n\n\t\t\tEnter your number:";
 cin>>num;
 if(num%2==0){
 cout<<"\n\n\t\t\tYou enter Even number.";
 }
else{
cout<<"\n\n\t\t\tYou enter odd number.";
}
getch();
clrscr();
goto restr;
 }
else if(op=='3'){
int v1,v2,v3,v4,v5;
float av;
long comb;

cout<<"\n\n\t\t\t---Averge number---";
cout<<"\n\n\t\t\tEnter any five number:";
cout<<"\n\n\t\t\tEnter 1 vlaue:";
cin>>v1;
cout<<"\n\n\t\t\tEnter 2 value:";
cin>>v2;
cout<<"\n\n\t\t\tEnter 3 value:";
cin>>v3;
cout<<"\n\n\t\t\tEnter 4 value:";
cin>>v4;
cout<<"\n\n\t\t\tEnter 5 value:";
cin>>v5;
comb=v1+v2+v3+v4+v5;
av=comb/5;
cout<<"\n\n\t\t\tYour Averge value is :"<<av;
getch();
clrscr();
goto restr;
}

else if(op=='4'){
goto quit;
}

}//final soft block



}//detial into output block
else{
getch();
clrscr();
cout<<"\n\n\t\t\tSorry you are not enter this software.";

}


getch();
quit:
}