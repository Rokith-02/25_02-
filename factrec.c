#include<stdio.h>
int fun(int n,int sum)
{
        if(n!=0)
        {
                sum=sum*n;
                n--;
                fun(n,sum);
        }
        else
        return sum;
}
int main()
{
        int a,b=1;
        printf("enter the number\n");
        scanf("%d",&a);
        int i=fun(a,b);
        printf("%d\n",i);
}
