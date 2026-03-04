#include <stdio.h>
#include <stdlib.h>
int count;
void bubblesort(int A[10], int n)
{
    int i,j, temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            count=count+1;
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
int main()
{
    int A[10], n, i;
    printf("\nRead array size:");
    scanf("%d", &n);
    printf("\nRead array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d", &A[i]);
    bubblesort(A,n);
    printf("\nSorted elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t", A[i]);
    printf("\nTotal number of comaprison=%d", count);
    return 0;
}
