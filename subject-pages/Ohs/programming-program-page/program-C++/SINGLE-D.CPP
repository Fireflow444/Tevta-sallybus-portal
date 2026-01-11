#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int a[5],s=0;

for(int i=0;i<=4;i++){
cout<<"Enter your value "<<i+1<<" :";
cin>>a[i];
s+=a[i];

}

cout<<"\t\tThe sum of values ="<<s;
getch();
clrscr();
cout<<"\n\t\t\t- - -Next program- - -";
int b[5],s2=0;

for(int j=0;j<=4;j++){
cout<<"\nEnter your value "<<j+1<<" :";
cin>>b[j];
if(b[j]%2!=0){
cout<<b[j]<<"\t";
}


}


getch();
}