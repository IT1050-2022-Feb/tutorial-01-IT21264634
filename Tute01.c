/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2;
  float average;
  printf("Enter marks of 2 subjects:");
  scanf("%d%d",&m1,&m2);
  average=(m1+m2)/2.0;
  printf("Average=%.2f",average);
  return 0;
}

