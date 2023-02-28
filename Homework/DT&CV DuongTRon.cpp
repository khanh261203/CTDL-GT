#include<stdio.h>
#include<conio.h>
struct Diem{
	int x;
	int y;
};
typedef struct Diem d;
void nhapDiem(d &n)
{
	printf("nhap diem x:");
	scanf("%d", n.x);
	printf("nhap diem y:");
	scanf("%d",n.y);
}
void xuatDiem(d &n)
{
	printf("%d%d",n.x,n.y);
}
struct DuongTron {
	d i;
	float r;
};
typedef struct DuongTron dtron;
void nhapDuongTron(dtron dt)
{
	printf("nhap vao tam duong trong:");
	nhapDiem(dt.i);
	printf("nhap ban kinh:");
	scanf("%3f",dt.r);
	
}
void xuatDuongTron(dtron dt){
	printf("xuat tam i:");
	xuatDiem(dt.i);
	printf("xuat ban kinh:",dt.r);
	
	}

float DTDuongTron(dtron dt)
	{
		return 3.14*dt.r*dt.r;
	}
float CVDuongTron(dtron dt)
{
	return 2*3.14*dt.r;
}
int main()
{
	d n;
	dtron dt;
	nhapDuongTron(dt);
	xuatDuongTron(dt);
	DTDuongTron(dt);
	CVDuongTron(dt);
	
	getch();
	return 0;
}
