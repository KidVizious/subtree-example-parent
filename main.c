//==============================================================================
// Copyright © 2017 Big Ass Solutions
//==============================================================================
#include <stdint.h>
#include <stdio.h>
#include "math.h"


int main(int argc, char** argv)
{
    int firstNumber = 10;
    int secondNumber = 5;

    printf("First number minus second number equals %d\n",
            Math_Subtract(firstNumber, secondNumber));
}