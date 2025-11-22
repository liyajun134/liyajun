//202510305220
//3614193262@qq.com
//李亚君
#include<stdio.h>
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);
	swap(&a,&b);

	printf("%d %d", a, b);
	return 0;
}
