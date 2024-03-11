#include<stdio.h>
int main()
{
    int n,b, a = 1;
    printf("enter a number: \n");
    scanf("%d", &n);
     printf("enter skip value: \n");
     scanf("%d", &b);
    for (int i = 1; i <= n; i++)
    {
        printf("%d \n", a);
        a = a + b;
    }
    

    return 0;
    
}