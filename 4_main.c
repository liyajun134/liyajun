//202510305220
//3614193262@qq.com
//李亚君
#include<stdio.h>
void n(int *ptr_arr,int len)
{
	for (int i = len-1; i > 0 ; i--)
	{
		*(ptr_arr + i) = *(ptr_arr + i - 1);
	}
	*ptr_arr = 0;
}
int main()
{
	int arr[5];
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	n(arr,len);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
