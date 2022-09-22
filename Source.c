#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int n, m;
	puts(" Введите число");
	scanf("%d", &n);
	printf("Выведенно число %d\n\t ", n);

	puts("Введите 2 число\n\t");
	scanf("%d", &m);
	printf("Выведенно число %d\n\t ", m);
	printf("Сумма = %d , Разность = %d, Произведение = %d, Частное = %d, Остаток = %d",
		n + m, n - m, n * m, n / m, n % m);
	puts("***************************");
	int z;
	float r1, r2;
	puts("Введите значение градусов по Цельсию");
	scanf(" %d", &z);
	r1 = (z * 9. / 5) + 32;
	r2 = z + 273;
	printf("Градусы по Фарингейту %.2f\n", r1);
	printf("Градусы по Кельвину %.f", r2);
	puts("**************************");
	int   d;

	float d1, d2;
	puts("Введите значение для рассчёта");
	scanf("%d", &d);
	d1 = D * d;
	d2 = P * d;
	printf(" % d дюймов – это % .2f см\n", d, d1);
	printf(" % d пулгада – это % .7f см", d, d2);
	puts("*************************");
	int a, b, c1, c2, c3;
	puts("Введите число а");
	scanf("%d", &a);
	puts("Введите число b");
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