#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}
//00000000 00000000 00000000 00001001 - 原码
//00000000 00000000 00000000 00001001 - 反码
//00000000 00000000 00000000 00001001- 补码 9
//11111111 11111111 11111111 11111111 - 补码 -1
//00000000 00000000 00000000 00001001 - 补码 8（原 反 补 相同）
//


////int main()
////{
////	//int n, a = 0;
////	int arr[100] = { 0 };
////	//scanf("%d", &n);
////	//for (n; n >= 1; n--)
////	//{
////	//	scanf("%d", &arr[a]);
////	//	a++;
////	//}
////	int n = 0;
////	int i = 0;
////	scanf("%d", &n);
////	for (i = 0; i < n; i++)
////	{
////		scanf("%d ", &arr[i]);
////	}
////	printf("%d ", 0);
////	return 0;
////}


//int main()
//{
//	int n, m, i, j, k, temp, t = 0, z= 0;
//	scanf("%d %d", &n, &m);
//	int arr[100][20];
//	double score[100], max;
//	for (i = 0;i<n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			for (k = j + 1; k < m; k++)
//			{
//				if (arr[i][k] < arr[i][j])
//				{
//					temp = arr[i][k];
//					arr[i][k] = arr[i][j];
//					arr[i][j] = temp;
//				}
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 1; j < m-1; j++)
//		{
//			t += arr[i][j];
//		}
//		score[z] = (double)(t/1.0 / (m-2));
//		z++;
//		t = 0;
//	}
//    max = score[0];
//	for (i = 0; i < z; i++)
//	{
//		if (max < score[i])
//		{
//			max = score[i];
//		}
//	}
//	printf("%.2lf", max);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n, m;
//	double count = 0;
//	int mark = 0;
//	double student[100][20];
//	double score[20];
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//			scanf("%lf", &student[i][j]);
//	}
//	for (int i = 0; i < n; i++)//开始排序
//	{
//		for (int j = 0; j < m; j++)
//		{
//			for (int k = j + 1; k < m; k++)
//			{
//				if (student[i][k] < student[i][j])
//				{
//					double temp;
//					temp = student[i][k];
//					student[i][k] = student[i][j];
//					student[i][j] = temp;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)//开始计算平均分
//	{
//		for (int j = 1; j < m - 1; j++)
//		{
//			count = count + student[i][j];
//		}
//		score[mark] = (double)(count / (m - 2));
//		mark += 1;
//		count = 0;
//	}
//	double max = score[0];//开始求最大值
//	for (int i = 0; i < mark; i++)
//	{
//		if (max < score[i])
//			max = score[i];
//	}
//	printf("%.2lf\n", max);
//}


//#include<stdio.h>
//int main()
//{
//	int n, m;
//	int count = 0;
//	int mark = 0;
//	int student[100][20];
//	double score[20];
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//			scanf("%d", &student[i][j]);
//	}
//	for (int i = 0; i < n; i++)//开始排序
//	{
//		for (int j = 0; j < m; j++)
//		{
//			for (int k = j + 1; k < m; k++)
//			{
//				if (student[i][k] < student[i][j])
//				{
//					int temp;
//					temp = student[i][k];
//					student[i][k] = student[i][j];
//					student[i][j] = temp;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)//开始计算平均分
//	{
//		for (int j = 1; j < m - 1; j++)
//		{
//			count = count + student[i][j];
//		}
//		score[mark] = (double)(count / (m - 2));
//		mark += 1;
//		count = 0;
//	}
//	double max = score[0];//开始求最大值
//	for (int i = 0; i < mark; i++)
//	{
//		if (max < score[i])
//			max = score[i];
//	}
//	printf("%.2lf\n", max);
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
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
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
//			printf("%d", d);
//
//		}
//	}
//	return 0;
//}

//typedef struct Stu
//	{
//		char name[20];
//		int ch, en, ma;
//	}stu;
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int max = 0;
//	int k = 0;
//	scanf("%d", &n);
//	stu s[20];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &s[i].name);
//		scanf("%d%d%d",&s[i].ch,&s[i].ma,&s[i].en);
//	}
//	for (i = 0; i < n; i++) 
//	{
//		if (max < s[i].ch + s[i].ma + s[i].en)
//		{
//			max = s[i].ch + s[i].ma + s[i].en;
//			k = i;
//		}
//	}
//	printf("%s %d %d %d", s[k].name, s[k].ch, s[k].ma, s[k].en);
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
//	int t;
//	scanf("%d", &n);
//	struct stu s[20];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d %d %d", &s[i].name, &s[i].ch, &s[i].math, &s[i].en);
//	}
//	int max = 0;
//	for (int j = 0; j < n; j++)
//	{
//		if (max < s[j].ch + s[j].math + s[j].en)
//		{
//			max = score[j];
//			t = j;
//		}
//	}
//	printf("%s %d %d %d", s[t].name, s[t].ch, s[t].math, s[t].en);
//	return 0;
//}