#include<stdio.h>		// 표준 입출력 헤더 파일인 stdio.h를 포함시킴
#pragma warning(disable:4996)		// 권장하지 않는 함수 사용에 대한 경고 메세지 무시

char upper(char ch);		// 문자형 변수 ch의 대문자를 나타내는 피호출함수 upper 선언
char lower(char ch);		// 문자형 변수 ch의 소문자를 나타내는 피호출함수 lower 선언

void main() {
	/* main() 함수는 가장 먼저 호출되는 함수이므로 반드시 모든 프로그램에 존재해야 함 */
	char in_s[50], out_s[50];
	/* 입출력할 문자열 저장을 위해 배열명이 각각 in_s, out_s인 배열 선언*/
	char ch;		// 문자형 변수 ch 선언
	int i = 0;		// 변수 i를 초기화
	
	printf("문자열을 입력하시오. (50자 이내) : ");		// 문자열(50자 이내) 입력 메세지 출력
	scanf("%s", in_s);		// 문자를 입력받아 배열 in_s에 저장
	
	ch = in_s[i];		// 배열 in_s를 변수 ch로 선언
	
	while (ch != '\0') {			// while문 조건식(ch != '\0')
		if (ch >= 'A' && ch <= 'Z')	// 입력받는 글자가 대문자일 경우
			out_s[i] = lower(ch);		// 소문자로 출력
		else if (ch >= 'a' && ch <= 'z')	// 입력받는 글자가 소문자일 경우
			out_s[i] = upper(ch);				// 대문자로 출력
		else			// 영문 대소문자 외 다른 문자일 경우
			out_s[i] = ch;	// 그대로 출력
		i++;		// 반복 횟수를 제어하는 while문 증감식
		ch = in_s[i];		// in_s에 입력된 문자를 변수 ch에 저장
	}		// while문 닫기

	out_s[i] = '\0';		// 문자열의 끝을 나타냄
	printf("변환된 결과 ==> %s \n", out_s);		// 변환된 결과 출력
}	// main 함수 닫기

char upper(char ch) {		// 피호출함수(사용자 정의 함수) upper가 main() 함수 뒤에 정의됨
	return ch - 32;				// ch의 결과값 반환
}		// upper 함수 닫기

char lower(char ch) {		// 피호출함수(사용자 정의 함수) lower가 main() 함수 뒤에 정의됨
	return ch + 32;			// ch의 결과값 반환
}		// lower  함수 닫기



