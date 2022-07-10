#include<stdio.h>		//This is the header file for using scanf and printf functions in the program
#include<math.h>		//This is the header file for using mathematical functions in the program
int main ()
{
  int a[10], b[10];		//Declaring integers
  int c[10], d[10];
  int n, i, e1 = 0;
  float magnitude, angle, a1, b1, c1;	//Declaring FLoat, as the obtained values need not be integers
  printf ("Enter elements of vector a:\n");	//print function to intimate user to give the elements of 'vector a' as input
  for (i = 0; i < 2; i++)	//for loop for scanning elements of two dimensional array
    scanf ("%d", &a[i]);	//scans the elements of a 
  printf ("Enter elements of vector b:\n");
  for (i = 0; i < 2; i++)	//for loop for scanning elements of two dimensional array
    scanf ("%d", &b[i]);	//scans the elements of a
  for (i = 0; i < 2; i++)
    c[i] = a[i] + b[i];		//Addition of vector formula
  printf ("Addition vector:");
  for (i = 0; i < 2; i++)	//for loop
    printf ("%d ", c[i]);
  magnitude = sqrt (pow (c[0], 2) + pow (c[1], 2));	//magnitude of vector formula
  printf ("\nMagnitude of c vector is %f", magnitude);	//prints magnitude of c vector
  a1 = sqrt (pow (a[0], 2) + pow (a[1], 2));
  printf ("\nMagnitude of a vector is %f", a1);	//prints magnitude of a vector
  b1 = sqrt (pow (b[0], 2) + pow (b[1], 2));
  printf ("\nMagnitude of b vector is %f", b1);	//prints magnitude of b vector

  for (i = 0; i < 2; i++)	//for loop for finding angle with formula
    {
      d[i] = a[i] * b[i];
      e1 = e1 + d[i];
    }


  c1 = a1 * b1;
  angle = e1 / c1;
  printf ("\nAngle between the vector is cos θ = %f", angle);	//prints the angle between the vectors
}
//This C Program can be used for mathematical problem solving. It will be more helpful for school and college students, simplifying their Maths calculation work. 
