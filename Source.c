#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int n, m;
	puts(" ������� �����");
	scanf("%d", &n);
	printf("��������� ����� %d\n\t ", n);

	puts("������� 2 �����\n\t");
	scanf("%d", &m);
	printf("��������� ����� %d\n\t ", m);
	printf("����� = %d , �������� = %d, ������������ = %d, ������� = %d, ������� = %d",
		n + m, n - m, n * m, n / m, n % m);
	puts("***************************");
	int z;
	float r1, r2;
	puts("������� �������� �������� �� �������");
	scanf(" %d", &z);
	r1 = (z * 9. / 5) + 32;
	r2 = z + 273;
	printf("������� �� ���������� %.2f\n", r1);
	printf("������� �� �������� %.f", r2);
	puts("**************************");
	int   d;

	float d1, d2;
	puts("������� �������� ��� ��������");
	scanf("%d", &d);
	d1 = D * d;
	d2 = P * d;
	printf(" % d ������ � ��� % .2f ��\n", d, d1);
	printf(" % d ������� � ��� % .7f ��", d, d2);
	puts("*************************");
	int a, b, c1, c2, c3;
	puts("������� ����� �");
	scanf("%d", &a);
	puts("������� ����� b");
	scanf("%d", &b);
	c1 = a * b;
	c2 = a + b;
	c3 = a - b;
	printf("-------------------------------\n");
	printf("|  a *  b |  a +  b |  a -  b |\n");
	printf("-------------------------------\n");
	printf("| %2d * %2d | %2d + %2d | %2d - %2d |\n", a, b, a, b, a, b);
	printf("-------------------------------\n");
	printf("|    %2d   |   %2d    |    %2d   |\n", c1, c2, c3);
}