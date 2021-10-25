/* Write a program to accept a set of integers into a two-dimensional array, print them and find the maximum and minimum of the elements with their positions */

#include <stdio.h>
#include <stdlib.h>
/**
 * Created by Visual Studio Code
 * Author: Aman Upadhyay
 * Email: aman.upadhyay@s.amity.edu
 * Date: 07/03/2021
*/
#define MAX 3

void min_max_elements(int array[MAX][MAX]){
    int min = array[0][0], minCol, minRow, max = array[0][0], maxCol, maxRow;
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            if(min > array[i][j]){
                min = array[i][j];
                minRow = i+1;
                minCol = j+1;
            }
            if(max < array[i][j]){
                max = array[i][j];
                maxRow = i+1;
                maxCol = j+1;
            }
        }
    }
    printf("Smallest element: %d Position: %d,%d \n", min, minCol, minRow);
    printf("Largest  element: %d Position: %d,%d \n", max, maxCol, maxRow);
    printf("------------------------------------\n");
}

void displayArray(int array[MAX][MAX]){
    printf("Elements in Array: \n");
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            printf("%d ", array[i][j]);
        }
    }
    printf("\n------------------------------------\n");
}

int main(){
    system("cls");
    int TwoDArray[MAX][MAX];
    
    printf("------------------------------------\n");
    printf("Enter elements into array: \n");
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            scanf("%d", &TwoDArray[i][j]);
        }
    }
    printf("------------------------------------\n");

    displayArray(TwoDArray);
    min_max_elements(TwoDArray);
}