#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    c=(a>b)?a:b;printf("maximum num %d",c);
    
    return 0;
}