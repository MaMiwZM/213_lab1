#include<stdio.h>
int main()
{
    int n=0,i=0,j=0,k=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=a[i];
        if(a[i]>j)
        {
            c=a[i];
            k=i;
        }

    }
    printf("%d %d",k,c);
    return 0;
}
