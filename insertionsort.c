#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insertionsort(int a[], int n);                    
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
  insertionsort(a, n);                                 
  printf("\n The sorted array is\n");
  for(i=0; i<n; i++)
  {
      printf("%d\n", a[i]);
  }
}
void insertionsort(int a[], int n)
{
    int i, key, j;  
    for (i=1; i<n; i++) 
    {  
        key = a[i];  
        j = i-1;  
          while (j>=0 && a[j]>key) 
        {  
            a[j+1] = a[j];  
            j = j-1;  
        }  
        a[j+1] = key;  
    }  
}
