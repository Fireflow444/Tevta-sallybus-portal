		    //Class roll number saving machine

#include<iostream.h>
#include<conio.h>
void main(){

clrscr();
int clas[pres];
int pres;
cout<<"\n\n\t\t- - -Class present roll number saving machine- - - ";
cout<<"\n\n\t\tEnter present roll number length:";
cin>>pres;
for(int i=0;i<pres;i++){
cout<<"Enter a student roll no:";
cin>>clas[i];
}
getch();
clrscr();
cout<<"\n\n\t\t\t- - -Present students- - -";
for(int j=0; j<pres;j++){
cout<<"\n\n\t\tstudent "<<clas[j];


}



getch();
}

