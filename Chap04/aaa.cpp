#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
}Node;

typedef struct {
	Node* head; // ��带 ����ų�� �ִ� Ÿ���� �;��Ѵ�.
}HeadNode; //ù��° ��带 ����Ű�� ��




HeadNode* createHead() // �Է°��� �ʿ����
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));//��带 �����ϴ� ���̱� ������ ��� ����� ũ�⸦ �����;��Ѵ�.
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
		printf("%d��° ��� ������ %c\n", i, curr->data);
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
		printf("���ĺ��� �Է��Ͻÿ� : ");
		scanf(" %c", &a);
		if (a < 65 || a>123)
		{
			printf("�߸��� ���� �����̽��ϴ�. �ٽ� �Է����ּ���\n");
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


	printf("\n������ ���� : ");
	for (t = 0; t < size; t++)
	{
		printf("%c ", a[t]);
	}
	printf("\n\n<<<<<<<<<���� ���� ����>>>>>>>>>>\n");
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
		printf("\n %d�ܰ� : ", i);
		for (t = 0; t < size; t++)
		{
			printf("%3c ", a[t]);
		}

	}
}