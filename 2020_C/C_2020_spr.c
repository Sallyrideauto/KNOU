#include <stdio.h>								// printf()�� scanf()�� ����ϱ� ���� ��� ���� �߰�
#include <stdlib.h>								// ���ڿ� ��ȯ �� ������ �Ҵ��� ���� ��� ���� �߰�
#include<string.h>								// ���ڿ� ��� ���� �߰�
#pragma warning(disable:4996)					// �������� �ʴ� �Լ� ��뿡 ���� ��� �޼��� ����

int birth(const void* a, const void* b) {		// ������� �������� ������ ���� birth ���� ����
	return strcmp((char*)a, (char*)b);
}

struct pupils									// ����ü pupils ����
{
	char name[20];								// pupils ����ü�� �̸��� �Է¹޴� ���
	char major[20];								// pupils ����ü�� ������ �Է¹޴� ���
	char regnumber[15];							// pupils ����ü�� �ֹε�Ϲ�ȣ�� �Է¹޴� ���
};												// �����ݷ�(;)�� �ݵ�� ���
struct pupils list[3];							// ����ü ������ ���� �� �ʱ�ȭ
int i;											// ���� i ����


void main() {
	printf("3���� �л� ������ �Է��Ͻÿ�.\n");
	for (i = 0; i < 3; i++) {					// �ݺ����� �̿��Ͽ� 3���� �л������� �Է�
		printf("-----------------------------------\n");
		printf("�̸� : ");
		scanf("%s", list[i].name);				// �̸��� �Է¹޾� pupils ����ü�� name�� ����
		printf("�а� : ");
		scanf("%s", list[i].major);				// �а��� �Է¹޾� pupils ����ü�� major�� ����
		printf("�ֹε�Ϲ�ȣ : ");
		scanf("%s", list[i].regnumber);			// �ֹε�Ϲ�ȣ�� �Է¹޾� pupils ����ü�� regnumber�� ����
		/* else if�� ����Ͽ� �ֹε�Ϲ�ȣ 7��° ���ڷ� ����, ������, ������� ���� */
		if (list[i].regnumber[6] == '1') {									// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '1'
			printf("%s, 19%c%c�� %c%c�� %c%c��, ���ѹα�, ����, %s\n",		// 1900��� ����� ���ѹα� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '2') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '2'
			printf("%s, 19%c%c�� %c%c�� %c%c��, ���ѹα�, ����, %s\n",		// 1900��� ����� ���ѹα� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '3') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '3'
			printf("%s, 20%c%c�� %c%c�� %c%c��, ���ѹα�, ����, %s\n",		// 2000��� ����� ���ѹα� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '4') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '4'
			printf("%s, 20%c%c�� %c%c�� %c%c��, ���ѹα�, ����, %s\n",		// 2000��� ����� ���ѹα� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '5') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '5'
			printf("%s, 19%c%c�� %c%c�� %c%c��, �ܱ�, ����, %s\n",			// 1900��� ����� �ܱ� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '6') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '6'
			printf("%s, 19%c%c�� %c%c�� %c%c��, �ܱ�, ����, %s\n",			// 1900��� ����� �ܱ� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '7') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '7'
			printf("%s, 20%c%c�� %c%c�� %c%c��, �ܱ�, ����, %s\n",			// 2000��� ����� �ܱ� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '8') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '8'
			printf("%s, 20%c%c�� %c%c�� %c%c��, �ܱ�, ����, %s\n",			// 2000��� ����� �ܱ� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '9') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '9'
			printf("%s, 18%c%c�� %c%c�� %c%c��, ���ѹα�, ����, %s\n",		// 1800��� ����� ���ѹα� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else {																// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '0'
			printf("%s, 18%c%c�� %c%c�� %c%c��, ���ѹα�, ����, %s\n",		// 1800��� ����� ���ѹα� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
	}


	printf("============================================================\n");
	printf("�Է� ���� 3���� ������ ������� �������� ������������ ���\n");
	printf("------------------------------------------------------------\n");

	qsort(list[i].regnumber, sizeof(list[i].regnumber) / sizeof(list[i].regnumber[0]), sizeof(list[i].regnumber[1]), birth);
	/* �� ���� �Լ��� qsort �Լ��� ����Ͽ� ������� ���� ������������ �л������� ���*/

	for (i = 0; i <= 2; i++) {												// �ݺ����� �̿��Ͽ� 3���� �л������� �����
		/* else if�� ����Ͽ� �ֹε�Ϲ�ȣ 7��° ���ڷ� ����, ������, ������� ���� */
		if (list[i].regnumber[6] == '1') {									// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '1'
			printf("%s, 19%c%c�� %c%c�� %c%c��, ���ѹα�, ����, %s\n",		// 1900��� ����� ���ѹα� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '2') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '2'
			printf("%s, 19%c%c�� %c%c�� %c%c��, ���ѹα�, ����, %s\n",		// 1900��� ����� ���ѹα� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '3') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '3'
			printf("%s, 20%c%c�� %c%c�� %c%c��, ���ѹα�, ����, %s\n",		// 2000��� ����� ���ѹα� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '4') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '4'
			printf("%s, 20%c%c�� %c%c�� %c%c��, ���ѹα�, ����, %s\n",		// 2000��� ����� ���ѹα� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '5') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '5'
			printf("%s, 19%c%c�� %c%c�� %c%c��, �ܱ�, ����, %s\n",			// 1900��� ����� �ܱ� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '6') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '6'
			printf("%s, 19%c%c�� %c%c�� %c%c��, �ܱ�, ����, %s\n",			// 1900��� ����� �ܱ� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '7') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '7'
			printf("%s, 20%c%c�� %c%c�� %c%c��, �ܱ�, ����, %s\n",			// 2000��� ����� �ܱ� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '8') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '8'
			printf("%s, 20%c%c�� %c%c�� %c%c��, �ܱ�, ����, %s\n",			// 2000��� ����� �ܱ� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else if (list[i].regnumber[6] == '9') {								// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '9'
			printf("%s, 18%c%c�� %c%c�� %c%c��, ���ѹα�, ����, %s\n",		// 1800��� ����� ���ѹα� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
		else {																// �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڰ� '0'
			printf("%s, 18%c%c�� %c%c�� %c%c��, ���ѹα�, ����, %s\n",		// 1800��� ����� ���ѹα� ����
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils ����ü�� ��� ���� */
		}
	}


}