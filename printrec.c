#include<stdio.h>
void fun(int a)
{
        if(a!=0)
        {
                printf("%d\n",a);
                a--;
                fun(a);
        }
}
int main()
{
        int a=10;
        fun(a);
}
