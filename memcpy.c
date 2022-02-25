#include<stdio.h>
#include<string.h>
void fun(char*a)
{
        int num,i;
        char b[20];
        printf("enter number of element to copy\n");
        scanf("%d",&num);
        if(num>(strlen(a)))
        {
                printf("number is more the string size\n");
                printf("total string size is %d\n",strlen(a));
                return;
        }
        for(i=0;i<num;i++)
        {
                b[i]=a[i];
        }
        b[i]='\0';
        printf("%s",b);
}
int main()
{
        char a[20];
        printf("enter the string\n");
        scanf("%s",a);
        fun(a);
}
