 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 
 
 // ngay thang nam
struct datetime
{
	int ngay;
	int thang;
	int nam;
};
typedef struct datetime datetime;
  

 // cac thuoc tinh cua sinh vien  
typedef struct sv
{
	int mssv;
	char hoten[100];
	float dtoan;
	float dvly;
	float dhoa;
	datetime ngaysinh;
}	sv; 
 
 

 // Nhap danh sach SV
void inp ( sv *s, int n ) 
{
	printf ("\n Nhap thong tin cac sinh vien: \n");
	
	for ( int i = 0; i < n; i++ )
	{
		printf ("\n %d. " , i+1 );
		
		printf ("\n MSSV: ");			scanf ("%d" , &( (s+i)->mssv )  );
		
		printf(" Ho va ten: ");		fflush (stdin);		gets ( (s+i)->hoten );
		
		printf (" Ngay sinh: \n");	
		printf ("\t Ngay: ");			scanf ("%d" , &(s+i)->ngaysinh.ngay );
		printf ("\t Thng: ");			scanf ("%d" , &(s+i)->ngaysinh.thang );
		printf ("\t Nam: ");			scanf ("%d" , &(s+i)->ngaysinh.nam );	
		
		printf (" Nhap diem: \n");
		printf ("\t Toan: ");			scanf ("%f" , &(s+i)->dtoan );
		printf ("\t Vat li: ");			scanf ("%f" , &(s+i)->dvly );
		printf ("\t Hoa hoc: ");		scanf ("%f" , &(s+i)->dhoa );	
		
		printf (" \n ");			
	}
}


 // In ra danh sach SV thu duoc
void oup ( sv *s, int n )
{
	for ( int i = 0; i < n; i++ )
	{
		printf("\n %d. \t MSSV: %d \t -	Ho va ten: %s \t - Ngay sinh: %d/%d/%d \t - Toan: %0.1f \t - Vat Ly: %0.1f \t - Hoa Hoc: %0.1f " ,
				i+1,
				(*(s+i)).mssv,
				(*(s+i)).hoten,
				(*(s+i)).ngaysinh.ngay,
				(*(s+i)).ngaysinh.thang,
				(*(s+i)).ngaysinh.nam,
				(*(s+i)).dtoan,
				(*(s+i)).dvly,
				(*(s+i)).dhoa	);
	}
} 


void coppy ( sv *a, sv *b )
{
	a->mssv = b->mssv;
	strcpy (a->hoten, b->hoten);
	a->ngaysinh.ngay = b->ngaysinh.ngay;
	a->ngaysinh.thang = b->ngaysinh.thang;
	a->ngaysinh.nam = b->ngaysinh.nam;
	a->dtoan = b->dtoan;
	a->dvly = b->dvly;
	a->dhoa = b->dhoa;
}


void del ( sv *s, int n, int k )
{
	n = n-1;
	
	sv *t;
	
	t = (sv*) malloc (n*sizeof (sv) );
	
	for ( int i = 0; i < n; i++ )
	{
		if ( i < k )		coppy( s+i, t+i);
		if ( i >= k )		coppy( s+i, t+i+1);	
	}
	
	s = (sv*) realloc ( s, n );
	
	for ( int i = 0; i < n; i++ )
	{
		coppy ( s+i, t+i );
	}
	
	free (s);
	free (t);
}


void ins ( sv *s, int n, int k, sv x )
{
	
}
 
 
 
int main ()
{
	sv *dssv;
	int n;
	
	dssv = (sv*) malloc (n*sizeof(sv) );
	
	printf ("\n Nhap so luong sinh vien: ");		scanf ("%d", &n );
	
	inp ( dssv, n );
//	del ( dssv, n, 2 );
	oup ( dssv, n );
	
	free (dssv);
	
	return 0;
} 
