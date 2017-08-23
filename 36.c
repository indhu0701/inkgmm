#include <stdio.h>
int main()
{
      int firstNumber, secondNumber, temporaryVariable;
      printf("Enter first number: ");
      scanf("%d", &firstNumber);
      printf("Enter second number: ");
      scanf("%d",&secondNumber);
      temporaryVariable = firstNumber;
      firstNumber = secondNumber;
      secondNumber = temporaryVariable;
      printf("\nAfter swapping, firstNumber = %d.2\n", firstNumber);
      printf("After swapping, secondNumber = %d.2", secondNumber);
      return 0;
}
