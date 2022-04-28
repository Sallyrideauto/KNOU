#include<stdio.h>		// 표준 입출력 헤더파일인 stdio.h를 포함시킴
#pragma warning(disable:4996)		// 권장하지 않는 함수 사용에 대한 에러 메세지 무시

struct entry {				// 구조체 entry 선언
	char fname[20];		// 20자까지 성을 입력받는 문자형 변수 fname
	char lname[20];		// 20자까지 이름을 입력받는 문자형 변수 lname
	char phone[10];		// 10자까지 전화번호를 입력받는 문자형 변수 phone
};										// 구조체 entry를 닫을 시 세미콜론(;)을 반드시 사용
struct entry list[4];		// entry 구조체에 자료를 4번 입력받음
int i;								// 변수 i 선언

void main() {
/* main() 함수는 가장 먼저 호출되는 함수이므로 반드시 모든 프로그램에 존재해야 함*/
	
	for (i = 0; i < 4; i++) {
	/* 4번 동안 for문을 반복 수행 */
		printf("Enter first name : ");		// 성을 입력받기 위한 메세지 출력
		scanf("%s", list[i].fname);			// list[i].fname 변수에 입력한 성을 저장
		printf("Enter last name : ");		// 이름을 입력받기 위한 메세지 출력
		scanf("%s", list[i].lname);			// list[i].lname 변수에 입력한 이름을 저장
		printf("Enter phone number : ");	// 전화번호를 입력받기 위한 메세지 출력
		scanf("%s", list[i].phone);			// list[i].phone 변수에 입력한 전화번호를 저장
		printf("\n");	
		/* 성과 이름, 전화번호를 입력받는 한 사이클이 끝나게 되면 줄바꿈 */
	}	// for문 닫기
	printf("\n");		// 4번의 입력이 끝나면 줄바꿈
	
	for (i = 0; i < 4; i++) {
		/* 4번 동안 for문을 반복 수행 */
		printf("Name : %s %s", list[i].fname, list[i].lname);	
		/* list[i].fname과 list[i].lname 변수에 각각 저장된 성과 이름 출력 */
		printf("\t\tPhone : %s \n", list[i].phone);
		/* list[i].phone 변수에 저장된 전화번호 출력 */
	}	// for문 닫기

}	// main() 함수 닫기


