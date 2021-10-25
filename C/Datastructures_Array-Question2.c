/* Write a program to Insert a new element and remove element from an existing integer array. */

#include <stdio.h>
#include <stdlib.h>
/**
 * Created by Visual Studio Code
 * Author: Aman Upadhyay
 * Email: aman.upadhyay@s.amity.edu
 * Date: 03/03/2021
*/
void addNumber(int array[], int ArraySize){
    int position, insertNum;

    printf("Enter position of element: ");
    scanf("%d", &position);
    printf("*******************************\n");
    printf("Enter value to insert: ");
    scanf("%d", &insertNum);
    printf("*******************************\n");

    ArraySize++;
    for(int i = ArraySize-1; i >= position; i--){
        array[i] = array[i-1];
    }
    array[position-1] = insertNum;

    for(int i = 0; i < ArraySize; i++){
        printf("%d ", array[i]);
    }
    printf("\n*******************************\n");
}

void removeNumber(int array[], int ArraySize){
    int pos;

    printf("Enter position of element: ");
    scanf("%d", &pos);
    printf("*******************************\n");

    for(int i = pos-1; i < ArraySize-1; i++){
        array[i] = array[i+1];
    } ArraySize--;

    for(int i = 0; i < ArraySize; i++){
        printf("%d ", array[i]);
    }
    printf("\n*******************************\n");
}

int main(){
    system("cls");

    int Array[10], size;

    printf("*******************************\n");
    printf("Enter the Size of an Array: ");
    scanf("%d", &size);
    printf("*******************************\n");

    printf("Element of an Array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &Array[i]); 
    }

    printf("*******************************\n");
    for(int i = 0; i < size; i++){
        printf("%d ", Array[i]);
    }
    printf("\n*******************************\n");
    addNumber(Array, size);
    printf("\n*******************************\n");
    removeNumber(Array, size);
}