#include <stdio.h>
 void quicksort (int number [25], int first, int last)
{
 int i, J, pivot, temp;
 if(first <last)
{
  pivot = first;
  i= first;
  J = last;
  while (i<J)
{
  while (number [i] <= number [pivot] && i< last)
  i++;
  while (number [J] > number [pivot])
  J--;
  if (i<J)
{
  temp = number [i];
  number [i] = number [J];
  number [J] = temp;
} 
}

 temp = number [pivot];
 number [ pivot] = number [J];
 number [J] = temp;
 quicksort (number, first, J-1);
 quicksort (number, J+1, last);
}
}
int main ()
{
 int i, count, number [25];
 printf ("How many elements are u going to enter ?");
 scanf ("%d", & count);
 printf ("Enter %d elements:", count);
 for (i=0; i< count; i++)
 scanf("%d", & number [i]);
 quicksort(number, 0, count-1);
 printf ("order of sorted elements:");
 for(i=0; i< count; i++)
 printf ("%d", number [i]);
 return 0;
}