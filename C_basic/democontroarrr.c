 #include <stdio.h>
 #include <stdlib.h>
 
 
 
void inp ( int *a, int *n )
{
	printf ("\n Nhap danh sach mang: \n");
	for ( int i = 0; i < *n; i++ )
	{
		scanf ("%d" , a+i );
	}
}


void oup ( int *a, int *n )
{
	printf ("\n Danh sach mang: \n");
	for ( int i = 0; i < *n; i++ )
	{
		printf (" %7d " , *(a+i) );
	}
}


void ins ( int *a, int *n, int k, int x )
{
	int *b;
	
	*n = *n+1;
	
	b = (int*) malloc ( *n * sizeof (int) );
	
	for ( int i = 0; i < *n; i++ )
	{	// dang cp sai sot o day
		if ( i < k )		*(b+i) = *(a+i);
		if ( i == k )		*(b+k) = x;
		if ( i > k )		*(b+i) = *(a+i-1);
	}
	
	a = (int*) realloc (a, *n);
	
	for ( int i = 0; i < *n; i++ )
	{
		*(a+i) = *(b+i);
	}
	
	free (b);
}


void del ( int *a, int *n, int k )
{
	int *b;
	
	*n = *n-1;
	
	b = (int*) malloc ( *n * sizeof (int) );
	
	for ( int i = 0; i < *n; i++ )
	{	// dang cp sai sot o day
		if ( i < k )		*(b+i) = *(a+i);
		if ( i >= k )		*(b+i) = *(a+i+1);
	}
	
	a = (int*) realloc (a, *n);
	
	for ( int i = 0; i < *n; i++ )
	{
		*(a+i) = *(b+i);
	}
	
	free (b);
}


 
int main ()
{
	int *a, *n;
	
	n = (int*) malloc ( sizeof (int) );
	
	*n = 10;
	
	a = (int*) malloc ( *n * sizeof(int) );
	
	inp ( a, n );
//	ins ( a, n, 4, 96969 );
	del ( a, n, 6 ); 
	oup ( a, n );

	free (a);
	free (n);

	return 0;
}

