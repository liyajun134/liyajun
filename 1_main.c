//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	int* p = &a;
	*p += 10;
	printf("%d %d\n", a, *p);
	return 0;
} 
