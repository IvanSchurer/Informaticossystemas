#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include "stdlib.h"
#include "functions.h"
// DECLARING FUNCTIONS

int main ()
{
    // DEFINING VARIABLEs
    int option,h,k, x = 0, y = 0;
    long yl, xl;
    double n,z = 0,first,second,third,fourth;
    
    setvbuf(stdout, NULL, _IONBF, 0);   	// include if debugging does not display
    // the printf text on the screen.
    printf ("PRACTICAL ASSIGNMENT 2\n");
    printf ("==========\n");
    option = menu();  // call to the "menu" function

    while (option != 9) // repetitive statement
    {
        switch (option) // conditional statement
        {
            case 1:
                printf("Activity 1:\n"); // Call to the function "printf"
            // ask for the data read from the keyboard
            printf("Enter a number: ");
            scanf("%d", &y);
            printf("Positions to shift to the right: ");
            scanf("%d",&h);
            // Call to the function "shift"
            x = shift1(y, z);
            // Display the result
            printf("The number shifted is: %d\n\n", x);
            break;

            case 2:
                printf("Activity 2: even or odd\n");
            // Ask for the number
            printf( "Enter a number: ");
            scanf("%d",&y);
            // Call to the function "evenOdd"
            x = evenOdd(y);
            // Print the result
            if (x != 0)
            printf("The number %d is odd\n\n", y);
            else
            printf("The number %d is even\n\n", y);
            break;

            case 3:
                printf("Activity 3: logic operations in bits\n");
            // Call to the function " logicOperationsBits"
            logicOperationsBits();
            break;

            case 4:
                printf("Activity 4: set a bit to 0\n");
                // Call to the function "setABitto0
                printf("Enter a number: ");
                scanf("%d",&h);
                printf("Which bit to change: ");
                scanf("%d",&k);
                x = setToZeroBit(n, z);
                printf("The new number is: %d", x);
                break;

            case 5:
                printf("Activity 5: factorial\n");
            do
            {
                printf("Enter a number integer positive: ");
                scanf("%ld", &yl);
            }
            while (yl < 0);
            // Call to the function "factorial"
            xl = factorial(yl);
            // Display the result
            if (yl >16)
                printf("It is not possible computes the factorial\n");
            else
                printf("El factorial de %ld is: %ld\n\n", yl, xl);
            break;

            case 6:
                printf("Activity 6: number of bits\n");
            do
            {
                printf("Enter a number integer positive: ");
                scanf("%ld", &yl);
            }
            while (yl < 0);
            // Call to the function "factorial"
            xl = numberOFBits(yl);
            // Display the result
            printf("The number of bits needed for %ld is: %ld\n\n", yl, xl);
            break;

            case 7:
                printf("Activity 7: swap\n");
                // Call to the function "swap"
                printf("Enter a number a: ");
                scanf("%lf",&n);
                printf("Enter a number b: ");
                scanf("%lf",&z);
                swap(&n, &z);
                printf("The numbers are now: \n a:%f \n b:%f", n,z);
                break;

            case 8:
                printf("Activity 8: mean\n");
                // Call to the function "mean"
                printf("Number: ");
                scanf("%lf",&first);
                printf("Number: ");
                scanf("%lf",&second);
                printf("Number: ");
                scanf("%lf",&third);
                printf("Number: ");
                scanf("%lf",&fourth);
                n = arithmeticMean(first, second, third, fourth);
                printf("Mean: %f",n);
                break;

            default:
                printf ("ERROR: wrong option.\n");
                break;
        }
        option = menu (); // Call to the function "menu"
    }
}

