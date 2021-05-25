 #include <stdio.h>
 #include <math.h>
 
 
int main ()
{
	float es, s;
	
	do
	{
		printf ("\n Nhap so duong epsilon rat nho: ");
		scanf  ("%f" , &es );
	}
	while ( es <= 0 || es >= 1 );
	
	int i = 1;
	
	do
	{
		
		s = 1.0;
		
		s = s + pow ( -1, i ) * 1.0 / ( 2*i + 1 );
		
	}
	while ( 1.0/( 2*i + 1 ) >= es  );
	
	printf ("\n pi = %f " , 4.0*s );
	
	return 0;
}

