//count the no of elements in given array greater than a given no x
#include <stdio.h>

int main() {
    int arr[10] = {5, 8, 3, 6, 2, 9, 1, 7, 4, 0};
    int x = 4;  // the number to compare
    int count = 0;  // initialize the counter

    for (int i = 0; i < 10; i++) {
        if (arr[i] > x) {
            count++;
        }
    }

    printf("The number of elements in the array greater than %d is %d\n", x, count);

    return 0;
}
