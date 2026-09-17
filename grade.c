#include <stdio.h>

int main() {

    // INPUT: Declare a variable and ask the user to enter their score.
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);


    // PROCESS: Check the score and determine its letter grade.
      if (score >= 90) {
        printf("Grade: A\n");
    }
        else if (score >= 80) {
          printf("Grade: B\n");
    }
        else if (score >= 70) {
          printf("Grade: C\n");
    }
        else if (score >= 60) {
          printf("Grade: D\n");
    }
        else {
          printf("Grade: F\n");
    }
    // OUTPUT: Display the letter grade equivalent of the score.

      return 0;
}
