#include<stdio.h>
#include<stdlib.h>
int count;
void Merge(int A[10], int L, int m, int r)
{
    int i, j,k,B[10];
    i=L;
    j=m+1;
    k=L;
    while(i<=m&&j<=r)
    {
        count=count+1;
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    while(i<=m)
        B[k++]=A[i++];
    while(j<=r)
        B[k++]=A[j++];
    for(i=L;i<=r;i++)
        A[i]=B[i];
}
void Mergesort(int A[10],int L, int r)
{
    int m;
    if(L<r)
    {
        m=(L+r)/2;
        Mergesort(A,L,m);
        Mergesort(A,m+1,r);
        Merge(A,L,m,r);
    }
}
int main()
{
    int i,n, A[10];
    printf("\nRead array size:");
    scanf("%d", &n);
    printf("\nRead Array elements:");
    for(i=0;i<n;i++)
        scanf("%d", &A[i]);
    Mergesort(A,0,n-1);
    printf("\nSorted elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t", A[i]);
    printf("\nTotal numbers of comparison=%d", count);
    return 0;
}
