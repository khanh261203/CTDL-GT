#include<stdio.h>
#include<conio.h>
struct Diemkgian{
	int x;
	int y;
	int z;
};
typedef struct Diemkgian dkg;
void nhapDiemKG(dkg &n)
{
	printf("nhap diem x:");
	scanf("%d", n.x);
	printf("nhap y:");
	scanf("%d",n.y);
	printf("nhap diem z:");
	scanf("%d",n.z);
}
void xuatDiemKG(dkg &n)
{
	printf("%d%d%d",n.x,n.y,n.z);
}
int main()
{
	dkg m;
	nhapDiemKG(m);
	xuatDiemKG(m);
	getch();
	return 0;
}
