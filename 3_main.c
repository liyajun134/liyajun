//202510305220
//3614193262@qq.com
//李亚君
void n(int arr[], int n)
{
    int i = 0;
    for (i = 0; i < n - 1; i++)
    {
        int j = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int m = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = m;
            }
        }
    }
}

int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int sz = sizeof(arr) / sizeof(arr[0]);

    n(arr,sz);

    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
