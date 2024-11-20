/******************
Name:ilay helfgot
ID:212398648
Assignment: EXERCISE 1
*******************/
#include <stdio.h>

int main() {
  ///// what bit
    printf("\nWhat bit:\n");
  // number represents the number that the user chooses - position represents the number starts from 0 that the user chooses to represent an index
  int number,position,chosenBit = 0 ;
  printf("Please enter a number:\n ");
  scanf("%d", &number);
  printf("Please enter a position:\n ");
  scanf("%d", &position);
  // I use shift command to move the bits in number so the wanted index get checked with one by using &
  chosenBit = (number >> position) & 1;
  printf("The bit in position %d of number %d is: %d\n", position, number, chosenBit);
  /// set bit
    printf("\nSet bit:\n");
  int whenBitOn;
  int whenBitOff;
  printf("Please enter a number:\n ");
  scanf("%d", &number);
  printf("Please enter a position:\n ");
  scanf("%d", &position);
  // if the number was with 1 in this it will stay the same otherwise it will change it to 1
  whenBitOn = number | 1<<position;
  // if the number was with 0 in this it will stay the same otherwise it will change it to 0
  whenBitOff = number & ~(1<<position);
 printf("Number with bit %d set to 1: %d\n ",position,whenBitOn);
 printf("Number with bit %d set to 0: %d\n ",position,whenBitOff);
 //////
    printf("\nToggle bit:\n");
     printf("Please enter a number:\n ");
    scanf("%d", &number);
    printf("Please enter a position:\n ");
    scanf("%d", &position);
    //i shift the numer 1 position times then i do "xor" what it does is basicly change 1 to 0 in the position and 0 to 1
    number= number ^ 1<<position;
    printf("Number with bit %d toggled: %d\n ",position,number);
 ///////
    printf("\nEven - Odd:\n");
    printf("Please enter a number:\n ");
    scanf("%d", &number);
    int check = 1 ;
     int check2 = 1;
    //firstly i check if the last bit is 1 or 0 to see if its even or odd number if its even the last bit stays 0 and if its odd its 1
    //then i do this - if the number is even change  the last bit to 1 and if odd change it to o .
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
    // i defined those Variables to represent the bit compared to the index that i needed by using shift right x times
    index3 = (index3>> 3 ) & 1 ;
    index5 = (index5>> 5 ) & 1 ;
    index7 = (index7>> 7 ) & 1 ;
    index11 = (index11>> 11) & 1 ;
    printf("The 3,5,7,11 bits are: %d%d%d%d\n ",index3,index5,index7,index11);
  printf("Bye!\n");

  return 0;
}
