//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
int arithmetic_sum(int a1, int an, int step){
    int n = (an - a1) / step + 1;
    return (a1 + an )* n / 2;
}
int main()
{
    int sum  = arithmetic_sum(1, 100, 1);
    printf("%d\n", sum );
    return 0;
}
