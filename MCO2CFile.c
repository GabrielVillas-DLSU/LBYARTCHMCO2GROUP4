//Group 4 John Maverick Cisneros and Gabriel Villas
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
extern double imgCvtGrayInttoFloat(double dPixel);

int main ()
{
int nHeight;
int nWidth;
int nSize;
int times;
printf ("Enter height:");
scanf ("%d", &nHeight); // Column
printf ("Enter width:"); 
scanf ("%d", &nWidth); // Row

int arrPixel [nHeight][nWidth]; 
double FloatingArrPixel [nHeight][nWidth];
nSize = nHeight * nWidth;

int nCount = nSize; 
int i, j = 0; 
// Clock
clock_t start, end; 
double total_time; 
// Input pixel values and store to the 2D array
for (i = 0; i < nHeight; i++)
{
	for (j = 0; j < nWidth; j++)
	{
		printf ("Enter %d pixel values :", nCount);
		scanf ("%hhu", &arrPixel[i][j]);
		nCount--; 
	}

}

// Output inputted Arrays
printf ("Input: \n"); 
for (i = 0; i < nHeight; i++)
{
	for (j = 0; j < nWidth; j++)
	{
		printf (" %d", arrPixel[i][j]);
	}
	printf ("\n");
}

start = clock();
// Compute for float pixel array
for (times = 0; times < 30; times++)
{
	for (i = 0; i < nHeight; i++)
	{
		for (j = 0; j < nWidth; j++)
			{
		
				FloatingArrPixel [i][j] = imgCvtGrayInttoFloat((double)arrPixel[i][j]);
			}

	}
}

end = clock();
total_time = ((double) (end - start)) / CLOCKS_PER_SEC;
printf ("Total Execution Time : %.8f \n" , total_time);

// Output the computed pixel
printf ("Output: \n"); 
for (i = 0; i < nHeight; i++)
{
	for (j = 0; j < nWidth; j++)
	{

		printf (" %.2lf", FloatingArrPixel[i][j]);
	}
	printf ("\n");
}
return 0;

	
	
	
}