#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    int c = a + b;
//    printf("%d\n", c);
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	float t = 0;
//	int n = 0;
//	scanf("%f%d", &t, &n);
//	float a = t / n;
//	printf("%.3f\n%d", a,n*2);
//	return 0;
//}

//int main()
//{
//	char a;
//	scanf("%c", &a);
//	int c = a;
//	int d = c - 32;
//	printf("%c", d);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d = 0;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	int e = 0;
//	int f = 0;
//	if (b <= d)
//	{
//		f = d - b;
//		e = c - a;
//	}
//	else
//	{
//		f = d + 60 - b;
//		e = c - 1 - a;
//	}
//	printf("%d %d", e, f);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int h = 0;
//	int r = 0;
//	scanf("%d%d", &h, &r);
//	double v = h * r * r * 3.14;
//	int i = 0;
//	double n = 20000;
//	do
//	{
//		n -= v;
//		i++;
//	}while (n >= v);
//	if (20000 - i * v < v)
//	{
//		i++;
//		printf("%d", i);
//	}
//	else
//	{
//		printf("%d", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int h = 0;
//	int r = 0;
//	int i = 0;
//	scanf("%d%d", &h, &r);
//	double v = h * r * r * 3.14;
//	double n = 20000;
//	i = n / v + 1;
//	printf("%d", i);
//	return 0;
//}

//#include<stdio.h>
//int main() 
//{
//	int a = 0;
//	int b,c,d,e= 0;
//	scanf("%d", &a);
//	if (a%2 == 0 && a <= 12&& a>=4)
//	{
//		b = 1;
//	}
//	else
//	{
//		b = 0;
//	}
//	if (a%2 == 0||(a<=12&&a>=4))
//	{
//		c = 1;
//	}
//	else
//	{
//		c = 0;
//	}
//	if ((a%2 == 0&&a<4&&a>12)||(a%2==1&&a<=12&&a>=4))
//	{
//		d = 1;
//	}
//	else
//	{
//		d = 0;
//	}
//	if (a%2==1&&4<a&&a>12)
//	{
//		e = 1;
//	}
//	else
//	{
//		e = 0;
//	}
//	printf("%d %d %d %d", b, c, d, e);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int f = 0;
//	int g = 0;
//	int b, c, d, e = 0;
//	scanf("%d", &a);
//	f = a % 2 == 0;
//	g = 4 <= a <= 12;
//	if (f && g)
//	{
//		b = 1;
//	}
//	else
//	{
//		b = 0;
//	}
//	if (f || g)
//	{
//		c = 1;
//	}
//	else
//	{
//		c = 0;
//	}
//	if ((f && !g) || (!f && g))
//	{
//		d = 1;
//	}
//	else
//	{
//		d = 0;
//	}
//	if (!f && !g)
//	{
//		e = 1;
//	}
//	else
//	{
//		e = 0;
//	}
//	printf("%d %d %d %d", b, c, d, e);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int arr1[4];
//	char arr2[4];
//	int i, j, k;
//	scanf("%d %d %d", &arr1[0], &arr1[1], &arr1[2]);
//	scanf("%s",&arr2);
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2-i; j++)
//		{
//			if (arr1[j] > arr1[j + 1])
//			{
//				k = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = k;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		switch (arr2[i])
//		{
//		case 'A':
//				printf("%d", arr1[0]);
//				break;
//		case 'B':
//				printf("%d", arr1[1]);
//				break;
//		case 'C':				
//				printf("%d", arr1[2]);
//				break;
//		}
//		printf(" ");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int arr1[4];
//    char string[4];
//    int i, j, k;
//    scanf("%d %d %d", &arr1[0], &arr1[1], &arr1[2]);
//    scanf("%s", string);
//    for (i = 0; i < 2; i++)
//    {
//        for (j = 0; j < 2 - i ; j++)
//        {
//            if (arr1[j] > arr1[j + 1])
//            {
//                k = arr1[j];
//                arr1[j] = arr1[j + 1];
//                arr1[j + 1] = k;
//            }
//        }
//    }
//    for (i = 0; i < 3; i++)
//    {
//        switch (string[i])
//        {
//        case 'A':
//            printf("%d", arr1[0]);
//            break;
//        case 'B':
//            printf("%d", arr1[1]);
//            break;
//        case 'C':
//            printf("%d", arr1[2]);
//            break;
//        }
//        printf(" ");
//    }
//    return 0;
//
//
//}


//#include<stdio.h>
//
//int main()
//{
//	int a = 31;
//	int b = 30;
//	int c = 29;
//	int d = 28;
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	if (year % 4 == 0)
//	{
//		switch (month)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			printf("%d", a);
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			printf("%d", b);
//			break;
//		case 2:
//			printf("%d", c);
//
//		}
//	}
//	else
//	{
//		switch (month)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			printf("%d", a);
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			printf("%d", b);
//			break;
//		case 2:
//			printf("%d", c);
//
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 1;; i++)
//	{
//		if (a == 1)
//			break;
//		 a /= 2;
//	}
//	printf("%d", i);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	do
//	{
//		a /= 2;
//		i++;
//	} while (a >= 1);
//	printf("%d", i);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 1;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < a - i; j++)
//		{
//			printf("%02d", b);
//			b++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int i = 0;
//	int count = 0;
//	for (i = 1;i<=a; i++)
//	{
//		int n = i;
//		while (n)
//		{
//			if (n % 10 == b)
//			{
//				count++;
//			}
//			n /= 10;
//		}
//	}
//	printf("%d", count);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int c = 0;
//	int arr[101];
//	while (1)
//	{
//		arr[i] = c;
//		scanf("%d", &c);
//		if (c == 0)
//		{
//			break;
//		}
//		arr[++i]=c;
//	}
//	while (i != 0)
//	{
//		printf("%d ", arr[i--]);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int i = 0;
//	int arr[1000];
//	scanf("%d", &a);
//	arr[i] = a;
//	while(a>1)
//	{
//		if (a % 2 == 1)
//		{
//			a = a * 3 + 1;
//		}
//		else
//		{
//			a /= 2;
//		}
//		arr[++i] = a;
//	
//	}
//	for (int j = i; j>=0; j--)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{
	int a = 0;
	int k = 0;
	int arr[100];
	scanf("%d", &a);
	for(int i = 0;i< a; i++)  
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < a; i++)
	{
		k = 0;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i])
			{
				k++;
			}
		}
		printf("%d ", k);
	}
	return 0;
}


//#include<stdio.h>
//
//int main()
//{
//
//	return 0;
//}