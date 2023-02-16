//
//  main.c
//  sehw1
//
//  Created by Spencer May on 2/16/23.
//

#include <stdio.h>

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

int main(void)
{
    return 0;
}
