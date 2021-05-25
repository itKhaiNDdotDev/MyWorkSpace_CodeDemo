 #include <stdio.h>
 
 
 
double sn ( int n )
{
	int s = 0;
	
	for ( int i = 0; i <= n; i++ )
	{
		s = s + i;
	}
	
	return s;
} 
 
 
double gt ( int n )
{
	double s = 1;
	
	for ( int i = 1; i <= n; i++ )
	{
		s = s*i;
	}
	
	return s;
}


double pow ( int x, int n )
{
	double s = 1;
	
	for ( int i = 0; i < n; i++ )
	{
		s = s*x;
	}
	
	return s;
} 


double b11 ( int n )
{
	double s = 0;
	
	for ( int i = 1; i <= n; i++ )
	{
		s = s + gt ( i );
	}
	
	return s;
}
 
 
double b12 ( int x, int n )
{
	double s = 0;
	
	for ( int i = 1; i <= n; i++ )
	{
		s = s + pow ( x, i );
	}
	
	return s;
}

 
double b13 ( int x, int n )
{
	double s = 0;
	
	for ( int i = 2; i <= 2*n; i += 2 )
	{
		s = s + pow ( x, i );
	}
	
	return s;
} 


double b14 ( int x, int n )
{
	double s = 0;
	
	for ( int i = 1; i <= ( 2*n + 1 ); i += 2 )
	{
		s = s + pow ( x, i );
	}
	
	return s;
} 


double b15 ( int n )
{
	double s = 0;
	
	for ( int i = 1; i <= n; i++ )
	{
		s = s + 1.0/( sn ( i )  );
	}
	
	return s;
} 


double b16 ( int x, int n )
{
	double s = 0;
	
	for ( int i = 1; i <= n; i++ )
	{
		s = s + (  pow ( x, i ) / sn ( i )  ) ;
	}
	
	return s;
} 


double b17 ( int x, int n )
{
	double s = 0;
	
	for ( int i = 1; i <= n; i++ )
	{
		s = s + (  pow ( x, i ) / gt ( i )  ) ;
	}
	
	return s;
} 


double b18 ( int x, int n )
{
	double s = 0;
	
	for ( int i = 0; i <= n; i++ )
	{
		s = s + (  pow ( x, 2*i ) / gt ( 2*i )  ) ;
	}
	
	return s;
} 


double b19 ( int x, int n )
{
	double s = 1;
	
	for ( int i = 1; i <= ( 2*n + 1 ); i += 2 )
	{
		s = s + (  pow ( x, i ) / gt ( i )  ) ;
	}
	
	return s;
} 


void b20 ( int n )
{
	for ( int i = 1; i <= n; i++ )
	{
		if ( n % i == 0 ) 		printf ("%7d" , i );
	}
}


int ktsnt ( int n )
{	
	if ( n < 2 ) 		return 0;

	int kt = 0;
	
	for ( int i = 1; i <= n; i++ )
	{
		if ( n % i == 0 ) 			kt++;
	}
	if ( kt == 2 )
	{
		return 1;
	}	
	return 0;
}      
 
 
 
int main ()
{
	int x, n;
	
	printf ("\n x = "); 		scanf ("%d" , &x );
	printf ("\n n = "); 		scanf ("%d" , &n );
	
	printf ("\n ket qua bai 11 la: %lf " , b11 ( n )  );
	printf ("\n ket qua bai 12 la: %lf " , b12 ( x, n )  );
	printf ("\n ket qua bai 13 la: %lf " , b13 ( x, n )  );
	printf ("\n ket qua bai 14 la: %lf " , b14 ( x, n )  );
	printf ("\n ket qua bai 15 la: %lf " , b15 ( n )  );
	printf ("\n ket qua bai 16 la: %lf " , b16 ( x, n )  );
	printf ("\n ket qua bai 17 la: %lf " , b17 ( x, n )  );
	printf ("\n ket qua bai 18 la: %lf " , b18 ( x, n )  );
	printf ("\n ket qua bai 19 la: %lf " , b19 ( x, n )  );
	printf ("\n ket qua bai 20 la: "); 		b20 ( n );
	

	return 0;
}

