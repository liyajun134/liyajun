//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
void reverse_array(int arr[], int len) {
    for (int i = 0; i < len/2; i++) {
        int temp = arr[i];
        arr[i] = arr[len-1-i];
        arr[len-1-i] = temp;
    }
}

int main() {
    int arr[] = {1,2,3,4,5}, len=5;
    reverse_array(arr, len);
    for (int i=0; i<len; i++)
        printf("%d%s", arr[i], i<len-1?" ":"");
    return 0;
}
