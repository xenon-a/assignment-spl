#include<stdio.h>

int main()
{
    int n;
    float sum=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter the array elements: ");

    for (int i=0; i<n; i++){
        scanf("%f", &arr[i]);
    }
    for (int c=0; c<n; c++){
        sum += arr[c];
    }

    float avrg = sum / n;

    printf("%.2f\n", avrg);

    return 0;
}