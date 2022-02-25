#include<stdlib.h>
void fun(int**ptr)
{
        int i;
        for(i=0;i<5;i++)
        printf("%d",*(*ptr+i));
        printf("\n");
}
int main()
{
        int* ptr;
        int i;
        int n=3;
        ptr=(int*)malloc(5*sizeof(int));
        for(i=0;i<5;i++)
        ptr[i]=n++;
        for(i=0;i<5;i++)
        printf("%d",ptr[i]);
        printf("\n");
        fun(&ptr);
        free(ptr);
}

