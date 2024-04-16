#include<stdio.h>

int main()
{
    int n, x, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");

    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &x);

    int found_indices[n], count = 0;

    for (int c=0; c<n; c++){
        if (arr[c] == x){
            found_indices[count++] = c;
        }
    }

    if (count > 0){
        printf("FOUND at index position: ");
        for (i=0; i<count-1; i++){
            printf("%d, ", found_indices[i]);
        }
        printf("%d\n", found_indices[i]);
    }
    else {
        printf("NOT FOUND\n");
    }

    return 0;
}