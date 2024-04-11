#include <stdio.h>

int main() {
  char name[50];
  int rollNo;
  float marks[5];
  float totalMarks = 500;
  float percentage;
  char grade;
printf("\n");
  printf(" USER GUIDE: \n ------------------------ \n subject 1 > bengali \n subject 2 > english \n subject 3 > math \n subject 4 > geo \n subject 5 > hist \n");
  printf("--------------------------------------------------------\n");
  printf("                                                                           \n");
  printf("                                                                           \n");

  printf("Enter Student Name: ");
  scanf("%s", &name);
  printf("Enter Roll Number: ");
  scanf("%d", &rollNo);
  printf("Enter Marks in 5 Subjects: \n");
  for(int i=0; i<5; i++) {
    printf("Subject %d: ", i+1);
    scanf("%f", &marks[i]);
  }


  float obtainedMarks = 0;
  for(int i=0; i<5; i++) {
    obtainedMarks += marks[i];
  }
  percentage = obtainedMarks / totalMarks * 100;

  
  if(percentage >= 90) {
    grade = 'A';
  } else if(percentage >= 80) {
    grade = 'B';
  } else if(percentage >= 70) {
    grade = 'C';
  } else if(percentage >= 60) {
    grade = 'D';
  } else if(percentage >= 50) {
    grade = 'E';
  } else {
    grade = 'F';
  }

  // Printing marksheet
  
  printf("\n");  
  printf("--------------------------------------------------------\n");
  printf("          WEST BENGAL COUNCIL OF HS EDUCATION           \n");
  printf("--------------------------------------------------------\n");
  printf("Name: %s\n", name);
  printf("Roll No.: %d\n", rollNo);
  printf("--------------------------------------------------------\n");
  printf("BENGALI: %.2f\n", marks[0]);
  printf("ENGLISH: %.2f\n", marks[1]);
  printf("MATH: %.2f\n", marks[2]);
  printf("GEO: %.2f\n", marks[3]);
  printf("HIST: %.2f\n", marks[4]);
  printf("--------------------------------------------------------\n");
  printf("Total Marks: %.2f\n", totalMarks);
  printf("--------------------------------------------------------\n");
  printf("Obtained Marks: %.2f\n", obtainedMarks);
  printf("--------------------------------------------------------\n");
  printf("Percentage: %.2f%%\n", percentage);
  printf("--------------------------------------------------------\n");
  printf("Grade: %c\n", grade);
  printf("--------------------------------------------------------\n");

  return 0;
}
