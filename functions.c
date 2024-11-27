#include <stdio.h>
#include "stdlib.h"
#include "functions.h"

long menu() // "menu" definition
{
    int op;
    do // repetitive statement
    {

        printf ("\n"
                "\t01.- Activity 1\n"
                "\t02.- Activity 2\n"
                "\t03.- Activity 3\n"
                "\t04.- Activity 4\n"
                "\t05.- Activity 5\n"
                "\t06.- Activity 6\n"
                "\t07.- Activity 7\n"
                "\t08.- Activity 8\n"
                "\t09.- Exit\n"
                "\n"
                "Choose an option: ");

        scanf ("%d", &op); // Call to the function "scanf"
        if (op < 1 || op > 9) // conditional statement
        {
            printf("Option no valid\n");

        }
    }
    while (op < 1 || op > 9); // condition
    return op;
    }


void swap(double *p, double *q) {
    double temp = 0;
    temp = *p; // temporial variable to store p
    *p = *q;
    *q = temp;
}

int shift1(int n, int nPos) {
    int nShifted;
    nShifted = n >> nPos; //change nPos n places
    return nShifted;
}

int evenOdd(int n) {
    int result;
    result = n % 2; //returns a 0 if even and a 1 if not
    return result;
}

void logicOperationsBits() {
    int a = 8, b = 0, c = 15, d = 93, e, r1, r2, r3, r4, r5, r6;
    r1 = a && b || c && !d; //false
    r2 = !a || b && c || d; //true
    r3 = a < b || !c > d; //false
    r4 = a + b > d - c; //false
    r5 = a && b && !c || !(a && b) && c; //true
    a = 0x12;
    b = 0x56;
    c = 0x9a;
    d = 0x0f;
    e = 0360;
    r1 = a & b | c; //10011010
    r2 = c & 0177; //10010000
    r3 = ~a | b ^ c; //01100101
    r4 = e & c; // 000001000
    r5 = r4 & ~077; // 00001000
    r6 = (a & d) << 4 | (a & e) >> 4; //0000001
    r1 = r1 + r2 + r3 + r4 + r5 + r6;
}

int setToZeroBit(int n, int nPosBit) {
    int result, mask;
    mask = ~(1 << nPosBit); // creates a mask to help evaluate n with
    result = n & mask;
    return result;
}

long factorial(long n) {
    long i = 0, factorial = 1;
    if (n < 0 || n > 16) return -1; // only want n between 0 and 16 otherwise it gets too big
    while (i < n) {
        factorial *= (n - i); // calculate factorial
        i++;
    }
    return factorial;
}

int numberOFBits(int n) {
    int twoPowerN = 2, nbits = 1; // 2^1 = 2
    while (twoPowerN <= n) { // keeps checking whether the number is bigger then the next bit. When its not the case anymore it returns the bits
        twoPowerN *= 2;
        nbits++;
    }
    return nbits;
}

double arithmeticMean(double var1, double var2, double var3, double var4) {
    double result = (var1 + var2 + var3 + var4) / 4; // calculate mean
    return result;
}
