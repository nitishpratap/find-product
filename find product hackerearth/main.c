#include<stdio.h>
#define mod 1000000007
void main()
{
    int N;
    scanf("%d",&N);
    if(N>=1&&N<=1000)
    {
          int i,A[N];
          long long int answer=1;
         for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
        for(i=0;i<N;i++)
    {
        answer=(answer*A[i])%(mod);
    }
    printf("%d",answer);
    }
}
