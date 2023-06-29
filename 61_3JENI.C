// Q3 write a program to print 1 to n using the do while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int j;
int e = 1;
clrscr();

printf("enter any number:");
 scanf("%d",&j);
do
{  
if(e%2==0){ 
printf("%d\n",e);

e++;

}while(j>=e);

getch();
}
