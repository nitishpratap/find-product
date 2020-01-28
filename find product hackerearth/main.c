#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int num,i,j,arr[1000];
    long answer=1;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    scanf("%d",&arr[i]);
    }

    for(j=0;j<num;j++)
    {
    answer=(answer*arr[j])%(int)((pow(10,9))+7);
    }
    printf("%ld",answer);
    return 0;
}
