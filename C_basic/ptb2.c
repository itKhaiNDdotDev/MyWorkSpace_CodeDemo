 #include <stdio.h>
 #include <math.h>
 
 
int main ()
{
	int a, b, c, d;
	
	printf ("\n phuong trinh ax2 + bx + c = 0: ");
	printf ("\n a = ");			scanf ("%d" , &a );
	printf ("\n b = ");			scanf ("%d" , &b );
	printf ("\n c = ");			scanf ("%d" , &c );
	
	d = b*b - 4*a*c;
	
	
	if ( a == 0 )
	{
		if ( b == 0 )
		{
			if ( c == 0 ) 	printf ("\n Phuong trinh vo so nghiem ");
			else 			printf ("\n Phuong trinh vo nghiem ");
		}
		else 				printf ("\n Phuong trinh co 1 nghiem: %f " , -1.0*c/b );
	}
	
	else
	{
		if ( d > 0 )		printf ("\n Phuong trinh co 2 nghiem phan biet: \n x1 = %f \n x2 = %f " , ( -b + sqrt(d) ) / ( 2.0*a ),  ( -b - sqrt(d) ) / ( 2.0*a )  );
		if ( d == 0 ) 		printf ("\n Phuong trinh co nghiem kep: x = %f " , -b/ ( 2.0*a )  );
		if ( d < 0 )		printf ("\n Phuong trinh co 2 nghiem phuc: \n x1 = (%d - %fi)/ %d \n x2 = (%d + %fi)/ %d ", -b, 1.0*sqrt( abs( d ) ), 2*a,  -b, 1.0*sqrt( abs( d ) ), 2*a  );
	}

	return 0;
}

