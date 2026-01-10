#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int arr[5],key,s;

      //getting values

for(int i=0;i<=4;i++){
cout<<"Enter your value "<<i+1<<" :";
cin>>arr[i];
}
		 // comparing

for(int j=0;j<=3;j++){
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

}

getch();
}