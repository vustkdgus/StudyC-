#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
}Node;

typedef struct {
	Node* head; // 노드를 가리킬수 있는 타입이 와야한다.
}HeadNode; //첫번째 노드를 가리키는 것




HeadNode* createHead() // 입력값은 필요없다
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));//헤드를 생성하는 것이기 때문에 헤드 노드의 크기를 가져와야한다.
	if (h != NULL)
	{
		h->head = NULL;
	}
	return h;
}
Node* rearInsertNode(HeadNode* n, int data)
{
	Node* newnode = (Node*)malloc(sizeof(Node));
	if (newnode != NULL)
	{
		newnode->data = data;
		if (n->head == NULL)
		{
			n->head = newnode;
			newnode->next = NULL;
		}
		else
		{
			Node* curr = n->head;
			while (curr->next != NULL)
			{
				curr = curr->next;
			}
			curr->next = newnode;
			newnode->next = NULL;
		}
	}
	return newnode;
}

void output(HeadNode* n)
{
	Node* curr = n->head;
	int i = 1;
	printf("\n");
	while (curr != NULL)
	{
		printf("%d번째 노드 데이터 %c\n", i, curr->data);
		curr = curr->next;
		i++;
	}
}


void insertionSort(char a[], int size);




int main()
{
	char input_ary[10];
	char a;
	int i = 0;
	int j = 0;
	int k = 0;


	while (1)
	{
		printf("알파벳을 입력하시오 : ");
		scanf(" %c", &a);
		if (a < 65 || a>123)
		{
			printf("잘못된 값을 넣으셨습니다. 다시 입력해주세요\n");
		}
		else
		{
			input_ary[i] = a;
			i++;
			if (i == 10)
			{
				break;
			}
		}
	}
	insertionSort(input_ary, 10);

	HeadNode* h = createHead();
	for (size_t i = 0; i < 10; i++)
	{

		rearInsertNode(h, input_ary[i]);
	}

	output(h);

	return 0;
}



void insertionSort(char a[], int size)
{
	int i, j, t;
	char temp;


	printf("\n정렬할 원소 : ");
	for (t = 0; t < size; t++)
	{
		printf("%c ", a[t]);
	}
	printf("\n\n<<<<<<<<<삽입 정렬 수행>>>>>>>>>>\n");
	for (i = 1; i < size; i++)
	{
		temp = a[i];
		j = i;
		while ((j > 0) && (a[j - 1] > temp))
		{
			a[j] = a[j - 1];
			j = j - 1;
		}
		a[j] = temp;
		printf("\n %d단계 : ", i);
		for (t = 0; t < size; t++)
		{
			printf("%3c ", a[t]);
		}

	}
}