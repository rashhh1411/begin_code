#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void binary_search();
int a[MAX], n, num, loc, beg, mid, end, i;
void main()
{

    printf("Enter size of an array: \n");
    scanf("%d", &n);
    printf("Enter elements of an array in sorted form:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched: \n");
    scanf("%d", &num);
    binary_search();
}
void binary_search()
{
    beg = 0;
    end = n-1;
    mid = (beg + end) / 2;
    while ((beg<=end) && (a[mid]!=num))
    {
        if (num < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;
        mid = (beg + end) / 2;
    }
    if (a[mid] == num)
        printf("number %d found at location %d\n", num, mid+1);
    else
        printf("number doesn't exist\n");
}
