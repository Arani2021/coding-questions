#include <stdio.h>

int main() {
   char name[50];
   int roll_number, marks1, marks2, marks3, total_marks;
   float average;

   printf("Enter your name: ");
   scanf("%s", name);

   printf("Enter your roll number: ");
   scanf("%d", &roll_number);

   printf("Enter marks obtained in subject 1: ");
   scanf("%d", &marks1);

   printf("Enter marks obtained in subject 2: ");
   scanf("%d", &marks2);

   printf("Enter marks obtained in subject 3: ");
   scanf("%d", &marks3);

   total_marks = marks1 + marks2 + marks3;
   average = total_marks / 3.0;

   printf("\n\n");
   printf("Name: %s\n", name);
   printf("Roll Number: %d\n", roll_number);
   printf("Marks in Subject 1: %d\n", marks1);
   printf("Marks in Subject 2: %d\n", marks2);
   printf("Marks in Subject 3: %d\n", marks3);
   printf("Total Marks Obtained: %d\n", total_marks);
   printf("Average Marks Obtained: %.2f\n", average);

   return 0;
}
