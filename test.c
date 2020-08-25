/*******************************************************
	在使用结构体指针时，首先要为其分配空间，use malloc();
	头文件为#include<stdlib.h>

********************************************************/
#include <stdio.h>
#include <stdlib.h>
typedef struct Rectangle{
	int width;
	int height;

}Rec;

int main(int argc, char * argv [ ])
{
	 Rec *p = malloc(sizeof(Rec));
	 p->height = 10;
	 p->width = 20;

	 
	printf("%d,%d\n",p->height,p->width);

	free(p);
	
	return 0;
}






















