 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>
 
 
int main ()

{
	
	char name [ 25 ];
	
	printf ("\n Nhap ten nguoi su dung: ");
	gets ( name );
	fflush ( stdin );
	
	char x = toupper ( name ); 
	
	printf ("\n %s " , x );
	
	printf ("\n Do dai: %d " , strlen ( name )  );
	
	return 0;

}

