#include<stdio.h>
#include<stdlib.h>
typedef struct ST
{
        int roll;
        struct ST*next;
}st;
void push(st**ptr)
{
        st*temp=(st*)malloc(sizeof(st));
        scanf("%d",&temp->roll);
        if(*ptr==NULL)
        {
                temp->next=*ptr;
                *ptr=temp;
        }
        else
        {
                st*last=*ptr;
                temp->next=last;
                *ptr=temp;
        }
}
void peak(st*top)
{
        printf("the peak element is:%d\n",top->roll);
}
void pop(st**ptr)
{
        if(*ptr==NULL)
        {
                printf("stack underflow\n");
                return;
        }
        st*temp=*ptr;
        *ptr=temp->next;
        free(temp);
        temp=NULL;
}
int main()
{
        st*top=0;
        int op;
        while(1)
        {
        printf("1) push 2) peak 3) pop 4)exit\n");
        scanf(" %d",&op);
        switch(op)
        {
        case 1:push(&top);break;
        case 2:peak(top);break;
        case 3:pop(&top);break;
        case 4:return 0;
        default:printf("invalid option\n");break;
        }
        }
}
