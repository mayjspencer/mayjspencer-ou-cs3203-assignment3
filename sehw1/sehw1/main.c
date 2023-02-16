//
//  main.c
//  sehw1
//
//  Created by Spencer May on 2/16/23.
//

#include <stdio.h>
#include <stdlib.h>


int sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int prod(int arr[], int size) {
    int prod = 1;
    for (int i = 0; i < size; i++) {
        prod = prod * arr[i];
    }
    return prod;
}

int* reverser(int arr[], int size) {
    int* reversearr = (int*) malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        reversearr[i] = arr[size - i - 1];
    }
    return reversearr;
}

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* arr = (int*) malloc(size * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum_total = sum(arr, size);
    int prod_total = prod(arr, size);
    int* reversearr = reverser(arr, size);
    printf("The sum of the elements in array is %d\n", sum_total);
    printf("The product of the elements in array is %d\n", prod_total);
    printf("The reverse of the array is: ");
       for (int i = 0; i < size; i++) {
           printf("%d ", reversearr[i]);
       }
       free(reversearr);
    return 0;
}
