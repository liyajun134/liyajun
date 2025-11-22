//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
#include <stdlib.h> // 用于 exit 函数

void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    printf("请输入10个整数（用空格或回车分隔）：\n");
    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("输入错误！请仅输入整数。\n");
            exit(1); 
        }
    }
    
    bubbleSort(arr, 10);  
    printf("排序结果：");
    for (int i = 0; i < 10; i++) {
        if (i == 9) {
            printf("%d", arr[i]); 
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
