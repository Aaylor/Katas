#include <stdio.h>
#include <stdlib.h>
#include "Potter.h"

#define ONE_BOOK_PRICE      8.0
#define TWO_BOOKS_PRICES    15.2
#define THREE_BOOKS_PRICES  21.6
#define FOUR_BOOKS_PRICES   25.6
#define FIVE_BOOKS_PRICES   30.0

int main()
{
    run_test();
}


void run_test()
{
    int numberOfBooks[5];
    fillArray(numberOfBooks, 5);
    displayArray(numberOfBooks, 5);

    printf("Number of books : %d.\n", getNumberBooks(numberOfBooks, 5));
}


void fillArray(int *array, int arrayLength)
{
    int i;
    for (i = 0; i < arrayLength; i++)
    {
        printf("Number of Vol. %d : ", i+1);
        scanf("%d", &array[i]); 
    }
}


void displayArray(int *array, int arrayLength)
{
    int i;
    for (i = 0; i < arrayLength; i++)
    {
        printf("Vol. %d :: %d\n", i+1, *(array+i));
    }
}


int getNumberBooks(int *array, int arrayLength, int &maxBook)
{
    int number = 0;
    int i;
    
    for (i = 0; i < arrayLength; i++)
    {
        number += *(array+i);
        if ( *maxBook < *(array+i) )
            *maxBook = *(array+i);
    }

    return number;
}

int simpleAlgo(int *array, int arrayLength)
{
    
    return 1;

}

