#include<stdio.h>
#define MAX 500000

void sieve_Of_Erastosthenes(int a[],long long int n)
{
    for(long long int i=2;i<n;i++)
    {
        if(a[i]!=i)
            continue;
        for(long long int j=i;j<=n;j+=i)
        {
            if(a[j]==j)
            a[j]=i;
        }
    }
}
int main()
{
    int a[MAX];
    for(long long int i=0;i<MAX;i++)
    {
        a[i]=i;
    }
    sieve_Of_Erastosthenes(a,MAX);
    long long int n;
    printf("Enter the number\n");
    scanf("%ld",&n);
    printf("Prime Factorization of %ld:\n",n);
    while(n!=0 || n!=1)
    {
        printf("%ld ",a[n]);
        n/=a[n];
        if(n==1)
            break;
    }
}