//Q.4 Write a Program to print odd numbers from N to 1 using a while loop.

#include <stdio.h>
#include<conio.h>


void main() {
int f;

printf("enter any number :  ");
scanf("%d",&f);
printf("Odd numbers from 10 to 1:\n");

    while (f >= 1) {
        if (f% 2 != 0) {
            printf("%d\n", f);
        }
        f--;
    }

getch();
}
