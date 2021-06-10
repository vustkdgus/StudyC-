#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 노드 구조체 정의 */
typedef struct ListNode {
	char data;
	struct ListNode* link;
}ListNode;
/* 헤드 구조체 정의 */
typedef struct {
	ListNode* head;
}HeadNode;

/* 헤더 생성 */
HeadNode* createHead(void)
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL; // 역참조 방지
	return h;
}
/* 노드 생성 */
void create_node(HeadNode* phead, char data) {
	// 헤드노드가 없을때 헤드노드생성
	if (phead == NULL) createHead();

	ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
	ListNode* curr = (ListNode*)malloc(sizeof(ListNode));

	// 선행노드가 없을때(첫 노드생성)
	if (phead != NULL && phead->head == NULL) {
		if (new_node != NULL)
		{
			phead->head = new_node;
			new_node->link = NULL;
			new_node->data = data;
		}
	}
	// 선행노드가 존재할때 다음노드 생성
	else {
		if (curr != NULL && phead != NULL && new_node != NULL)
		{
			curr = phead->head;
			while (curr->link != NULL) curr = curr->link;
			curr->link = new_node;
			new_node->data = data;
			new_node->link = NULL;
		}
	}
}
/* 노드 체인지 */
void swap_node(HeadNode* phead, ListNode* target_node1, ListNode* target_node2)
{
	ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
	ListNode* target1 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* target2 = (ListNode*)malloc(sizeof(ListNode));

	target1 = phead->head;
	while (target1 != target_node1) target1 = target1->link;

	target2 = phead->head;
	while (target2 != target_node2) target2 = target2->link;

	if (temp != NULL)
	{
		temp->data = target1->data;
		target1->data = target2->data;
		target2->data = temp->data;
	}

	free(temp);
}
/* 전체 노드 출력 */
void print_node(HeadNode* phead)
{
	int i = 1;
	ListNode* curr = phead->head;
	if (curr != NULL)
	{
		while (curr != NULL) {
			printf("%c  ", curr->data);
			curr = curr->link;
			i++;
		}
	}
	else printf("노드가 없습니다.\n");

	printf("\n");
}
/* 전체 노드 삭제 */
void delete_allnode(HeadNode* phead)
{
	int i = 1;
	while (phead->head != NULL)
	{
		ListNode* curr = phead->head;
		phead->head = curr->link;
		free(curr);
		i++;
	}
	free(phead);
}
/* 삽입 정렬 */
void insertion_sort(HeadNode* phead) {
	int i, j, k, l;
	char key, key2;
	ListNode* mark = (ListNode*)malloc(sizeof(ListNode));
	ListNode* compare = (ListNode*)malloc(sizeof(ListNode));

	for (i = 1; i < 10; i++) {
		mark = phead->head;
		for (k = 0; k < i; k++)
		{
			if (mark != NULL) mark = mark->link;
		}
		if (mark != NULL) key = mark->data;

		for (j = i; j > 0; j--)
		{
			compare = phead->head;
			for (l = 0; l < i - j; l++)
			{
				if (compare != NULL) compare = compare->link;
			}
			key2 = compare->data;

			if ((int)key2 > (int)key)
				swap_node(phead, compare, mark);
		}
		printf("%d번째 : ", i);
		print_node(phead);
	}
}

int main()
{
	char input_ary[10];

	HeadNode* h1 = createHead();

	printf("10글자를 입력해주세요 : ");
	for (int i = 0; i < 10; i++)
	{
		scanf("%c", &input_ary[i]);
		fflush(stdin);
		create_node(h1, input_ary[i]);
	}

	printf("정렬전\n");
	print_node(h1);
	insertion_sort(h1);
	printf("정렬후\n");
	print_node(h1);
	delete_allnode(h1);

	return 0;
}