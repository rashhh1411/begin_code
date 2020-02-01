#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void bubblesort(int a[], int n);                    
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
  bubblesort(a, n);                                 
  printf("\n The sorted array is\n");
  for(i=0; i<n; i++)
  {
      printf("%d\n", a[i]);
  }
}
void bubblesort(int a[], int n)
{
  int temp, i, j;
  for(i=0; i<n; i++)
  {
    for(j=0; j<n-1; j++)
    {
      if(a[j] > a[j+1])
        {
         temp = a[j];
         a[j] = a[j+1];
          a[j+1] = temp;
        }
    }
  }
}
