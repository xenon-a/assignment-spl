#include<stdio.h>

int exists(int x[], int len, int y){
    for (int i=0; i<len; i++){
        if (x[i]==y){
            return 1;
        }
    }
    return 0;
}

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

    if (n>m)
        max = n;
    else
        max = m;

    int diff_list[max], num, flag=0, count=0;

    for (int i=0; i<n; i++){
        num=a[i];
        for (int j=0; j<m; j++){
            if (num==b[j]){
                flag=1;
                break;
            }
        }
        if (flag==0){
            diff_list[count++] = num;
        }
        flag=0;
    }

    for (int i=0; i<count; i++){
        printf("%d ", diff_list[i]);
    }

    return 0;
}