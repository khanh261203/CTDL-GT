#include<stdio.h>
#include<conio.h>
struct DONTHUC {
int a;
int n;	
};
typedef struct DONTHUC donthuc;
void nhap(donthuc &dt)
{
	printf("nhap he so a:");
	scanf("%d",dt.a);
	printf("nhap so mu n:");
	scanf("%d",dt.n);
}
void xuat(donthuc &dt)
{
	printf("%dx^%d",dt.a,dt.n);
	
}
int main()
{
donthuc dt;
nhap(dt);
xuat(dt);
getch();
return 0;
}
