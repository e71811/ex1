/******************
Name:ilay helfgot
ID:212398648
Assignment: EXERCISE 1
*******************/
#include <stdio.h>

int main() {
  /////
    printf("\nWhat Bit:\n");
  int number,position,chosenBit = 0 ;
  printf("Please enter a number:\n ");
  scanf("%d", &number);
  printf("Please enter a position:\n ");
  scanf("%d", &position);
  chosenBit = (number >> position) & 1;
  printf("The bit in position %d of number %d is %d\n", position, number, chosenBit);
  /////
    printf("\nSet Bit:\n");
  int whenBitOn;
  int whenBitOff;
  printf("Please enter a number:\n ");
  scanf("%d", &number);
  printf("Please enter a position:\n ");
  scanf("%d", &position);
  whenBitOn = number | 1<<position;
  whenBitOff = number & ~(1<<position);
 printf("Number with bit %d set to 1: %d\n ",number,whenBitOn);
 printf("Number with bit %d set to 0: %d\n ",number,whenBitOff);
 //////
    printf("\nToggle bit:\n");
     printf("Please enter a number:\n ");
    scanf("%d", &number);
    printf("Please enter a position:\n ");
    scanf("%d", &position);
    number= number ^ 1<<position;
    printf("Number with bit %d toggled: %d\n ",position,number);
 ///////
    printf("\nEven - Odd:\n");
    printf("Please enter a number:\n ");
    scanf("%d", &number);
    int check = 1 ;
     int check2 = 1;
    check=(number & check)^check2 ;
    printf("%d",check);
//////
    printf("\n3, 5, 7, 11:\n");
    int octaly1 ,octaly2 ;
    int sum ;
    printf("Please enter the first number (octal):\n ");
    scanf("%o", &octaly1);
    printf("Please enter the second number (octal):\n ");
    scanf("%o", &octaly2);
    sum = octaly1 + octaly2 ;
    printf("The sum in hexadecimal: %X\n ",sum);
    int index3 = sum ;
    int index5 = sum ;
    int index7 = sum ;
    int index11 = sum ;
    index3 = (index3>> 3 ) & 1 ;
    index5 = (index5>> 5 ) & 1 ;
    index7 = (index7>> 7 ) & 1 ;
    index11 = (index11>> 11) & 1 ;
    printf("The 3,5,7,11 bits are:%d%d%d%d\n ",index3,index5,index7,index11);
  printf("Bye!\n");

  return 0;
}