#include<stdio.h>

int main()
{
    int n, m, max;

    printf("Enter the number of elements of array A: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array A elements: ");

    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    
    printf("Enter the number of elements of array B: ");
    scanf("%d", &m);

    int b[m];

    printf("Enter the array B elements: ");

    for (int i=0; i<m; i++){
        scanf("%d", &b[i]);
    }

    if (n>m){
        max=n;
    } else {
        max=m;
    }

    int common_set[max], count=0;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (a[i]==b[j]){
                common_set[count++] = a[i];
                break;
            }
        }
    }

    if (count>0){
        for (int i=0; i<count; i++){
            printf("%d ", common_set[i]);
        }
    }
    else {
        printf("Empty set");
    }

    printf("\n");

    return 0;
}