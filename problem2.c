#include<stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");

    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for (int c=0; c<n; c++){
        sum += arr[c];
    }

    printf("%d\n", sum);

    return 0;
}