typedef struct linknode{
	int data;
	
	void* next; //구조체안에서 구조체를 가리키면 에러가 날수 있으므로 일단 아무개를 가리키는 void로 선언 
}ln_t; 

static ln_t *list;

int create_node(int value)
{
	ln_t *ptr;
	ln_t *ptrTrav;
	int cnt = 0;
	
	ptr = (ln_t*)malloc(sizeof(ln_t));
	if(ptr == NULL)
	{
		printf("could not allocate memory!");
		return -1;
	}
	
	ptr->data = value;
	ptr->next = NULL;
	
	//
	if(list == NULL)
	{
		list = ptr;
		cnt = 0;
	}
	else
	{
		ptrTrav = list;
		cnt++;
		while( ptrTrav->next != NULL )
		{
			ptrTrav = ptrTrav->next;
			cnt++;
		}
		
		ptrTrav->next = ptr;
	
	}
	
	return cnt;
}
