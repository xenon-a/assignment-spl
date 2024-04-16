#include<stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter the number of alphabets: ");
    scanf("%d", &n);

    char str[n];

    printf("Enter the alphabets: ");
    scanf("%s", str);

    for (int c=0; c<n; c++){
        if (
            str[c] == 'A' || str[c] == 'a' ||
            str[c] == 'E' || str[c] == 'e' ||
            str[c] == 'I' || str[c] == 'i' ||
            str[c] == 'O' || str[c] == 'o' ||
            str[c] == 'U' || str[c] == 'u'
        )
            sum++;
    }

    printf("Count: %d\n", sum);

    return 0;
}