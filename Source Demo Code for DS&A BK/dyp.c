#include <stdio.h>

int n, a[1000];


void inp ()
{
	printf (" Nhap so phan tu cua day la: ");		scanf ("%d" , &n );
	printf (" Nhap danh s?ch phan tu cua day: \n");
	int tmp;
	for (int i = 0; i < n; i++ )
	{
		scanf ("%d" , &tmp );
		a[i]=tmp;
	}
}


int dyp ( int a[], int n )
{
	int t[n], max = -999;

	for (int i = 0; i < n; i++)
	{
		if (i == 0)					t[i] = a[i];
		else if (t[i-1] > 0)		t[i] = a[i] + t[i-1];
		else						t[i] = a[i];

		if (t[i] > max)				max = t[i];
	}

	return	max;
}




int main ()
{
	inp ();
	printf (" Trong luong lon nhat trong cac day con la: %d " , dyp ( a, n ) );
}	
	
