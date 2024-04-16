#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter the array elements: ");

    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }


    for (int c=0, x=n-1; c<n; c++, x--){
        b[c] = a[x]; 
    }

    printf("Array A: ");
    for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    printf("\n");

    printf("Array B: ");
    for (int i=0; i<n; i++){
        printf("%d ", b[i]);
    }

    printf("\n");
    return 0;
}