#include<stdio.h>		// ǥ�� ����� ��������� stdio.h�� ���Խ�Ŵ
#pragma warning(disable:4996)		// �������� �ʴ� �Լ� ��뿡 ���� ���� �޼��� ����

struct entry {				// ����ü entry ����
	char fname[20];		// 20�ڱ��� ���� �Է¹޴� ������ ���� fname
	char lname[20];		// 20�ڱ��� �̸��� �Է¹޴� ������ ���� lname
	char phone[10];		// 10�ڱ��� ��ȭ��ȣ�� �Է¹޴� ������ ���� phone
};										// ����ü entry�� ���� �� �����ݷ�(;)�� �ݵ�� ���
struct entry list[4];		// entry ����ü�� �ڷḦ 4�� �Է¹���
int i;								// ���� i ����

void main() {
/* main() �Լ��� ���� ���� ȣ��Ǵ� �Լ��̹Ƿ� �ݵ�� ��� ���α׷��� �����ؾ� ��*/
	
	for (i = 0; i < 4; i++) {
	/* 4�� ���� for���� �ݺ� ���� */
		printf("Enter first name : ");		// ���� �Է¹ޱ� ���� �޼��� ���
		scanf("%s", list[i].fname);			// list[i].fname ������ �Է��� ���� ����
		printf("Enter last name : ");		// �̸��� �Է¹ޱ� ���� �޼��� ���
		scanf("%s", list[i].lname);			// list[i].lname ������ �Է��� �̸��� ����
		printf("Enter phone number : ");	// ��ȭ��ȣ�� �Է¹ޱ� ���� �޼��� ���
		scanf("%s", list[i].phone);			// list[i].phone ������ �Է��� ��ȭ��ȣ�� ����
		printf("\n");	
		/* ���� �̸�, ��ȭ��ȣ�� �Է¹޴� �� ����Ŭ�� ������ �Ǹ� �ٹٲ� */
	}	// for�� �ݱ�
	printf("\n");		// 4���� �Է��� ������ �ٹٲ�
	
	for (i = 0; i < 4; i++) {
		/* 4�� ���� for���� �ݺ� ���� */
		printf("Name : %s %s", list[i].fname, list[i].lname);	
		/* list[i].fname�� list[i].lname ������ ���� ����� ���� �̸� ��� */
		printf("\t\tPhone : %s \n", list[i].phone);
		/* list[i].phone ������ ����� ��ȭ��ȣ ��� */
	}	// for�� �ݱ�

}	// main() �Լ� �ݱ�


