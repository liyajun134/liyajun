//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
int main()
{
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch (op)
    {
    case'+':
    printf("a+b=%d\n",a+b);
    break;
    case'-':
    printf("a-b=%d\n",a-b);
    break;
    case'*':
    printf("a*b=%d\n",a*b);
    break;
    case'/':
    printf("a/b=%d",a/b);
    default:
    break;

    }



    return 0;

}
