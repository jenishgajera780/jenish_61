// Q3 write a program to print 1 to n using the do while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int j;
int e = 1;

clrscr();
 printf("enter any number");
scanf ("%d",j);
do{ printf("%d\n",e);
e++;
}while(e<=j);
getch();
}
