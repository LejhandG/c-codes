#include <stdio.h>
#include <conio.h> 

void main() {
    int arr[5];
    printf("Enter 5 numbers"); 
    for (int i=0;i<5;i++) { 
        scanf("%d",&arr[i]);
    }
    int arr2[5]; 
    int counter;

    for (int i = 0; i < 5; i++) {
        counter = 0;

        for (int j = 0; j < 5; j++) {
            if (arr[i] > arr[j]) {
                counter++;
            }
        }

        arr2[counter] = arr[i];
    }

    printf("Sorted Array in Ascending Order: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
}
