#include <stdio.h>

int main()
{
    int k1,k2;
    printf("How many glassies?");
    scanf("%d", &k1);
    
    printf("How many eyes?");
    scanf("%d", &k2);
    
    int sum=k1+k2;
    
    printf("The number of glassies and eyes: %d\n",sum);

    return 0;
}
