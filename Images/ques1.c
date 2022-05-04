#include <stdio.h>
#include <math.h>
void decToBin(int n)
{
	int r, rev = 0, i = 0;
	while (n > 0)
	{
		r = n % 2;
		rev = rev + r * pow(10, i++);
		n /= 2;
	}
	printf("Decimal to Binary form: %d \n", rev);
}
void decToOct(int n)
{
	int r, rev = 0, i = 0;
	while (n > 0)
	{
		r = n % 8;
		rev = rev + r * pow(10, i++);
		n /= 8;
	}
	printf("Decimal to Octal form: %d \n", rev);
}
void binToDec(int n)
{
	int r, rev = 0, i = 0;
	while (n > 0)
	{
		r = n % 10;
		rev = rev + r * pow(2, i++);
		n /= 10;
	}
	printf("Binary to Decimal form: %d\n", rev);
}
void octToDec(int n)
{
	int r, rev = 0, i = 0;
	while (n > 0)
	{
		r = n % 10;
		rev = rev + r * pow(8, i++);
		n /= 10;
	}
	printf("Octal to Decimal form: %d \n", rev);
}
void binToOct(int n)
{
	int r, rev = 0, i = 0;
	while (n > 0)
	{
		r = n % 10;
		rev = rev + r * pow(2, i++);
		n /= 10;
	}
	n = rev;
	i = 0;
	rev = 0;
	while (n > 0)
	{
		r = n % 8;
		rev = rev + r * pow(10, i++);
		n /= 8;
	}
	printf("Binary to Octal form: %d \n", rev);
}
void octToBin(int n)
{
	int r, rev = 0, i = 0;
	while (n > 0)
	{
		r = n % 10;
		rev = rev + r * pow(8, i++);
		n /= 10;
	}
	n = rev;
	i = 0;
	rev = 0;
	while (n > 0)
	{
		r = n % 2;
		rev = rev + r * pow(10, i++);
		n /= 2;
	}
	printf("Octal to Binary form: %d\n", rev);
}
int main()
{
	int base, n, c, flag = 0, temp;
	do
	{
		flag = 0;
		printf("Enter base value of number: \n");
		scanf("%d", &base);
		switch (base)
		{
		case 2:
		case 8:
		case 10:
			printf("Enter a number: \n");
			scanf("%d", &n);
			temp = n;
			if (base == 2)
			{
				while (temp > 0)
				{
					int r = temp % 10;
					if (!(r == 1 || r == 0))
					{
						flag = 1;
						printf("INVALID binary form \n");
						break;
					}
					temp /= 10;
				}
			}
			if (flag == 1)
				break;
			printf("1 Conversion To Binary \n");
			printf("2 Conversion To Octal \n");
			printf("3 Conversion To Decimal \n");
			printf("0 For EXIT \n");
			printf("Enter your choice to which base you want to convert: \n");
			scanf("%d", &c);
			if ((base == 2 && c == 1) || (base == 8 && c == 2) || (base == 10 && c == 3))
				printf("Base value of entered number and base to which you want to convert both are same");
			else if (base == 2 && c == 2)
				binToOct(n);
			else if (base == 2 && c == 3)
				binToDec(n);
			else if (base == 8 && c == 1)
				octToBin(n);
			else if (base == 8 && c == 3)
				octToDec(n);
			else if (base == 10 && c == 1)
				decToBin(n);
			else if (base == 10 && c == 2)
				decToOct(n);
			else if (c == 0)
				printf("...... \n");
			else
				printf("INVALID option \n");
			break;
		default:
			printf("INVALID base value \n");
		}
	} while (c != 0 || flag == 1);
	return 0;
}
