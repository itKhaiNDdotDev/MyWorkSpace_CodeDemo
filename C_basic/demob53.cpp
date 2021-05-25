 #include <stdio.h>
 
int main ()
{
	
	int n;
	
	do 
	{
	printf ("\n Nhap so nguyen br hon 8: ");
	}
	while ( n >= 8 || n <= 0 );
	
	int m = 1;
	
	for ( int i = 1; i <= n; i++ )
	{
		m = m*i;
	}
	
	printf ("\n %d! = %d " , n, m );
	
	return 0;

}

