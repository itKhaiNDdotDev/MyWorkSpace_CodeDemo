 #include <stdio.h>
 #include <stdlib.h>
 
void swap ( int *a, int *b )
{
	int *t;
	t = ( int * )  malloc ( 1 * sizeof ( int )  );
	*t = *a;
	*a = *b;
	*b = *t;
	free ( t );
}

void up ( int *a, int n )
{
	int *t;
	t = ( int * )  malloc ( sizeof ( int )  );
	
	for ( int i = 0; i < n; i++ )
	{
		if ( *( a+i+1 ) < *( a+i ) )
		{
			*t = *( a+i );
			*( a+i ) = *( a+i+1 );
			*( a+i+1 ) = *( a+i );
		}	
	}	
	
	free ( t );
}	
 
 
 
int main ()
{
	int n;
	
	printf ("\n Nhap day so: ")
	
	int *arr;
	
	arr = ( int * ) malloc ( n * sizeof ( int )  );
	
	
	return 0;
}

