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

    // printing in reverse order

    for (int c=n-1; c>=0; c--){
        printf("%d ", arr[c]);
    }

    printf("\n");

    return 0;
}