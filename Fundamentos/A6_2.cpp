#include<stdio.h>
#include<locale.h>

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	#include <stdio.h>

int main() {
   
    int n, i, j;
    int num[100];
    int temp;


    printf("Welcome to the Array Sorter!\n");

    printf("Enter the number of elements (max 100): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input for number of elements.\n");
        return 1;
    }

    if (n <= 0 || n > 100) {
        printf("Error: Number of elements must be between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &num[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }


    printf("\nArray sorted in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
    
}

