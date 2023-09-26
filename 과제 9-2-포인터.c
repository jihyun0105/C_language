#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
#define MAX 100
/*
<<과제 1번>>
1) main()에서 2차원 정수(3x4)에 초기값을 저장하고, (20점)
? 2차원 배열의 값은 아래의 포인터 함수 호출로 출력하되, 반복문을 사용한다.
? void ary_prn(int* 이차원배열);
*/
void ary_prn(int* ary) {

	int i, j;
	for (i = 0; i < 3; i++) {

		for (j = 0; j < 4; j++) {
			printf("  %2d  ", *(ary + i * 4 + j));

		}
		printf(" \n ");

	}
}


int main() {
	printf("<< 1) 2차원 배열의 값 출력 >>\n ");
	int* arr[3][4] = { {1,2,3,4,},{5,6,7,8},{9,10,11,12} };
	ary_prn(*arr);
}


/* << 1) 2차원 배열의 값 출력>>
	  1    2    3    4
	  5    6    7    8
	  9   10   11    12
*/

#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
#define MAX 80

/*<<과제 2번>>
* 2) main()에서 문자 배열(3x80)을 선언하여, 입출력 함수 모두 반복문을 사용한 (40점)
? 함수 호출로 값을 입력 받아 저장하고
? void input_string(char* 이차원배열);
? 함수 호출로 내용을 출력한다.
? void print_string(char* 이차원배열);
*/
void input_string(char(*p)[80]) { 

	for (int i = 0; i < 3; i++) {
		gets(p[i]);
	}

	//for (int i = 0; i < 3; i++) {
		//puts(p[i]);
	//}
}

void print_string(char(*p)[80]) {

	for (int i = 0; i < 3; i++) {

		puts(p[i]);
	}

}

//포인터가 하나면 일차원 배열을 받을 수 있음
// **pp이런거는 2차원 배열처럼 사용을 함

int main() {

	printf("<< 2) 3개의 문장을 입력하세요 >>\n");
	char ary[3][MAX] = { 0 };
	input_string(ary);
	printf("\n");
	printf(" << 입력된 문장은 >>\n");
	print_string(ary);


}

/*
<< 2) 3개의 문장을 입력하세요 >>
 Yonsei University
 Mirae Campus
 Computer Programmig

 << 입력된 문장은 >>
 Yonsei University
 Mirae Campus
 Computer Programmig
 */


#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

typedef struct profile {
	char name[20];
	double gpa;
	int eng_score;
};

void input_data(struct profile* p) {
	for (int i = 0; i < 3; i++) {
		scanf("%s", &(*p).name);
		scanf("%lf", &(*p).gpa);
		scanf("%d", &(*p).eng_score);
	}
}

void top(struct  profile* pstd) {
	for (int j = 0; j < 3; j++) {
		if (pstd->gpa >= 4.0 && pstd->eng_score >= 900) {
			printf("%s, %.1lf, %d\n", pstd->name, pstd->gpa, pstd->eng_score);
		}  pstd++;
	}

}


int main() {
	printf("<< 3) 3명의 이름, 학점, 영어점수를 입력하세요 >>\n");
	struct profile info[3];
	input_data(&info);

	printf("<< 상위 그룹 학생 명단>>\n");
	top(&info);


}

/*
<< 3) 3명의 이름, 학점, 영어점수를 입력하세요 >>
장보고 3.9 940
유관순 4.3 750
강감찬 4.5 990

<< 상위 그룹 학생 명단 >>
강감찬, 4.5, 990
*/



