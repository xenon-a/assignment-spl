#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");

    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int pos;

    printf("position: ");
    scanf("%d", &pos);

    for (int c=pos; c<n-1; c++){
        arr[c] = arr[c+1];
    }

    for (int i=0; i<n-1; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}