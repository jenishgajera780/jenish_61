// Q1 write a program to print 1 to n using a ehile loop.

#include<stdio.h>
#include<conio.h>

void main(){
int j;
int e = 1;
clrscr();
printf("enter any number");
scanf("%d",&j);

while(e<=j){

printf("%d\n",e);
e++;}
getch();
}