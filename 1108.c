#include <stdio.h>

int main()
{
    int k1, k2;
    printf("あなたの年齢は？");
    scanf("%d", &k1);
    
    
    
    if(k1 >= 25)
    {
        printf("年老いていますね\n");
    }
    
    else if (k1 < 24)
    {
        printf("若いですね\n");
    }
    printf("子供は何人いますか？");
    scanf("%d", &k2);
    if(k2 == 1)
    {
        printf("幸せですね\n");
    }
    
    else if(k2 > 1)
    {
        printf("幸せそうで何よりです\n");
    }
    else
    {
        printf("幸せそうですね\n");
    }
    return 0;
}
