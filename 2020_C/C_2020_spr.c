#include <stdio.h>								// printf()와 scanf()를 사용하기 위한 헤더 파일 추가
#include <stdlib.h>								// 문자열 변환 및 기억공간 할당을 위한 헤더 파일 추가
#include<string.h>								// 문자열 헤더 파일 추가
#pragma warning(disable:4996)					// 권장하지 않는 함수 사용에 대한 경고 메세지 무시

int birth(const void* a, const void* b) {		// 생년월일 오름차순 정렬을 위한 birth 변수 선언
	return strcmp((char*)a, (char*)b);
}

struct pupils									// 구조체 pupils 선언
{
	char name[20];								// pupils 구조체의 이름을 입력받는 멤버
	char major[20];								// pupils 구조체의 전공을 입력받는 멤버
	char regnumber[15];							// pupils 구조체의 주민등록번호를 입력받는 멤버
};												// 세미콜론(;)을 반드시 사용
struct pupils list[3];							// 구조체 변수의 선언 및 초기화
int i;											// 변수 i 선언


void main() {
	printf("3명의 학생 정보를 입력하시오.\n");
	for (i = 0; i < 3; i++) {					// 반복문을 이용하여 3명의 학생정보를 입력
		printf("-----------------------------------\n");
		printf("이름 : ");
		scanf("%s", list[i].name);				// 이름을 입력받아 pupils 구조체의 name에 저장
		printf("학과 : ");
		scanf("%s", list[i].major);				// 학과를 입력받아 pupils 구조체의 major에 저장
		printf("주민등록번호 : ");
		scanf("%s", list[i].regnumber);			// 주민등록번호를 입력받아 pupils 구조체의 regnumber에 저장
		/* else if를 사용하여 주민등록번호 7번째 숫자로 성별, 출생년대, 출생지역 구분 */
		if (list[i].regnumber[6] == '1') {									// 주민등록번호 뒷자리 첫번째 숫자가 '1'
			printf("%s, 19%c%c년 %c%c월 %c%c일, 대한민국, 남자, %s\n",		// 1900년대 출생한 대한민국 남자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '2') {								// 주민등록번호 뒷자리 첫번째 숫자가 '2'
			printf("%s, 19%c%c년 %c%c월 %c%c일, 대한민국, 여자, %s\n",		// 1900년대 출생한 대한민국 여자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '3') {								// 주민등록번호 뒷자리 첫번째 숫자가 '3'
			printf("%s, 20%c%c년 %c%c월 %c%c일, 대한민국, 남자, %s\n",		// 2000년대 출생한 대한민국 남자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '4') {								// 주민등록번호 뒷자리 첫번째 숫자가 '4'
			printf("%s, 20%c%c년 %c%c월 %c%c일, 대한민국, 여자, %s\n",		// 2000년대 출생한 대한민국 여자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '5') {								// 주민등록번호 뒷자리 첫번째 숫자가 '5'
			printf("%s, 19%c%c년 %c%c월 %c%c일, 외국, 남자, %s\n",			// 1900년대 출생한 외국 남자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '6') {								// 주민등록번호 뒷자리 첫번째 숫자가 '6'
			printf("%s, 19%c%c년 %c%c월 %c%c일, 외국, 여자, %s\n",			// 1900년대 출생한 외국 여자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '7') {								// 주민등록번호 뒷자리 첫번째 숫자가 '7'
			printf("%s, 20%c%c년 %c%c월 %c%c일, 외국, 남자, %s\n",			// 2000년대 출생한 외국 남자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '8') {								// 주민등록번호 뒷자리 첫번째 숫자가 '8'
			printf("%s, 20%c%c년 %c%c월 %c%c일, 외국, 여자, %s\n",			// 2000년대 출생한 외국 여자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '9') {								// 주민등록번호 뒷자리 첫번째 숫자가 '9'
			printf("%s, 18%c%c년 %c%c월 %c%c일, 대한민국, 남자, %s\n",		// 1800년대 출생한 대한민국 남자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else {																// 주민등록번호 뒷자리 첫번째 숫자가 '0'
			printf("%s, 18%c%c년 %c%c월 %c%c일, 대한민국, 여자, %s\n",		// 1800년대 출생한 대한민국 여자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
	}


	printf("============================================================\n");
	printf("입력 받은 3명의 정보를 생년월일 기준으로 오름차순으로 출력\n");
	printf("------------------------------------------------------------\n");

	qsort(list[i].regnumber, sizeof(list[i].regnumber) / sizeof(list[i].regnumber[0]), sizeof(list[i].regnumber[1]), birth);
	/* 퀵 정렬 함수인 qsort 함수를 사용하여 생년월일 기준 오름차순으로 학생정보를 출력*/

	for (i = 0; i <= 2; i++) {												// 반복문을 이용하여 3명의 학생정보를 출력함
		/* else if를 사용하여 주민등록번호 7번째 숫자로 성별, 출생년대, 출생지역 구분 */
		if (list[i].regnumber[6] == '1') {									// 주민등록번호 뒷자리 첫번째 숫자가 '1'
			printf("%s, 19%c%c년 %c%c월 %c%c일, 대한민국, 남자, %s\n",		// 1900년대 출생한 대한민국 남자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '2') {								// 주민등록번호 뒷자리 첫번째 숫자가 '2'
			printf("%s, 19%c%c년 %c%c월 %c%c일, 대한민국, 여자, %s\n",		// 1900년대 출생한 대한민국 여자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '3') {								// 주민등록번호 뒷자리 첫번째 숫자가 '3'
			printf("%s, 20%c%c년 %c%c월 %c%c일, 대한민국, 남자, %s\n",		// 2000년대 출생한 대한민국 남자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '4') {								// 주민등록번호 뒷자리 첫번째 숫자가 '4'
			printf("%s, 20%c%c년 %c%c월 %c%c일, 대한민국, 여자, %s\n",		// 2000년대 출생한 대한민국 여자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '5') {								// 주민등록번호 뒷자리 첫번째 숫자가 '5'
			printf("%s, 19%c%c년 %c%c월 %c%c일, 외국, 남자, %s\n",			// 1900년대 출생한 외국 남자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '6') {								// 주민등록번호 뒷자리 첫번째 숫자가 '6'
			printf("%s, 19%c%c년 %c%c월 %c%c일, 외국, 여자, %s\n",			// 1900년대 출생한 외국 여자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '7') {								// 주민등록번호 뒷자리 첫번째 숫자가 '7'
			printf("%s, 20%c%c년 %c%c월 %c%c일, 외국, 남자, %s\n",			// 2000년대 출생한 외국 남자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '8') {								// 주민등록번호 뒷자리 첫번째 숫자가 '8'
			printf("%s, 20%c%c년 %c%c월 %c%c일, 외국, 여자, %s\n",			// 2000년대 출생한 외국 여자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else if (list[i].regnumber[6] == '9') {								// 주민등록번호 뒷자리 첫번째 숫자가 '9'
			printf("%s, 18%c%c년 %c%c월 %c%c일, 대한민국, 남자, %s\n",		// 1800년대 출생한 대한민국 남자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
		else {																// 주민등록번호 뒷자리 첫번째 숫자가 '0'
			printf("%s, 18%c%c년 %c%c월 %c%c일, 대한민국, 여자, %s\n",		// 1800년대 출생한 대한민국 여자
				list[i].name, list[i].regnumber[0], list[i].regnumber[1], list[i].regnumber[2], list[i].regnumber[3], list[i].regnumber[4], list[i].regnumber[5], list[i].major);
			/* pupils 구조체의 멤버 참조 */
		}
	}


}