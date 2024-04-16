#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], max=-9999999, min=9999999, max_index=-1, min_index=-1;

    printf("Enter the array elements: ");

    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for (int c=0; c<n; c++){
        if (arr[c]>max){
            max = arr[c];
            max_index = c;
        }
        if (arr[c]<min){
            min = arr[c];
            min_index = c;
        }
    }

    printf("Max: %d, Index: %d\n", max, max_index);
    printf("Min: %d, Index: %d\n", min, min_index);

    return 0;
}