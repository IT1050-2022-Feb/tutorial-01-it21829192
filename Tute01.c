/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int s1,s2;
  float avg;

  printf("Enter sub1 :\n");
  scanf("%d",&s1);
  printf("Enter sub2 :\n");
  scanf("%d",&s2);
  
  avg =(s1+s2)/2.00;
  
  printf("Your average is %.2f",avg);
  return 0;
}

