#include<stdio.h>

int main()
{
    int n, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n], num;
    printf("Enter the array elements: ");

    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for (int i=0; i<n; i++){
        num = a[i];
        for (int j=i+1; j<n; j++){
            if (num==a[j]){
                for (int k=j; k<n; k++){
                    a[k] = a[k+1];
                }
                j--;
                n--;
            }
        }
    }

    for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}