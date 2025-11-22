//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
int main()
{
	int arr[5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		
		int* p = &arr[i];
		*p = *p * 2;
		arr[i] = *p;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
