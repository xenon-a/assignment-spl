#include<stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], arr3[n];

    printf("Enter the first array elements: ");

    for (int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the second array elements: ");

    for (int i=0; i<n; i++){
        scanf("%d", &arr2[i]);
    }


    for (int c=0; c<n; c++){
        arr3[c] = arr1[c] + arr2[c];
    }

    // Result
    for (int c=0; c<n; c++){
        printf("%d ", arr3[c]);
    }

    printf("\n");
    return 0;
}