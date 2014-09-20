/*
  文安科技笔试题中智力测试比较多，编程题只有最后一题
  题目是：给出两个数字，一个代表月份，一个代表日期，得到这一天是这年的第几天，不考虑润年，2月28天，
  函数原型是int getdays(int month, int day);
  很明显这个问题比较简单，但是我觉得出题人的原意并不是考研答题者的算法能力，而是考验答题人的编程规范程度，
  以及考虑问题是否全面，细致。
  
  很遗憾，我就是那个笨蛋，直接一个for循环，直接交卷。
*/

#include <stdio.h>

int getdays(int month, int day)
{
	int daysofmonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if(month > 12 || month < 1)
	{
		printf("Wrong month.\n");
		return -1;
	}
	if(day < 0 || day > daysofmonth[month-1])
	{
		printf("Wrong day.\n");
		return -1;
	}
	if(month == 1)
	{
		return day;
	}
	int i = 1;
	int result = day;
	for(i = 1; i < month; i++)
	{
		result += daysofmonth[i-1];
	}
	return result;
}

int main()
{
	int month;
	int day;
	printf("Input month and day:");
	scanf("%d,%d", &month, &day);
	printf("The day is %dth day of the year.\n", getdays(month, day));
	return 0;
}
