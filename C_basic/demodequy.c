 #include <stdio.h>
 
 
int main ()
{
	int n;
	
	printf ("\n Nhap so n de dao nguoc: ");
	scanf ("%d" , &n );
	
	int c = 0, s = 0;
	
	while ( n > 0 )
	{
	int d;
		
	d = n%10;
	
	n = n/10;
	
	s = s*10 + d;
	
	c++;	
	}
		
	printf ("\n so chu so la: %d " , c );
	printf ("\n so dao nguoc: %d " , x );

	return 0;
}

