#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
back:
restr:

clrscr();
char o;


cout<<"\n\n\t\t\t- - -All Revision- - -";
delay(250);
cout<<"\n\n\t1.#Includes libraries.";
cout<<"\n\t2.Code Structure of C++ languague.";
cout<<"\n\t3.Data type.";
cout<<"\n\t4.Cout<<.";
cout<<"\n\t5.Cin>> , getch().";
cout<<"\n\t6.If else statement.";
cout<<"\n\t7.Nested if statement.";
cout<<"\n\t8.Goto statement.";
cout<<"\n\t9.Switch statement.";
cout<<"\n\t0.Loop defination.";
cout<<"\n\tq.For loop.";
cout<<"\n\tw.While loop.";
cout<<"\n\te.Do-while loop.";
cout<<"\n\tr.Exit.";
cout<<"\n\n\t Select option:";
o=getch();

delay(250);
cout<<".";
delay(250);
cout<<".";
delay(150);
clrscr();

///c++ topic switch
switch(o){
char s;
case '1':
//include libraries:
cout<<"\n\n\t\t\t\2 \2 \2 Inlcude libraries \2 \2 \2";

cout<<"\n\n\tWhat is include libarries ?";
cout<<"\n\tAns: These include statment is a header section of a program \n\tand these tell the compiler which operation is performing.\n\tThese are use to identify the type of program.";
cout<<"\n\n\t#include<iostream> : Use to perform a I/O operations.\n\t#include<conio.h> : Use to insert extra function on your code.";

cout<<"\n\n\n\n\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;

case '2':
cout<<"\n\n\t\t\t\2 \2 \2 CODE STRUCTURE OF C++ \2 \2 \2";
cout<<"\n\n\n\tWhat is c++ code structure ?";
cout<<"\n\tAns:Compiler is execute the porgram in striaght linear\n\tdownward direction .and these sequence execution\n\t is the structure of C++ languague\n\tC++ structure is distributed in the various part\n\tsuch as;namely header ,class defination, member fuctions \n\tdefinitions and main function";
cout<<"\n\n\t#include<iostream.h>\n\n\t void main() \n\t { \n\tcout<<'Hello'; \n\t getch(); \n\t}";

cout<<"\n\n\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;




case '3':
cout<<"\n\n\t\t\t\2 \2 \2DATA TYPE\2 \2 \2";



cout<<"\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;


case '4':
cout<<"\n\n\t\t\t\2 \2 \2 COUT<< \2 \2 \2";



cout<<"\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;



case '5':
cout<<"\n\n\t\t\t\2 \2 \2 CIN>> ,GETCH() \2 \2 \2";



cout<<"\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;


case '6':
cout<<"\n\n\t\t\t\2 \2 \2 IF ELSE STATMENT \2 \2 \2";



cout<<"\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;



case '7':
cout<<"\n\n\t\t\t\2 \2 \2 NESTED IF STATMENT \2 \2 \2";



cout<<"\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;



case '8':
cout<<"\n\n\t\t\t\2 \2 \2 GOTO STATMENT \2 \2 \2";


cout<<"\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;



case '9':
cout<<"\n\n\t\t\t\2 \2 \2 SWTICH STATMENT \2 \2 \2";



cout<<"\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;



case '0':
cout<<"\n\n\t\t\t\2 \2 \2 LOOP DEFINATION \2 \2 \2";



cout<<"\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;



case 'q':
cout<<"\n\n\t\t\t\2 \2 \2 FOR LOOP \2 \2 \2";



cout<<"\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;



case 'w':
cout<<"\n\n\t\t\t\2 \2 \2 WHILE LOOP \2 \2 \2";



cout<<"\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;



case 'e':
cout<<"\n\n\t\t\t\2 \2 \2 DO WHILE \2 \2 \2";



cout<<"\n\n\t\tIf we back press 'B' while press any key.";
s=getch();
if(s=='b'||s=='B'){
goto back;
}
goto sw2;


case 'r':
goto exit;

default :
cout<<"\n\n\n\t\t- - -System authority- - -";
cout<<"\n\n\t\t you press unvalid key:"<<o;
cout<<"\n\tEnter correct option:";
cout<<"\n\tGo back and press correct option";
goto restr;
}





 sw2:
getch();
exit:
}
