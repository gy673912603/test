#include <stdio.h>

typedef struct student_message
{
	char* name;
	unsigned short age;
	float score;
}stu_msg;

int main(int chgc, char* argv[])
{
	stu_msg *demo_student_message;
	demo_student_message = (struct student_message*)malloc(sizeof(stu_msg));

	if(demo_student_message > 0){

		printf("memory init ok!");
		return;
	}
	return 0;
}



















