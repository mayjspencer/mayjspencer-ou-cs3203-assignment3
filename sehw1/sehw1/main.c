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

int main(void)
{
    return 0;
}
