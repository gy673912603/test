#include <stdio.h>
#include <stdlib.h>

char* get_name_and_id()
{
	 char* my_name_id = "guoyong 288701";
	return my_name_id;
}

int main(int argc,char* argv[])
{
	char* name;
	name = get_name_and_id();
	printf("%s\n",name);

	return 0;


}

