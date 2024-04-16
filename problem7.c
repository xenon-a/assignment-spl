#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], tmp;
    printf("Enter the array elements: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // Reversing
    for (int x=0, y=n-1; x<y; x++, y--){
        tmp = arr[x];
        arr[x] = arr[y];
        arr[y]= tmp;
    }

    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}