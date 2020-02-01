#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void selectionsort(int a[], int n);                    
void main()
{
  int a[MAX], n, i;
  printf("\n Enter the size of the array \n");
  scanf("%d", &n);
  printf("\n Enter the array elements: \n");
  for(i=0; i<n; i++)
  {
      scanf("%d", &a[i]);
  }
  selectionsort(a, n);                                 
  printf("\n The sorted array is\n");
  for(i=0; i<n; i++)
  {
      printf("%d\n", a[i]);
  }
}
void selectionsort(int a[], int n)
{
    int i, j, min, temp;
    for (i=0; i<n; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
