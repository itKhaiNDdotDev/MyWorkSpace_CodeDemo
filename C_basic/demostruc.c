 #include <stdio.h>
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
 
 
 // Nhap ngay thang phu hop
void ngaythang ()
{
	int x, y, z;
	
	 // Nhap nam
	printf (" Nhap nam: ");			scanf ("%d" , &z );
	
	 // Nhap thang 1-12
	do
	{
		printf (" Nhap thang: ");		scanf ("%d" , &y );
	}
	while (  y < 1  ||  y > 12  );	
	
	 // Nhap ngay
	 // Thang co 31 ngay		1,3,5,7,8,10,12
	if (  y == 1  ||  y == 3  ||  y == 5  ||  y == 7  ||  y == 8  ||  y == 10  ||  y == 12  )
	{
		do
		{
			printf (" Nhap ngay: ");		scanf ("%d" , &x );
	
		}
		while (  x < 1  ||  x > 31  );	
	}	
	 // THang co 30 ngay 4,6.9,11
	if (  y ==  4  ||  y == 6  ||  y ==  9  ||  y == 11  ) 
	{
		do
		{
			printf (" Nhap ngay: ");		scanf ("%d" , &x );
	
		}
		while (  x < 1  ||  x > 30  );	
	}	
	 // Thang 2 co 28 ngay, 29 ngay (Nam Nhuan)
	if (  y == 2  &&  z%4 == 0  )
	{
			do
		{
			printf (" Nhap ngay: ");		scanf ("%d" , &x );
	
		}
		while (  x < 1  ||  x > 28  );	
	}
	if (  y == 2  &&  z%4 != 0  )
	{
			do
		{
			printf (" Nhap ngay: ");		scanf ("%d" , &x );
	
		}
		while (  x < 1  ||  x > 29  );	
	}		
	
	printf ("\n Ngay thang nam la:  %d/%d/%d " , x, y, z );
} 
 
 
 // Nhap danh sach SV
void inp ( sv dssv[], int n ) 
{
	printf ("\n Nhap thong tin cac sinh vien: \n");
	
	for ( int i = 0; i < n; i++ )
	{
		printf ("\n %d. " , i+1 );
		
		printf ("\n MSSV: ");			scanf ("%d" , &dssv[i].mssv );
		
		printf(" Ho va ten: ");		fflush (stdin);		gets ( dssv[i].hoten );
		
		printf (" Ngay sinh: \n");	
		printf ("\t Ngay: ");			scanf ("%d" , &dssv[i].ngaysinh.ngay );
		printf ("\t Thng: ");			scanf ("%d" , &dssv[i].ngaysinh.thang );
		printf ("\t Nam: ");			scanf ("%d" , &dssv[i].ngaysinh.nam );	
		
		printf (" Nhap diem: \n");
		printf ("\t Toan: ");			scanf ("%f" , &dssv[i].dtoan );
		printf ("\t Vat li: ");			scanf ("%f" , &dssv[i].dvly );
		printf ("\t Hoa hoc: ");		scanf ("%f" , &dssv[i].dhoa );	
		
		printf (" \n ");			
	}
}


 // In ra danh sach SV thu duoc
void oup ( sv dssv[], int n )
{
	for ( int i = 0; i < n; i++ )
	{
		printf("\n %d. \t MSSV: %d \t -	Ho va ten: %s \t - Ngay sinh: %d/%d/%d \t - Toan: %0.2f \t - Vat Ly: %0.2f \t - Hoa Hoc: %0.2f " ,
				i+1,
				dssv[i].mssv,
				dssv[i].hoten,
				dssv[i].ngaysinh.ngay,
				dssv[i].ngaysinh.thang,
				dssv[i].ngaysinh.nam,
				dssv[i].dtoan,
				dssv[i].dvly,
				dssv[i].dhoa	);
	}
}

 
 // Gia hon: 1			Tre hon: 0
int giahonko ( datetime d1, datetime d2 )
{
	if ( d1.nam > d2.nam )				return 0;
	else if ( d1.nam < d2.nam )			return 1;
	else if (  d1.nam == d2.nam )
	{
		if ( d1.thang > d2.thang )				return 0;
		else if ( d1.thang < d2.thang )			return 1;
		else if (  d1.thang == d2.thang )
		{
			if ( d1.ngay > d2.ngay )				return 0;
			else 									return 1;
		}
	}
}


 // Neu truoc gia hon sau thi doi cho ---- Tuoi tang dan (Nam sinh giam dan)
void uptuoi ( sv dssv[], int n )
{
	for ( int i = 0; i < n-1; i++ )
	{
		for ( int j = i+1; j < n; j++ )
		{
			if (  giahonko ( dssv[i].ngaysinh, dssv[j].ngaysinh )  ==  1  )
			{
				sv t = dssv[i];
				dssv[i] = dssv[j];
				dssv[j] = t;
			}
		}
	}
}


 // Diem TB cao hon: 1			Diem TB thap hon: 0
float dtb ( sv t )
{
	float tb = ( t.dtoan + t.dvly + t.dhoa ) / 3;
	return tb;
} 


 // Diem truoc khong cao bang sau thi doi cho ------- Diem giam dan tu tren xuong
void downdiem ( sv dssv[], int n )
{
	for ( int i = 0; i < n-1; i++ )
	{
		for ( int j = i+1; j < n; j++ )
		{
			if (  dtb ( dssv[i] )  <  dtb ( dssv[j] )  )
			{
				sv t = dssv[i];
				dssv[i] = dssv[j];
				dssv[j] = t;
			}
		}
	}
}


 // Sap xep ten
void sxten (sv dssv[], int n)
{
	for ( int i = 0; i < n-1; i++ )
	{
		for ( int j = i+1; j < n; j++ )
		{
			if ( strcmp (dssv[i].hoten, dssv[j].hoten) == 1 )
			{
				sv t = dssv[i];
				dssv[i] = dssv[j];
				dssv[j] = t;
			}
		}
	}
} 
 
 
  
 //MAIN here!!!
int main ()
{
	sv dssv[100];
	int n;
	
	printf ("\n So luong sinh vien: ");			scanf ("%d" , &n );
	
	inp ( dssv, n );
//	uptuoi ( dssv, n );
// 	downdiem ( dssv, n );
	sxten ( dssv, n );
	oup ( dssv, n );
//	ngaythang ();

	return 0;
}

