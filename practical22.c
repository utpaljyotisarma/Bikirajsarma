#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *a, sum=0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    a=(int*)malloc(n* sizeof(int));
    if(a== NULL)
    {
        printf("Not possible\n");
        return 1;
    }
    printf("Enter the %d elemets:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    printf("Sum of the elemnts will be %d:%d",sum);
    free (a);
    return 0;
}