#include <stdio.h>
#include <stdlib.h>

typedef struct linknode{
	int data;
	
	void* next;
} ln_t;

static ln_t *list;
static int listCnt=0;

//swap the cnt'th node with the next node
void swap_node (int cnt)
{
	ln_t *ptr = list;
	ln_t *ptr_prev = NULL;
	ln_t *ptr_next;
	int i=0;
	
	while(ptr != NULL)
	{
		if (cnt == i)
		{
			ptr_next = (ln_t*)ptr->next;
			if (ptr_prev == NULL) //it means the first node
			{
				list = ptr_next;
			}
			else
			{
				ptr_prev->next = ptr_next;
			}
			ptr->next = ptr_next->next;
			ptr_next->next = ptr;
			
			return;
		}
		ptr_prev = ptr;
		ptr = (ln_t*)ptr->next;
		i++;
	}
	printf("cannot swap %i\n", cnt);
}




//return 1 if needed to be swapped
//return 0 if no need to be swapped
int compare_next(ln_t *ptr)
{
	if (ptr->next != NULL &&
		ptr->data > (((ln_t*)ptr->next)->data))
	{
		return 1;
	}
	
	return 0;
}




void bubble_sort()
{
	int i,cnt;
	ln_t *ptr;
	for (i=0;i<listCnt;i++)
	{
        //ptr initialization (=list)
        ptr = list;
		//cnt initialization (=0)
		cnt = 0;

        //while (do until the next node (ptr->next) is NULL)
		while(ptr->next != NULL)
		{
			if(compare_next(ptr)==1)
			{
				swap_node(cnt);
			}
			else
			{
				ptr = ptr->next;
			}
			
			cnt++;
		}

        //      compare data of this node and the next node
        //      if needed, swap
        //      else move to the next node
        //increase cnt
        
	}
}









int create_node(int value)
{
	ln_t *ptr;
	ln_t *ptrTrav;
	int cnt=0;
	
	ptr = (ln_t*)malloc(sizeof(ln_t));
	if (ptr == NULL){
		//printf
		return -1;
	}
	
	
	ptr->data = value;
	ptr->next = NULL;
	
	
	if (list == NULL){
		list = ptr;
		cnt = 0;
	}
	else {
		ptrTrav = list;
		cnt++;
		while(ptrTrav->next != NULL){
			ptrTrav = ptrTrav->next;
			cnt++;
		}
		ptrTrav->next = ptr;
	}
	listCnt++;
	return cnt;
}

void print_list(void)
{
	ln_t *ptr = list;
	int i=0;
	
	while (ptr != NULL)
	{
		printf("node %i : %i\n", i, ptr->data);
		ptr = ptr->next;
		i++;
	}
}

void print_node(int num)
{
	ln_t *ptr = list;
	int i=0;
	
	while (ptr != NULL)
	{
		if (i == num)
		{
			printf("node %i : %i\n", i, ptr->data);
			return;
		}
		ptr = ptr->next;
		i++;
	}
	printf("node %i does not exist!\n", num);
}

void free_list()
{
	ln_t *ptr = list;
	ln_t *ptr_next;
	
	while(ptr != NULL)
	{
		ptr_next = ptr->next;
		free(ptr);
		ptr = ptr_next;
	}
}
