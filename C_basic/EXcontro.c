 #include <stdio.h>
 #include <stdlib.h>
 
 
 
void ip ( int *a, int n )
{
	for ( int i = 0; i < n; i++ )
	{
		printf ("\n Nhap phan tu thu %d: " , i+1 );
		scanf  ("%d" , a+i );
	}	
}
 
 
void rm ( int *a, int *n, int k )
{
	*n--;
	
	for ( int i = k; i < *n; i++ )
	{
	  	*( a+i ) = *( a+i+1 );
	}
} 


void ad ( int *a, int *n, int k, int x )
{
	*n++;
	
	int *b;
	b = ( int * ) malloc ( *n * sizeof ( int )  );
	
	for ( int i = 0; i < *n; i++ )
	{
		if ( i < k ) 	*( b+i ) = *( a+i );
		if ( i = k ) 	*( b+i ) = x;
		if ( i > k ) 	*( b+i ) = ( a+i-1 );
	}
	
	for ( int i = 0; i < *n; i++ )
	{
		*( a+i ) = *( b+i );
	}
	
	free ( b );
}


void op ( int *a, int n )
{
	for ( int i = 0; i < n; i++ )
	{
		printf ("\n Phan tu thu %d: %d " , i+1, *( a+i )  );
	}
}
 
 
 
int main ()
{
	int *a;
	int n;
		
	printf ("\n Nhap so luong phan tu: ");
	scanf ("%d", &n );
	
	a = ( int * ) malloc ( n * sizeof ( int )  );
	
	ip ( a, n );
	ad ( a, &n, 3, 111111 );
	op ( a, n );
	
	return 0;
}

