 #include <stdio.h>
 
int main ()
{
	int n;
	
	do
	{
	printf ("\n Nhap so ban muon kiem tra: ");
	scanf ("%d" , &n );
	}
	while ( n <= 0 );
	
	if ( n == 1 ) 		printf ("\n Khong phai ");
	
	int c = 1;
	
	for ( int i = 0; i < n; i++ )
	{
		if ( n % i == 0 ) 	c = 0;
	}	
	
	if ( c = 1 ) 	printf ("\n So nguyen to ");
	else 			printf ("\n Khong phai ");
	
	return 0;
}

