#include<stdio.h>
static double avg;
void calculate_average(int* grade)
{
	int sum = 0;
	

	
	int i;
	for (i = 0; i < 10; i++)
	{
		sum += *grade;
		grade++;
	}
	
	
	avg = (double)sum / i;
	printf("%.1f\n", avg);
}
void find_min_max(int* grade)
{
	
	
	int max = grade[0];
	
	for (int i = 0; i < 10; i++)
	{
		
		if (max < *(grade+i))
			max = *(grade+i);
		

		
	}
	printf("%d\n", max);
	int min = grade[0];
	for (int i = 0; i < 10; i++)
	{

		if (min > *(grade + i))
			min = *(grade + i);



	}
	printf("%d\n", min);
}
void count_pass_fail(int *grade)
{
	printf("Grades above average: ");
	for (int i = 0; i < 10; i++)
	{
		if (*(grade + i) >= avg)
			printf("%d ", *(grade + i));
	}
	printf("\nGrades below average: ");
	for (int i = 0; i < 10; i++)
	{
		if (*(grade + i) < avg)
			printf("%d ", *(grade + i));
	}

	int snum = 0;
	int fnum = 0;
	for (int i = 0; i <10; i++)
	{
		if (*(grade+i) >= 60)
		{
			snum++;
		}
		else if (*(grade + i) < 60)
		{
			fnum++;
		}
	}
	printf("\nnum of students passing: %d\n", snum);
	printf("num of students failing: %d\n", fnum);

}
