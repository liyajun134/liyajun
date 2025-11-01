//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
int main ()
{
    int arr[5],num;
    for (int i = 0; i < 5;i++)
    {
        do{
            scanf ("%d", &num);
        }while (num % 2 != 0);
        arr[i] = num;    
    }
    for (int i = 0; i < 5 ;i++)
    {
        if (i > 0)
        {
            printf(" ");
        }
        printf ("%d", arr[i]);
    }

    return 0;
}
