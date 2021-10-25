/* Write a program to accept a set of integers into Two-dimensional array, print them and find the sum of the elements */

#include <stdio.h>
#include <stdlib.h>
/**
 * Created by Visual Studio Code
 * Author: Aman Upadhyay
 * Email: aman.upadhyay@s.amity.edu
 * Date: 14/02/2021
*/
#define MAX 3

void sum_of_element(int array[MAX][MAX]){
    int sum = 0;
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            sum += array[i][j];
        }
    }
}