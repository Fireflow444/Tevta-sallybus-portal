#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
restr:
clrscr();

char opt;
cout<<"\n\n\t\t\t- - -Multi test software- - -";
cout<<"\n\n\t\t1.Triangle.";
cout<<"\n\t\t2.Data saving.";
cout<<"\n\t\t3.Data searching.";
cout<<"\n\t\t4.Data sort.";
cout<<"\n\t\t5.Exit.";
cout<<"\n\n\t\tSelect option:";
opt=getch();

	//compulsare
delay(250);
cout<<".";
delay(250);
cout<<".";
delay(250);
cout<<".";
delay(250);
	  //not write danger
clrscr();
switch(opt){

case '1':
    //triangle program
retr:
clrscr();
char tp;
cout<<"\n\n\t\t\t- - -Triangles- - -";
cout<<"\n\n\t\t1.Right triangle.";
cout<<"\n\t\t2.Left triangle.";
cout<<"\n\t\t3.Back.";
cout<<"\n\n\t\tSelect option:";
tp=getch();

clrscr();
switch(tp){

		     //case 1

case '1':
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
goto retr;




	       //case 2
case '2':

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
goto retr;

		//case 3
case '3':

goto restr;

}


getch();
goto restr;


	  ////case 2
case '2':
	  //display array
clrscr();
int arr1[5],key1,s1;

      //getting values
cout<<"\n\n\t\t\t- - -Data searching- - -\n\n";

    //getting
for(int i1=0;i1<=4;i1++){
cout<<"\nEnter your value "<<i1+1<<" :";
cin>>arr1[i1];
}
		  //message
     cout<<"\n\t\tpress any key..\n\n";
     getch();

  //display
for(int j1=0;j1<=4;j1++){
cout<<"\n\tValue #"<<j1+1<<" = "<<arr1[j1];
}
getch();
goto restr;

		 // comparing


/*for(int j=0;j<=3;j++){
 key=j;
for(int k=j+1;k<=4;k++){

if(arr[key]>arr[k]){
s=arr[key];
arr[key]=arr[k];
arr[k]=s;
}//condition
}//inner loop

}//loop
		//telling msg out showing
cout<<"\n\n\tValue after arranged\n";
for(int v=0;v<=4;v++){
cout<<" Value #"<<v+1<<" ="<<arr[v]<<"\n";

}*/


    ////case 3
case '3':

//data searching
clrscr();
int arr2[5];
int sop;
      //getting values
cout<<"\n\n\t\t\t- - -Data searching- - -\n\n";
for(int i2=0;i2<=4;i2++){
cout<<"\nEnter your value "<<i2+1<<" :";
cin>>arr2[i2];
}
cout<<"\n\n\t\tEnter which sort we use in your device \n\t\tlimit (0-4)sorts";
cout<<"\n\tChouse index:";
cin>>sop;
delay(250);
cout<<"\n\n\n\t\tYour data is placed on\n\t\t index #"<<sop<<" is="<<arr2[sop];
getch();
goto restr;






case '4':
int arr3[5],key3,s3;

      //getting values
cout<<"\n\n\t\t\t- - -Data searching- - -\n\n";

    //getting
for(int i3=0;i3<=4;i3++){
cout<<"\nEnter your value "<<i3+1<<" :";
cin>>arr3[i3];
}
		  //message
     cout<<"\n\t\tpress any key..\n\n";
     getch();
for(int j3=0;j3<=3;j3++){
 key3=j3;
for(int k3=j3+1;k3<=4;k3++){

if(arr3[key3]>arr3[k3]){
s3=arr3[key3];
arr3[key3]=arr3[k3];
arr3[k3]=s3;
}//condition
}//inner loop

}//loop
		//telling msg out showing
cout<<"\n\n\tValue after arranged\n";
for(int v3=0;v3<=4;v3++){
cout<<" Value #"<<v3+1<<" ="<<arr3[v3]<<"\n";

}
getch();
goto restr;


case '5':
goto exit;

}



getch();
exit:
delay(250);
cout<<"\n\n\n\n\t\t\t.";
delay(250);
cout<<" . ";
delay(250);
cout<<" . ";
delay(250);
cout<<"E";
delay(100);
cout<<"X";
delay(250);
cout<<"I";
delay(250);
cout<<"T";
delay(250);
cout<<" . ";
delay(250);
cout<<" . ";

delay(500);
}