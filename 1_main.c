//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int a = 0;
    printf("请输入一个整数：\n");
    if (scanf("%d", &a) != 1) {
        printf("输入错误！请仅输入整数。\n");
        exit(1); 
    }
    
    int* p = &a;
    *p += 10;
    printf("原数a：%d，修改后*p（即a）：%d\n", a, *p);
    return 0;
}
