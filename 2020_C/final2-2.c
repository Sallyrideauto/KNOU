#include <stdio.h>		// 표준 입출력 헤더 파일인 stdio.h를 포함시킴
#pragma warning(disable:4996)		// 권장하지 않는 함수 사용에 대한 경고 메세지 무시

void main() {
/* main() 함수는 가장 먼저 호출되는 함수이므로 반드시 모든 프로그램에 존재해야 함 */
	int n, count;			// 변수 n, count 선언
	
	float avg, d, sum = 0;
	/* 부동소수점(4byte)현 변수 avg, d, sum 선언 */
	float list[100];		// 100개의 값을 저장하는 부동소수점형 배열 list 선언

	printf("평균을 내고자 하는 데이터의 개수는? ");
	/* 입력할 데이터의 개수를 묻는 메세지 출력*/
	scanf("%d", &n);		// 입력한 데이터 개수를 변수 n에 저장

	for (count = 0; count < n; ++count) {
	/* n에 입력한 횟수까지 for문을 반복 수행 */
		printf("i=%d x=", count + 1);
		/* 실수의 입력을 받기 위한 메세지 출력 */
		scanf("%f", &list[count]);
		/* list 배열에 변수 n에 입력한 횟수까지 실수 입력 */
		sum += list[count];		// list 배열에 입력한 실수의 합 계산
	}	// for문 닫기

	avg = sum / n;		
	/* 평균을 구하기 위해 sum에 n을 나눈 값을 입력하는 변수 avg */
	printf("The average is %5.2f \n", avg);
	/* avg 변수에 입력된 값을 출력 */

	for (count = 0; count < n; ++count) {
	/* n에 입력한 횟수까지 for문을 반복 수행 */
		d = list[count] - avg;
		/* 표준편차 d = 각 원소 xi - 평균 avg */
		printf("i = %d x = %5.2f d = %5.2f \n", count + 1, list[count], d); // 표준편차 d 출력
	} // for문 닫기

} // main() 함수 닫기



