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
