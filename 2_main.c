//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
int main()
{
    int score=0;
    scanf("%d",&score);
    if (score >= 90 && score <=100)
    {
        printf("A\n");
    }
    else if (score >=80 && score <=89)
    {
        printf("B\n");
    }
    else if (score >=70 && score <=79)
    {
        printf("C\n");
    }
    else if (score >=60 && score <=69)
    {
        printf("D\n");
    }
    else if (score <=59)
    {
        printf("E\n");
    }



    return 0;
    
}


