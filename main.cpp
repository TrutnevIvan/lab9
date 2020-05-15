/* программа является учебной */

#include <stdio.h>
#include "sdt.h"

int main(){

    int x1, x2, sum, prod;

    printf("Input 1st integer number: ");
    scanf("%d", &x1);

    printf("\nInput 2nd integer number: ");
    scanf("%d", &x2);

    printf("\nThe summa of 2 numbers = %d", x1+x2);

    printf("\nThe production of 2 numbers = %d", x1*x2);

    getchar();
    getchar();

    return 0;
}