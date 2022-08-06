#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*5:
#define CSIZE 4
typedef struct { char fname[30]; char lname[30]; }full_name;
typedef struct { full_name name; float grade[3]; float average; }student;

void set_grade(student list[]);
void set_average(student list[]);
void get_info_all(student list[]);
void get_average_all(student list[]);
int main(void)
{
	student student_list[CSIZE] ;
	student* t = student_list;
	t = (student*)malloc(sizeof(student));
	set_grade(student_list);
	set_average(student_list);
	get_info_all(student_list);
	get_average_all(student_list);
	return 0;
}
void set_grade(student list[])
{
	char fname[15], lname[15];
	int i = 0;
	while (i < CSIZE) {
		printf("Enter the student name:");
		scanf_s("%s %s", fname, 15, lname, 15);
		if (strlen(fname) < 1 && strlen(lname) < 1) {
			printf("Error in stdent name!retry!");
			printf("Enter the student name:");
			scanf_s("%s %s", fname, 15, lname, 15);
		}


		strcpy_s(list[i].name.fname, 15, fname);
		strcpy_s(list[i].name.lname, 15, lname);
		printf("Enter the 3 score of %s:", fname);
		scanf_s("%f %f %f", &list[i].grade[0], &list[i].grade[1], &list[i].grade[2]);
		i++;
	}
}

void set_average(student list[])
{
	for (int i = 0; i < CSIZE; i++)
	{
		list[i].average = ((list[i].grade[0] + list[i].grade[1] + list[i].grade[2]) / 3);
	}
}

void get_info_all(student list[])
{
	for (int i = 0; i < CSIZE; i++)
	{
		printf("No.%d:%s.%s:%5.2f %5.2f %5.2f ,average = %5.2f\n", i, list[i].name.fname,
			list[i].name.lname, list[i].grade[0], list[i].grade[1], list[i].grade[2],
			list[i].average);
	}
}

void get_average_all(student list[])
{
	float sum = 0.0;
	for (int i = 0; i < CSIZE; ++i)
	{
		sum += list[i].average;
	}
	printf("Class average is %.2f\n", sum / 4);
}
*/
int main(void)
{
	char* tx = NULL;

	scanf_s("%s", tx, 10);
	printf("%s", tx);
	return 0;

}