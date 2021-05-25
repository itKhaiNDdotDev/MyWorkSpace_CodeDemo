#include<stdio.h>
#include<stdlib.h>

struct DateTime 
{	
	int day;
	int month;
	int year;
} ;
 typedef struct DateTime DateTime;
 struct Student 
{
	int maSV;
	char hoten[100];
	DateTime birthday;
	float dToan;
	float dLy;
	float dHoa;	
} ;
typedef struct Student Student;

void input(Student *s, int n)
{
	
	int i ;
	for(i =0;i<n;i++)
	{
		printf("\nNhap ma sinh vien:");
				scanf("%d", &((s+i)->maSV));	
		printf("\nNhap ho ten sinh vien:");
				fflush(stdin);
				gets( (s+i)->hoten);
		printf("\nNhap vao ngay:");
				scanf("%d", &((s+i)->birthday.day) );
		printf("\nNhap vao thang:");
				scanf("%d",&((s+i)->birthday.month) );
		printf("\nNhap vao nam");
				scanf("%d", &((s+i)->birthday.year));
		printf("\nNhap vao diem toan:");
				scanf("%f",&((s+i)->dToan));
		printf("\nNhap vao diem ly:");
				scanf("%f",&((s+i)->dLy));
		printf("\nNhap vao diem hoa:");
				scanf("%f",&((s+i)->dHoa));
	}
	
	
}
void output(Student *s, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nMaSV: %d - Hoten: %s - Ngaysinh: %d / %d /%d - TOan: %f, Ly: %f, Hoa: %f",
		(*(s+i)).maSV,
		(*(s+i)).hoten, 
		(*(s+i)).birthday.day,
		(*(s+i)).birthday.month,
		(*(s+i)).birthday.year,
		(*(s+i)).dToan,
		(*(s+i)).dLy,
		(*(s+i)).dHoa);
	}
	
}
void copy(Student *a, Student *b)
{
	a->maSV = b->maSV;
	strcpy(a->hoten, b->hoten);
	a->birthday.day = b->birthday.day;
	a->birthday.month = b->birthday.month;
	a->birthday.year = b->birthday.year;
	a->dToan = b->dToan;
	a->dLy = b->dLy;
	a->dHoa = b->dHoa;
	
	
}
void removeK(Student *s, int n , int k)
{
	
}

void insertK (Student *s, int *n, int k , Student x)
{
	*n = *n + 1;
	Student *b;
	s= (Student*) realloc(s, *n);
	//a = (int*)realloc(a, *n);
	b = (Student*) malloc(*n * sizeof(Student));
	int i;
	for(i = 0;i<*n ;i++)
	{
		if(i<k)
		{
			copy(b+i, s+i);
		}else if(i==k)
		{
			copy(b+i, &x);
		}else
		{
			copy(b+i, s+i-1);
		}
	}
	
	for(i=0;i<*n;i++)
	{
		copy(s+i, b+i);
	}
	free(b);
}


int main()
{
	//int *p;
	
	Student *students;
	int n ;
	printf("\nNhap so luong sinh vien:");
	scanf("%d",&n);
	// p = (int*) malloc(n* sizeof(int));
	students = (Student*)malloc(n*sizeof(Student));
	
	
	
	input(students, n);
	
	
	Student temp;
	printf("\nNhap thong tin sinh vien chen vao:\n");
	
		printf("\nNhap ma sinh vien:");
				scanf("%d", &(temp.maSV));	
		printf("\nNhap ho ten sinh vien:");
				fflush(stdin);
				gets( temp.hoten);
		printf("\nNhap vao ngay:");
				scanf("%d", &(temp.birthday.day) );
		printf("\nNhap vao thang:");
				scanf("%d",&(temp.birthday.month) );
		printf("\nNhap vao nam");
				scanf("%d", &(temp.birthday.year));
		printf("\nNhap vao diem toan:");
				scanf("%f",&(temp.dToan));
		printf("\nNhap vao diem ly:");
				scanf("%f",&(temp.dLy));
		printf("\nNhap vao diem hoa:");
				scanf("%f",&(temp.dHoa));
				
	insertK(students,&n,1, temp);
	printf("\nXuat Thong tin SV sau khi chen:\n");
	output(students, n);
	free(students);
	
	return 1;
}
