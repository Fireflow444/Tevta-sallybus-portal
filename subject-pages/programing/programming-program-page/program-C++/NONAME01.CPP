#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
long num;
cout<<"\n***Identifying-odd or even number***";
cout<<"\n\n\tEnter any number=";
cin>>num;
clrscr();
cout<<"\n\n\t";
if(num%2==0){
cout<<num<<" is even number.";
}
else{
cout<<num<<" is odd number.";
}

getch();
}