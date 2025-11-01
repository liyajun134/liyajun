//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
int main ()
{
    int i = 100, a, b, c, first = 1;
    while (i <= 999)
    {
    a = i /100;
    b =(i / 10) % 10;
    c = i % 10;
        if (a*a*a+b*b*b+c*c*c==i)
{
    if (! first){
        printf (" ");
    }
    printf ("%d",i);
    first = 0;
}
    i++;
    }
    return 0;
}
