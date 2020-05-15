/* программа является учебной */

#include <stdio.h>
#include "sdt.h"

int main(){

    int x1, x2;

    printf("Input 1st integer number: ");
    scanf("%d", &x1);

    printf("\nInput 2nd integer number: ");
    scanf("%d", &x2);

    printf("\nThe summa of 2 numbers = %d", x1+x2);

    printf("\nThe production of 2 numbers = %d", x1*x2);
    printf("\nThe division of 2 numbers = %f", x1/float(x2));

    getchar();
    getchar();

    return 0;
}