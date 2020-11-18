#include<stdio.h>
int main()
{
    double a,count=0,s=0;
    int b;
    bilash:
    while(count!=2)
    {
        scanf("%lf",&a);
     if(a>=0 &&a<=10)
    {
        s=s+a;
        count=count+1;
    }
    else
    {
        printf("nota invalida\n");
    }
    }
    printf("media = %.2lf\n",s/2);
    printf("novo calculo (1-sim 2-nao)\n");
    count=0;
    s=0;
    p:
    scanf("%d",&b);
    if(b==1)
    {
        goto bilash;
    }
    else if(b==2)
    {
        goto k;
    }
    else
    {
        printf("novo calculo (1-sim 2-nao)\n");
        goto p;
    }
     k:
    return 0;
}
