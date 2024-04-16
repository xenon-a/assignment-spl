#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n+1];

    printf("Enter the array elements: ");

    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int num, pos;

    printf("number: ");
    scanf("%d", &num);

    printf("position: ");
    scanf("%d", &pos);

    for (int c=n; c>pos; c--){
        arr[c] = arr[c-1];
    }

    arr[pos] = num;

    for (int i=0; i<=n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}