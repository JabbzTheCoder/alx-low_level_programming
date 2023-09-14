#include <stdio.h>
#include "main.h"

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
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int is_leap = is_leap_year(year);

	if (month >= 1 && month <= 12 && day >= 1
			&& day <= days_in_month[month] + (is_leap && month == 2))
	{
		int total_days = 0;

		for (int i = 1; i < month; i++)
		{
			total_days += days_in_month[i];
		}
		total_days += day;

		printf("Day of the year: %d\n", total_days);
		printf("Remaining days: %d\n", is_leap ? (366 - total_days)
				: (365 - total_days));
	}
	else
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
}
