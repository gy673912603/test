#include <stdio.h>
#include <stdlib.h>

 struct link_node_list{

	int data;
	struct link_node_list *next;


}lnl;
struct link_node_list* create(int n)
{
	
	struct link_node_list *head  = NULL, *p1, *p2;
	int a;
	

	for (int i = 0; i < n; ++i)
		{
			p1 = (struct link_node_list*)malloc(sizeof(lnl));
			
			scanf("%d",&a);
			p1->data = a;
		
			if(head == NULL)
				{
		
					head = p1;
					p2 = p1;
					
				}else{
						p2->next = p1;
						p2 = p1;
					}
		}
	p2->next = NULL;
	return head;
}

int main(int argc, char * argv [ ])
{	
	int n;
	struct link_node_list *q;

	printf("input node number:");
	scanf("%d",&n);

	q = create(n);

	printf("result is: \n");

	while(q)
		{
			
			printf("%d -> ",q->data);
			q = q->next;

		}
	printf("\n");

	return 0;	
		
}
















