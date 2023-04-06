#include <stdio.h>
void main ()
{
int A[10], i, temp, j;
printf ("Enter any 10 number in array");
for (i=0; i<10; i++)
{
scanf ("%d", &A[i]);
}
for (j=0;j<9;j++)
{


for (i=0; i<(9-j);i++)
{
if (A[i]> A[i+1])
{
temp= A[i];
A[i]=A[i+1];
A[i+1]= temp;

}
}
}
printf ("number of Ascending order\n");
for (i=0; i<10; i++)
{
printf ("%d", A[i]);
printf (",");

}
}












