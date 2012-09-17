#include <stdio.h>
#include <stdlib.h>
#include "Potter.h"

/*
 *  GOOD TO KNOW :
 *  1 book = 8 EUR
 *  2 different books = 15,2 EUR
 *  3 different books = 21,6 EUR
 *  4 different books = 25,6 EUR
 *  5 different books = 30 EUR
 *
 */

int main(){

    int numberOfBooks[5];
    fillArray(numberOfBooks, 5);
    displayArray(numberOfBooks, 5);

}

void fillArray(int *array, int arrayLength){

    int i;
    for (i = 0; i < arrayLength; i++){
        printf("Number of Vol. %d : ", i+1);
        scanf("%d", &array[i]); 
    }

}

void displayArray(int *array, int arrayLength){

    int i;
    for (i = 0; i < arrayLength; i++){
        printf("Vol. %d :: %d\n", i+1, *(array+i));
    }

}

