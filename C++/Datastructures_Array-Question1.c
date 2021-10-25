/* Write a program to insert elements into an integer array and display the odd numbers. */

#include <stdio.h>
#include <stdlib.h>
/**
 * Created by Visual Studio Code
 * Author: Aman Upadhyay
 * Email: aman.upadhyay@s.amity.edu
 * Date: 26/02/2021
*/
void OddNumber(int array[], int ArraySize){
    for(int i = 0; i < ArraySize; i++){
        if(array[i]%2 != 0){
            printf("%d  ", array[i]);
        }
    }
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
        printf("%d  ", Array[i]);
    }
    
    printf("\n*******************************\n");
    printf("Odd Element: ");
    OddNumber(Array, size);
    printf("\n*******************************\n");
}