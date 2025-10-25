//202510305220
//3614193262@qq.com
//李亚君
#include<stdio.h>
int main ()
{
    int e,f,g;
    scanf ("%d %d %d",&e,&f,&g);
    if (e+f>g && e+g>f && f+g>e)
    {
        printf("可以组成三角形\n");
    }
    else
    { 
        printf("不能组成三角形\n");
    }
    
   
   
   
    return 0;
}
