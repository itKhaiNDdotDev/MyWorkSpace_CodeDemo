 #include <stdio.h>
 #include <stdlib.h>


int main ()
{
	char **s;
	int n = 10;
	
	s = ( char ** )  malloc ( 100 * sizeof ( char )  );

	int i;

	for ( i = 0; i < n; i++ )
	{
		s [ i ]  =  ( char * )  malloc ( 10000 * sizeof ( char )  )l 
	}
	
	
 
	return 0;
}

