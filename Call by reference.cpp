#include <stdio.h>
 
void swap(int*, int*);
 
int main()
{
   int x, y;
 
   printf("Enter the first and second number: ");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nFirst = %d\nSecond = %d\n", x, y);
 
   swap(&x, &y); 
 
   printf("After Swapping\nFirst = %d\nSecond = %d\n", x, y);
 
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;   
}
 
