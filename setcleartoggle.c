int main()
{
        int a=7,pos,i;
        for(i=31;i>=0;i--)
        {
                if(a&(1<<i))
                printf("1");
                else
                printf("0");
        }
// clear a bit
        printf("\nenter the pos to clear\n");
        scanf("%d",&pos);
        a=a&~(1<<pos);
        printf("%d\n",a);
        for(i=31;i>=0;i--)
        {
                if(a&(1<<i))
                printf("1");
                else
                printf("0");
        }
        printf("\n");
//set a bit
        printf("enter the position to set\n");
        scanf("%d",&pos);
        a=a|(1<<pos);
        for(i=31;i>=0;i--)
        {
                if(a&(1<<i))
                printf("1");
                else
                printf("0");
        }
//clear a bit
        printf("\nenter the position to toggle\n");
        scanf("%d",&pos);
        a=a^(1<<pos);
        for(i=31;i>=0;i--)
        {
                if(a&(1<<i))
                printf("1");
                else
                printf("0");
        }
        printf("\n");
}
