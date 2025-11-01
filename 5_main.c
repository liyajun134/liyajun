//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
int main ()
{
    int arr[5], sum = 0;
    for ( int i = 0; i< 4; i++)
    {
        scanf ("%d ", &arr[i]);
        sum += arr[i];
    }
    arr[4] = sum ;
    for (int i = 0; i<5 ; i++)
    {   if (i > 0)
        {
            printf (" ");
        }
        printf ("%d", arr[i]);
    }
    return 0;
}
