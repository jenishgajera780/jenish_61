//

#include<stdio.h>
#include<conio.h>

void main(){

int j;
int e = 1;
clrscr();

printf("enter any number");
scanf("%d",&j);
printf("odd number between %d and 1 are \n",j);
while(j>=e){

 printf("%d",j);
 j--;
 j%2 !=0;
}
 getch();
 }