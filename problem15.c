#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements: ");

    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }


    for (int c=0; c<n; c++){
        if (a[c]%3==0)
            a[c] = -1;
    }

    for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}