
#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int i,j,s,a[10];
for(s=0;s<=9;s++)
{
cout<<"Enter value #"<<s+1<<":";
cin>>a[s];
}
cout<<"\n\t\ Value before sort\n ";
for(s=0;s<=9;s++)
{
cout<<a[s]<<"\t";
}

for(i=0;i<=9;i++)
{
for(j=0;j<=8;j++)
{
if(a[j]>a[j+1])
{
s=a[j];
a[j]=a[j+1];
a[j+1]=s;
}
}
}
cout<<"\n\t\t Value after Sort \n ";
for(s=0;s<=9;s++)
{
cout<<a[s]<<"\t";
}
getch();
}