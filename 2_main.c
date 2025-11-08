//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
int main ()
{
    int arr[3][3];
    for (int i =0;i < 3; i++){
        scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
    }
    for (int i = 0;i < 3;i++){
        printf("%d %d %d\n",arr[0][i],arr[1][i],arr[2][i]);
    }
    return 0;
}
