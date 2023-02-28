#include<stdio.h>
#include<conio.h>
struct HONSO{
	int songuyen;
	int tu;
	int mau;
};
typedef struct HONSO hs;
void nhapHonSo(hs &n)
{
	printf("nhap so nguyen:");
	scanf("%d", n.songuyen);
	printf("nhap tu so:");
	scanf("%d",n.tu);
	printf("nhap mau so:");
	scanf("%d",n.mau);
	
}
void xuatHonSo(hs &n)
{
	printf("%d%d%d",n.songuyen,n.tu,n.mau);
}
int main()
{
	hs m;
	nhapHonSo(m);
	xuatHonSo(m);
	getch();
	return 0;
}
