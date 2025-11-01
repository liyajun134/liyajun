//202510305220
//3614193262@qq.com
//李亚君
#include <stdio.h>
int main ()
{
    int n, i, a =1;
    scanf("%d",&n);

    if (n<=1)
    {a =0;
        
    }else{
    for ( i = 2; i*i < n; i++)
    {
      if (n % i == 0)
      {
        a =0;
        break;
      }
    }
}
    if (a )    
    {  printf("密钥安全，密码设置成功\n");
    }else
    {printf("密钥不安全,请重新输入、n");
    }
    
    return 0;
}
