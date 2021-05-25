 #include <stdio.h>
 
 #define	MAX 100
 
 
 
 /* Ham kiem tra xem phai so nguyen to khong
 		Tra ve:
 			1. La so nguyen to.
 			0. Khong la so nguyen to
 */			
int snt ( int n )
{
	if ( n < 2 ) 		return 0;
	
	int kt = 0;
	for ( int i = 1; i <= n; i++ )
	{
		if ( n % i == 0 )
			kt++;
	}
	if ( kt == 2 )		return 1;
	
	return 0;
}


// Ham nhap cac phan tu vao mang tu ban phim
void inp ( int arr[], int n )
{
	printf ("\n Nhap danh sach phan tu cua mang: \n");
	
	for ( int i = 0; i < n; i++ )
	{
		scanf ("%d" , &arr[i] );
	}
}


// Ham in danh sach mang thu duoc ra man hinh
void oup ( int arr[], int n )
{
	printf ("\n\n Danh sach mang cua ban la: ");
	for ( int i = 0; i < n; i++ )
	{
		printf ("\n Phan tu thu %d la: %d " , i+1, arr[i] );
	}
}


// Ham tim va in ra cac so nguyen to trong mang
void fnt ( int arr[], int n )
{
	printf ("\n\n Cac phan tu cua mang la so nguyen to gom: ");
	
	int ct = 0;
	
	for ( int i = 0; i < n; i++ )
	{
		if ( snt ( arr[i] ) == 1 )
		{
			printf ("\n Phan tu thu %d: %d " , i+1, arr[i] );
			ct++;
		}	
	}
	
	printf ("\n Mang co %d so nguyen to " , ct );
}


// Ham dao nguoc cac phan tu trong mang
void rev ( int arr[], int n )
{
	printf ("\n\n Danh sach mang dao nguoc: ");
	
	for ( int i = 0; i < n; i++ )
	{
		for ( int j = n-1; j > i; j-- )
		{
		int k;
		
		k = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = k;
		}
	}
	for ( int i = 0; i < n; i++ )
	{
		printf (" %7d " , arr[i] );
	}	
}


// Ham sap xep cac phan tu trong mang theo thu tu tang dan
void upr ( int arr[], int n )
{
	printf ("\n\n Cac phan tu mang theo thu tu tang dan la: ");
	
	for ( int i = 0; i < n; i++ )
	{
		for ( int j = i; j < n; j++ )
		{
			if ( arr[i] > arr[j] )
			{
				int k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
			}
		}
		
		printf (" %7d " , arr[i] );
	}
}


// Ham tim MIN va MAX trong mang
void minmax ( int arr[], int n )
{
	int min = arr[0], max = arr[0];
	
	for ( int i = 0; i < n; i++ )
	{
		if ( max < arr[i] )		max = arr[i];
		if ( min > arr[i] )		min = arr[i];
	}
	
	printf ("\n\n Gia tri lon nhat trong mang la: %d   \n Gia tri nho nhat trong mang la: %d " , max, min );
}


// Ham in ra danh sach phan tu chan va phan tu le
void chl ( int arr[], int n )
{
	//  le
	printf ("\n\n Danh sach phan tu le la: ");
	for ( int i = 0; i < n; i++ )
	{
		if ( arr[i] % 2 == 1 )	printf ("\n\t Phan tu thu %d: %d " , i+1, arr[i] );
	}
	
	//  chan
		printf ("\n Danh sach phan tu chan la: ");
	for ( int i = 0; i < n; i++ )
	{
		if ( arr[i] % 2 == 0 )	printf ("\n\t  Phan tu thu %d: %d " , i+1, arr[i] );
	}
}


// Ham dao nguoc cac phan tu chan roi in ra danh sach mang sau do
void rvc ( int arr[], int n )
{
	printf ("\n Danh sach mang sau khi dao nguoc cac phan tu chan la: ");
	
	int j = n-1;
	
	for ( int i = 0;  i < j; i++ )
	{	
		if ( arr[i] % 2 == 0  &&  arr[j] % 2 == 0 )
		{
			if ( arr[i] == arr[j] )		continue;
			else
			{
				int k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
				
				i++; 	j--;
			}
		}	
		else
		{
			if ( arr[i] % 2 == 1 && arr[j] % 2 == 0 )		continue;
			else
			{
				if ( arr[i] % 2 == 0 && arr[j] % 2 == 1 )			{	j--;	i--;	}
				else
				{
					if ( arr[i] % 2 == 1 && arr[j] % 2 == 1 )		{	j--;	}
				}
			}
		}	
	}
	
	for ( int i = 0; i < n; i++ )
	{
		printf (" %7d " , arr[i] );
	}	
}


void add ( int arr[], int n, int k, int x )
{
	printf ("\n\n Tham so %d vao vi tri %d cua mang, danh sach mang moi la: " , x, k);
	
	int b[n+1];
	
	n++;
	
	for ( int i = 0; i < n; i++ )
	{
		if ( i < k ) 		b[i] = arr[i];
		if ( i == k )		b[i] = x;
		if ( i > k )		b[i] = arr[i-1];
		
		printf ("\n %7d ", b[i] );
	}
}


void del ( int arr[], int n, int k )
{
	printf ("\n\n Xoa phan tu o vi tri %d cua mang, danh sach mang moi la: " , k);
	
	int b[n-1];
	
	n--;
	
	for ( int i = 0; i < n; i++ )
	{
		if ( i < k ) 		b[i] = arr[i];
		if ( i >= k )		b[i] = arr[i+1];
		
		printf ("\n %7d ", b[i] );
	}
}
 
 
 
 // "MAIN" here!!!
int main ()
{
	int a[MAX], n;
	
	printf ("\n Nhap so luong phan tu mang ");
	scanf ("%d" , &n );
	
	inp ( a, n );
	oup ( a, n );
	fnt ( a, n );
	rev ( a, n );
	upr ( a, n );
	minmax (  a, n );
	chl ( a, n );
	add ( a, n, 3, 9669 );
	del ( a, n, 4 );
	rvc ( a, n );
	
	return 0;
}

