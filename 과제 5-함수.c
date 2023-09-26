#pragma warning ( disable : 4996 )  
#include<stdio.h>

int IsLeapYear(int);    //  IsLeapYear 함수  원형  선언 
int GetDaysOfMonth(int, int);    // GetDaysOfMonth 함수 원형 선언 

int IsLeapYear(int year) {  // IsLeapYear함수 정의

	//return((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))?1;0;    <조건연산자 사용해도 괜찮음>
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) // 윤년일 경우
		return 1;    // 1을 반환하고 
	else   //윤년이 아닐경우
		return 0;  // 0을 반환한다.
}

int GetDaysOfMonth(int year, int month) { // GetDaysOfMonth함수 정의  , year과 month는  인자
	int day;
	if (1 >= month <= 12) {    //month가 1~12일 경우


		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			day = 31;     // 만약 month가 1월, 3월 , 5월, 7월, 8월, 10월, 12월일 경우 31일
		if (month == 4 || month == 6 || month == 9 || month == 11)
			day = 30;  //만약 4월, 6월, 9월, 11월인 경우 30일
		if (month == 2)  //2월인 경우
		{
			int yun = IsLeapYear(year);  //  IsLeapYear함수 호출
			if (yun = 1)  // yun = 1, 즉 윤년일 경우 29일
				day = 29;
			else if (yun = 0)  //yun = 0, 즉 윤년이 아닐경우 28일
				day = 28;
		}
		return day;
	}
}


int main(void) {
	int year, month, n, year_;

	printf("연도와 월을 입력하세요 :  ");
	scanf(" %d %d,", &year, &month);

	while (1) {    //무한루프 생성
		if (year < 0 || month > 12) {   //연도가 음수이거나 달이 12보다 클 경우
			printf("다시 연도와 월을 입력하세요 : ");  //재입력 받는다
			scanf("%d %d,", &year, &month);
		}
		else   // 연도가 양수이거나 달이 12보다 작을경우 벗어난다. 
			break;
	}

	if (year >= 0 && year < 1000) {  //year이 0보다 크고 1000보다 작은 즉 1~3자리일 경우
		year_ = year + 2000;   //year에 2000을 더해준다
	}
	else
		year_ = year;   //year이 1000보다 클 경우  그냥 year을 출력한다.
	int date = GetDaysOfMonth(year, month); //함수 GetDaysOfMonth(int, int) 호출

	printf("%d년 %d월 %d일입니다.\n", year_, month, date);
	return 0;


}

//----------------------------------------------------------------------------------------

#include <stdio.h>
#pragma warning(disable : 4996)

int sum(int num) {   //sum 함수 정의

	int num_ = number(num);  //number함수 호출

	if (num == 0)   //num이 0일 경우 0
	{
		num_ = 0;
		printf("%d", num_);
		return 0;
	}
	else
		printf("%d + ", num_);  //num이 0이 아닐경우 하나씩 줄여가며 더하기
	return num_ + sum(num - 1); //sum함수 호출 즉 , 재귀함수 이용

}

int number(int n) {   //number 함수 정의
	return (n * 10) + 2;
}

void main() {
	int n;
	printf("정수 입력 >> ");
	scanf("%d", &n);
	printf("sum = ");

	int num1 = sum(n);   //sum함수 호출
	printf(" = %d\n ", num1);

}
//--------------------------------------------------------------------------------------

#pragma warning(disable : 4996)
#include<stdio.h>
int IsAlphabetic(char);  //IsAlphabetic함수 선언
int IsLower(char);  // IsLower함수 선언
int IsUpper(char);  // IsUpper함수 선언

//소문자 정의  대문자 정의 둘중 하나라도 만족 하면 알파벳
int IsLower(char n) {    //IsLower함수 정의
	if (n >= 'a' && n <= 'z')
		//만약   입력값이 소문자 a부터 z까지일 경우
		return 0;  // return값 0
	else  // 그 외의 것이 입력될 경우
		return 1;   //return 1

}

int IsUpper(char n) {  // IsUpper함수 정의

	if (n >= 'A' && n <= 'Z')
		// 입력값이 대문자 A부터 Z일 경우
		return  0;  //return값 0
	else	 //그 외의 것이 입력될 경우 
		return 1;    //return 1
}
int IsAlphabetic(char n) {   //IsAlphabetic 함수 정의

	int  char1 = IsLower(n);  //  IsLower 함수 호출
	int  char2 = IsUpper(n);   //IsUpper 함수 호출

	if (char1 == 0 || char2 == 0) // 즉 소문자나 대문자가 입력될 경우
		return  0;   //return 0
	else  //  그 외의 것이 입력될 경우
		return 1;   //return 1
}
int main(void) {

	char  n;
	while (1) {
		printf("문자를 입력하세요(.입력시 종료 ) : ");
		scanf(" %c", &n);
		if (n == '.')   // n이 .이 입력될 경우 종료
			break;
		else {
			int char3 = IsAlphabetic(n);  //IsAlphabetic 함수 호출
			if (char3 == 0)
				printf("%c는 알파벳입니다\n", n);
			else if (char3 == 1)
				printf("%c는 알파벳이 아닙니다\n", n);

			int char1 = IsLower(n); // IsLower 함수 호출
			if (char1 == 0)
				printf("%c는 소문자입니다.\n", n);
			else if (char1 == 1)
				printf("%c는 소문자가 아닙니다.\n", n);

			int char2 = IsUpper(n); //  IsUpper 함수 호출
			if (char2 == 0)
				printf("%c는 대문자입니다.\n", n);
			else if (char2 == 1)
				printf("%c는 대문자가 아닙니다.\n", n);

		}
	}
}









