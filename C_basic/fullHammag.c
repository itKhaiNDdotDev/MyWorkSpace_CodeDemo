
 #include <stdio.h>
 #define Max 100;
 
 
 	// Ham nhap mang
 void input ( int arr [], int n )			
{
 	for ( int i = 0; i < n; i++ )
 	{
 		printf ("\n Phan tu thu %d la: " , i+1 );
 		scanf  ("%d" , &a[i] );
	}
}

	// Ham xuat mang
 void output ( int arr [], int n )						
{
	printf ("\n Danh sach mag: \n");
	
 	for ( int i = 0; i < n; i++ )
 	{
 		printf (" %5d " , a{i} );
	}
}
 
	// Ham them phan tu vao mang
 void insert ( int arr [], int n, int k, int x )	
{
	n++;
	int b []; 			// mang phu de thay the
	
	for ( int i = 0; i < n; i++ )
	{
		if ( i < k )  			b [i] = arr [i];
		else  if ( i == k ) 		b [i] = x;
			  else 				b [i] = arr [i-1]; 	
	}
		
	for ( int i = 0; i < n; i++ )
	{
		arr [i] = b[i];
	}
}
 
 	// Ham xoa phan tu khoi mang
 void delete ( int arr [], int n, int k )	
{
	n--;
	int b [];
	
	for ( int i = 0; i < n; i++ )
	{
		if ( i < k ) 			 b [i] = arr [i];
		else 					 b [i] = arr [i+1]; 			
	}
	
	for ( int i = 0; i < n; i++ )
	{
		arr [i] = b [i];
	}
}
 
 	// Ham sap xep mang theo thu tu tang dan
 void sort   ( int arr [], int n )				
{
	printf ("\n Mang tang dan la: \n");
 	for ( int i = 0; i < n; i++ )
 	{
 		int j = i+1;
 		if ( arr [i] < arr [j] ) 
 		{
 			int t = a [i];
 			a [i] = a [j];
 			a [j] = a [i];
		}
		printf (" %5d " , a [i] );
	}
}   
  
  
  	// Ham main
 int main ()										
{
	int arr [Max];
	
	do
	{
		printf ("\n So luong phan tu mang cua ban la: ");
		scanf  ("%d" , &n );
	}
	while ( n < 0 || n > Max );
	
	input ( m, n );
	output ( m, n );
	insert ( m, n, 3, 5 );
	delete ( m, n, 4 );
	sort  ( m, n );
	
	return 0;
}

