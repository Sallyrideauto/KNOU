#include <stdio.h>		// ǥ�� ����� ��� ������ stdio.h�� ���Խ�Ŵ
#pragma warning(disable:4996)		// �������� �ʴ� �Լ� ��뿡 ���� ��� �޼��� ����

void main() {
/* main() �Լ��� ���� ���� ȣ��Ǵ� �Լ��̹Ƿ� �ݵ�� ��� ���α׷��� �����ؾ� �� */
	int n, count;			// ���� n, count ����
	
	float avg, d, sum = 0;
	/* �ε��Ҽ���(4byte)�� ���� avg, d, sum ���� */
	float list[100];		// 100���� ���� �����ϴ� �ε��Ҽ����� �迭 list ����

	printf("����� ������ �ϴ� �������� ������? ");
	/* �Է��� �������� ������ ���� �޼��� ���*/
	scanf("%d", &n);		// �Է��� ������ ������ ���� n�� ����

	for (count = 0; count < n; ++count) {
	/* n�� �Է��� Ƚ������ for���� �ݺ� ���� */
		printf("i=%d x=", count + 1);
		/* �Ǽ��� �Է��� �ޱ� ���� �޼��� ��� */
		scanf("%f", &list[count]);
		/* list �迭�� ���� n�� �Է��� Ƚ������ �Ǽ� �Է� */
		sum += list[count];		// list �迭�� �Է��� �Ǽ��� �� ���
	}	// for�� �ݱ�

	avg = sum / n;		
	/* ����� ���ϱ� ���� sum�� n�� ���� ���� �Է��ϴ� ���� avg */
	printf("The average is %5.2f \n", avg);
	/* avg ������ �Էµ� ���� ��� */

	for (count = 0; count < n; ++count) {
	/* n�� �Է��� Ƚ������ for���� �ݺ� ���� */
		d = list[count] - avg;
		/* ǥ������ d = �� ���� xi - ��� avg */
		printf("i = %d x = %5.2f d = %5.2f \n", count + 1, list[count], d); // ǥ������ d ���
	} // for�� �ݱ�

} // main() �Լ� �ݱ�



