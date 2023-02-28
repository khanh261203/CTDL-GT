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
int main()
{
	d m;
	nhapDiem(m);
	xuatDiem(m);
	getch();
	return 0;
}
