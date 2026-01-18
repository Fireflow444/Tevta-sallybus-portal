#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
clrscr();
int a=2;
cout<<"\n\n\n\t\t\t---Table machine---";
delay(1000);
for(int v=1;v<=10;v++){
cout<<"\n\t\t"<<a<<" x "<<v<<"="<<a*v;
}
getch();
clrscr();
cout<<"\n\n\t\t\t";
delay(250);
cout<<"N";
delay(250);
cout<<"e";
delay(250);
cout<<"x";
delay(250);
cout<<"t";
delay(250);
cout<<" ";
delay(250);
cout<<"S";
delay(250);
cout<<"o";
delay(250);
cout<<"f";
delay(250);
cout<<"t";
delay(250);
cout<<"w";
delay(250);
cout<<"a";
delay(250);
cout<<"r";
delay(250);
cout<<"e";
delay(500);
cout<<".";
delay(250);
cout<<".";
delay(250);
cout<<".";
delay(500);

clrscr();
int n,p=1;       //find prime num
cout<<"\n\n\t\t\t---Prime num machine---";
cout<<"\n\n\t\tEnter interger num:";
cin>>n;
if(n<=1){
p=0;
}
else{
for(int i=2;i<n;i++)
{//str loop
if(n%i==0){
p=0;
break;
}

}//loop closing

}//else closing
cout<<"\n\n\t\t\t";
if(p==1){
cout<<n<<"is a prime number.";
}
else{
cout<<n<<"is not a prime number.";
}
getch();
clrscr();
delay(1000);
cout<<"\n\n\t\t\tNext porgram test...";
delay(500);
clrscr();
delay(500);
cout<<"\n\n\t\t\t---While prime number str---";
cout<<"\n\tEnter";

getch();
}