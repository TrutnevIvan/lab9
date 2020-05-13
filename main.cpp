#include <stdio.h>

int main(){

    int x1, x2, sum, sub;

    printf("Input 1st integer number: ");
    scanf("%d", &x1);

    printf("\nInput 2nd integer number: ");
    scanf("%d", &x2);

    printf("\nThe summa of 2 numbers = %d", x1+x2);

    printf("\nThe subtraction of 2 numbers = %d", x1-x2);

    getchar();
    getchar();

    return 0;
}