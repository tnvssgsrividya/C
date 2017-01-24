//program to find square of a number 

#include<stdio.h>
main()              //main() is a function
{
   int num,square;   //variable declaration
     
      printf("Enter a number for which square is to be calculated : ");
      scanf("%d",&num);                                                          //& is the address operator
      
      square=num*num;
      
      printf("\nThe square for %d is %d ",num,square);                           //  \n is used to print in the  next line
}      





output:

Enter a  number for which square is to be calculated : 15
The suare for 15 is 225
