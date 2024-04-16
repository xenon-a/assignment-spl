#include<stdio.h>

int main()
{
    int n, m, tmp;

    printf("Enter the number of elements in Array A: ");
    scanf("%d", &n);

    int a[100], b[100];

    printf("Enter the array A elements: ");

    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements in Array B: ");
    scanf("%d", &m);

    printf("Enter the array B elements: ");

    for (int i=0; i<m; i++){
        scanf("%d", &b[i]);
    }

    if (m>n){
        for (int x=0; x<m; x++){
            if (x<n){
                tmp = b[x];
                b[x] = a[x];
                a[x] = tmp;
            }
            else {
                a[x] = b[x];
            }
        }
    } else {
        for (int x=0; x<n; x++){
            if (x<m){
                tmp = a[x];
                a[x] = b[x];
                b[x] = tmp;
            }
            else {
                b[x] = a[x];
            }
        }
    }

    printf("Array A: ");
    for (int i=0; i<m; i++){
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