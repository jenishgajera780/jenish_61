//Q.4 Write a Program to print odd numbers from N to 1 using a while loop.

#include <stdio.h>
#include<conio.h>


int main() {
int number;

printf("enter any number :  ");
scanf("%d",&num);
printf("Odd numbers from 10 to 1:\n");

    while (num >= 1) {
        if (num % 2 != 0) {
            printf("%d\n", num);
        }
        num--;
    }

getch();
}
