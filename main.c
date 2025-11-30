#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRunning = true;
    while(isRunning){    
        printf("Hello, what operation would you like to perform?\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");

        int choice;
        scanf("%d", &choice);
        double num1, num2, result;

        switch(choice){
            case 1:
            printf("Enter two numbers to add: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            break;

            case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            break;

            case 3:
            printf("Enter two numbers to multiply: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            break;
              
            case 4:
            printf("Enter two numbers to divide: ");
            scanf("%lf %lf", &num1, &num2);
            while(num2 == 0){
                printf("Error: Division by zero is not allowed. Please enter a non-zero divisor: ");
                scanf("%lf", &num2);
            } 
            result = num1 / num2;
            break;

            default:
                printf("Invalid choice. Please select a valid operation.\n");
            }
            
            printf("Result: %.2f\n", result);
            printf("Would you like to perform another operation? (1 for yes, 0 for no): ");
            int continueChoice;
            scanf("%d", &continueChoice);
            while (continueChoice != 0 && continueChoice != 1) {
                printf("Invalid choice. Please choose 1 for yes or 0 for no:");
                scanf("%d", &continueChoice);
            }
            if(continueChoice == 0) isRunning = false; 
    }
    
    return 0;
            
        }
