
#include <stdio.h>

//Function for all inputs and calculations and array display
int arrayLoops(int array[3][3]) {
    int i,j; //Used for "for loops"
    //Takes inputs and stores them in the array
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    //Prints Array
    printf("Array of integers in 3 rows and 3 columns:\n");
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", array[i][j]); //Add a space after %d (Outside Help)
        }
        printf("\n");
    }
     //Calculates and prints the sum of each row
    for (i = 0; i < 3; i++) {
        int rowsum = 0;
        for (j = 0; j < 3; j++) {
            rowsum += array[i][j];
        }
    printf("Sum of row %d: %d\n", i + 1, rowsum);
    }
    return 0;
}

//Main Function
int main() {
    int array[3][3]; //2D Array
    printf("Enter 9 integers consecutive to represent 3 rows of 3 digits:\n");
    arrayLoops(array);
    return 0;
}