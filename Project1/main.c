#include<stdio.h>
#include "grades_funcs.h"
int main()
{
	int grade[] = { 85, 70, 55, 90, 45, 60, 78, 88, 92, 49 };
	calculate_average(grade);
	find_min_max(grade);
	count_pass_fail(grade);
}