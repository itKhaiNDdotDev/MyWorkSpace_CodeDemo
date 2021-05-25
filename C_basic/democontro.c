 #include <stdio.h>
 #include <stdlib.h>
 
 /*#include <stdlib.h>
 	malloc ();
 	free ();
 */
 
 /* void swap ()
 	{
 		malloc ( temp =    );
		 .....
		free (temp);
		..
			
	}
 */
 
 
void ip ( int *a, int n ) 
{
	for ( int i = 0; i < n; i++ )
	{
		printf ("\n Nhap phan tu thu %d " , i+1 );
		scanf  ("%d" , a+i );		
	}
}

void  sx ( int *a, int n )
{
	
} 


void op (int *a, int n )
{
	for ( int i = 0; i < n; i++ )
	{
		printf ("\n Phan tu thu %d la: %d " , i+1, *(a+i) );
	}
} 

//int add ( int *a, int *b )
//{
//	int *s;
//	*s = *a + *b;
//	return *s;
//}


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
	
	for ( int i = 0; i < n; i++ )
	{
		for ( int j = i+1; j < n; j++ )
		{
			if ( *( a+j ) < *( a+i ) )
			{
			 swap ( a+i, a+j );
			}
		}		
	}	
	
	
}	
 
 
int main ()
{
	int n;
	int *arr;
	
	printf ("\n Nhap so luong phan tu mang: ");
	scanf ("%d" , &n );
	
	// Cap phat vung nho dong
	arr = ( int * ) malloc ( n * sizeof ( int )  );
	
	ip ( arr, n );
	
	up ( arr, n );
	
	op ( arr, n );
	
	return 0;
}

