//wap to strore roll no and marks obtained by 4 stds side by side in a array
#include <stdio.h>

int main() {
  int student_marks[4][2];
  int i, j;

  // Input roll numbers and marks for each student
  for (i = 0; i < 4; i++) {
    printf("Enter roll number and marks for student %d: ", i+1);
    scanf("%d %d", &student_marks[i][0], &student_marks[i][1]);
  }

  // Output roll numbers and marks for each student
  printf("\nRoll No.\tMarks\n");
  for (i = 0; i < 4; i++) {
    printf("%d\t\t%d\n", student_marks[i][0], student_marks[i][1]);
  }

  return 0;
}
