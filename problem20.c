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

    int union_list[m+n], num, flag=0, count=0;

    for (int i=0; i<n; i++){
        union_list[count++] = a[i];
    }

    for (int j=0; j<m; j++){
        num=b[j];
        for (int k=0; k<n; k++){
            if (num==a[k]){
                flag = 1;
                break;
            }
        }
        if (flag==0){
            union_list[count++] = num;
        }
        flag=0;
    }

    for (int i=0; i<count; i++){
        printf("%d ", union_list[i]);
    }

    
    printf("\n");

    return 0;
}