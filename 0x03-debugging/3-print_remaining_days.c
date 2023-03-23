#include <stdio.h>
#include "main.h"

/**
* isLeapYear - Checks if isLeap year
* @year: Year to be checked
* Return: 1 if is leap year 0 if not
*/

bool isLeapYear(int year)
{
	if (year % 400 == 0)
	{
		return (true);
	}
	else if (year % 100 == 0)
	{
		return (false);
	} else if (year % 4 == 0)
	{
		return (true);
	}
	else
	{
		return (false);
	}
}

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if (isLeapYear())
	{
		if (month == 2 && day < 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day >= 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
