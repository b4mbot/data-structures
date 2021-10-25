/* Write a program to accept a set of integers into a one-dimensional array, print them and find the maximum and minimum of the elements with their positions */

#include <stdio.h>
#include <stdlib.h>
/**
 * Created by Visual Studio Code
 * Author: Aman Upadhyay
 * Email: aman.upadhyay@s.amity.edu
 * Date: 06/03/2021
*/
#define MAX 4

void max_minElements(int array[], int arraySize){
    int max = array[0], min = array[0], Minpos = 0, Maxpos = 0;

    for(int i = 0; i < MAX; i++){
        if(min > array[i]){
            min = array[i];
            Minpos = i+1;
        }
        if(max < array[i]){
            max = array[i];
            Maxpos = i+1;
        }
    }
    printf("Smallest element: %d Pos: %d\nLargest  element: %d Pos: %d\n", min, Minpos, max, Maxpos);
    printf("------------------------------------\n\n");
}

int main(){
    system("cls");
    int Array[MAX];

    printf("------------------------------------\n");
    printf("     FIND MAX AND MIN ELEMENTS      \n");
    printf("------------------------------------\n");
    printf("Enter elements of Array: ");
    for(int i = 0; i < MAX; i++){
        scanf("%d", &Array[i]);
    }
    printf("------------------------------------\n");

    max_minElements(Array, MAX);
}