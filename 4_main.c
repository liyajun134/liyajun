//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
#include <stdlib.h> 

void n(int *ptr_arr, int len) {
    for (int i = len - 1; i > 0; i--) {
        *(ptr_arr + i) = *(ptr_arr + i - 1);
    }
    *ptr_arr = 0;
}

int main() {
    int arr[5];
    int i = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("请输入5个整数（用空格或回车分隔）：\n");
    for (i = 0; i < 5; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("输入错误！请仅输入整数。\n");
            exit(1); 
        }
    }

    n(arr, len);
    printf("移位后结果：");
    for (i = 0; i < 5; i++) {
        if (i == 4) { 
            printf("%d", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
