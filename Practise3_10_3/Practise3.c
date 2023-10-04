#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int arr[1000];
//	int temp = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = 0;i< b; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int j = 0;j< b; j++)
//	{
//		for (int k = 0; k < j - 1; k++)
//		{
//			if (arr[j] < arr[k])
//			{
//				temp = arr[j];
//				arr[j] = arr[k];
//				arr[k] = temp;
//			}
//		}
//	}
//	for (int h = 0;h< b; h++)
//	{
//		printf("%d ", arr[h]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a, b,temp,i;
//	int arr[10000];
//	scanf("%d %d", &a, &b);
//	for (i = 0; i < b; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i < 10000; i++)
//	{
//		for (i = 1; i < b; i++)
//		{
//
//		}
//	}
//	return 0;
//}

//int a, b, i, j;
//int temp;
//int arr[1000] = {0};
//int main() {
//    scanf("%d %d", &a, &b);
//    for (i = 1; i <= b; i++) 
//    {
//        scanf("%d", &temp);
//        arr[temp]++;
//    }
//    for (i = 1; i < 1000; i++) 
//    {
//        for (j = 1; j <= arr[i]; j++) 
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}




//int main()
//{
//	int a ,i, j = 0;
//	int arr[21][21] = { 0 };
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		arr[i][1] = arr[i][i] = 1;
//	}
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int a, b, c, d, e, f = 0;
//	double g, h, i, j = 0.0;
//	scanf("%d %d", &a, &b);
//	scanf("%d %d", &c, &d);
//	scanf("%d %d", &e, &f);
//	g = sqrt((a - c) * (a - c) + (b - d) * (b - d));
//	h = sqrt((a - e) * (a - e) + (b - f) * (b - f));
//	i = sqrt((c - e) * (c - e) + (d - f) * (d - f));
//	j = g + h + i;
//	printf("%.2f", j);
//	return 0;
//}

//int function(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		int a;
//		a = n * function(n - 1);
//		return a;
//	}
//}
//int main()
//{
//	int n,m;
//	scanf("%d", &n);
//	m = function(n);
//	printf("%d", m);
//	return 0;
//}


//typedef struct Stu
//{
//	char name[40];
//	short age;
//	int NOPI;
//}stu;
//
//void Print1(stu temp)
//{
//	printf("%s %hd %d\n", temp.name, temp.age, temp.NOPI);
//}
//
//
//int main()
//{
//	char a[40],d[40],g[40];
//	short b,e,h;
//	int c,f,i;
//	scanf("%s %hd %d", &a, &b, &c);
//	scanf("%s %hd %d", &d, &e, &f);
//	scanf("%s %hd %d", &g, &h, &i);
//	stu s = { a,b,c };
//	Print1(s);
//	stu t = { d,e,f };
//	Print1(t);
//	stu x = { g,h,i };
//	Print1(x);
//	return 0;
//}


//#include<stdio.h>
//struct stu
//{
//	char name[100];
//	int ch;
//	int math;
//	int en;
//};
//int main()
//{
//	int n;
//	int t = 0;
//	scanf("%d", &n);
//	struct stu s[20] = {0};
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d %d %d", s[i].name, &(s[i].ch), &(s[i].math), &(s[i].en));
//	}
//	int score[20];
//	int max = 0;
//	for (int j = 0; j < n; j++)
//	{
//		score[j] = s[j].ch + s[j].math + s[j].en;
//		if (score[j] > max)
//		{
//			max = score[j];
//			t = j;
//		}
//	}
//	printf("%s %d %d %d", s[t].name, s[t].ch, s[t].math, s[t].en);
////	return 0;
//}


//int main() 
//{
//    int n, m, a[50];
//    double score = 0, max = 0.0;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++) 
//    {
//        for (int j = 0; j < m; j++) 
//        {
//            scanf("%d ", &a[j]);
//            score += a[j];
//        }
//        score = score / 1.0 / m;
//        if (score > max)
//        {
//            max = score;
//            score = 0;
//        }
//    }
//    printf("%.2lf", max);

//}

//#include<stdio.h>
//int main() 
//{
//	int num, f1, f2;
//	scanf("%d", &num);
//	f1 = (num % 2 == 0);
//	f2 = (num > 4 && num <= 12);
//
//	if (f1 && f2)  
//		printf("1 ");
//	else
//		printf("0 ");
//	if (f1 || f2)  
//		printf("1 ");
//	else
//		printf("0 ");
//	if ((!f1 && f2) || (f1 && !f2)) 
//		printf("1 ");
//	else
//		printf("0 ");
//	if (!f1 && !f2)  
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a[3][2];
//    int i, j;
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 2; j++) {
//            scanf("%lf", &a[i][j]);
//        }
//    }
//    double sum = 0;
//    for (i = 0; i < 3; i++) {
//        if (i < 2) {
//            sum += sqrt(pow(a[i][0] - a[i + 1][0], 2) + pow(a[i][1] - a[i + 1][1], 2));
//        }
//        else {
//            sum += sqrt(pow(a[i][0] - a[0][0], 2) + pow(a[i][1] - a[0][1], 2));
//        }
//    }
//    printf("%.2lf", sum);
//    return 0;
//}


//int main()
//{
//	int a = 1;
//	char* pa = (char*) &a;
//	if (*pa == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;//返回1，小端
//	          //返回0，大端
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//	
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}