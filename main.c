/* This program is a simple "printing" calculator - it performs actions keyed in from the terminal on an "accumulator" stored in the program. */

#include <stdio.h>
#include <stdbool.h>

int main(void) {

  // Initialize accumulator
  double accumulator = 0;  

  // Begin caluclations
  printf ("Begin Calculations\n");
  bool endProgram = false;
  while (!endProgram) {
    
    // Get expression from the terminal
    double number;
    char op;
    printf ("Enter expression: ");
    scanf ("%lf %c", &number, &op);
  
    // Process expression
    switch (op) {
      case '+':
        accumulator += number;
        printf ("= %lf\n", accumulator);
        break;
      case '-':
        accumulator -= number;
        printf ("= %lf\n", accumulator);
        break;
      case '*':
        accumulator *= number;
        printf ("= %lf\n", accumulator);
        break;
      case '/':
        if (number == 0) {
          printf ("Error: Division by zero!");
        }
        else {
          accumulator /= number;  
          printf ("= %lf\n", accumulator);
        }
        break;
      case 'S':
        accumulator = number;
        printf ("= %lf\n", accumulator);
        break;
      case 'E':
        endProgram = true;
        printf ("= %lf\n", accumulator);
        break;
      default:
        printf ("Invalid operator\n");
        break;
    }
  }

  printf ("End of calculations.\n");
  
  return 0;
}