#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
#define SIZE 100    // 크기 정해줌
#define MAX 16
/* << 과제 1번>>
영문 문자열을 공백을 포함하여 gets()로 입력 받아 puts()로 출력하되 (50점)
① 각 단어의 첫 글자를 대문자로 변경한 후 출력하고, 이 때 대문자 변환 함수(toupper())를
사용하지 않는다.
• 힌트 : 공백을 만나면 그다음 단어의 첫글자를 대문자로 바꾼다.
• ascii 값 a(97), A(65) 이용. --> p201 [예 7.2] 참조
② 문자열에서 공백 문자를 모두 제거하여 출력한다.
③ 단, “1…. 입력>>, 출력>>” 등은 printf()를 이용해도 된다.
*/



void main() {

	char str[SIZE] = { 0 };     // 초기화 시켜줌
	printf("<< 1. 문자열을 공백 포함해서 입력 >>\n");
	printf("입력 >> ");
	gets(str);     //gets로 문자열 입력받음
	printf("출력 >> ");
	puts(str);     // puts로 문자열 출력받음

	printf("대문자로 변경한 문자열 :");

	for (int i = 0; i < SIZE; i++) {

		if (i == 0) {      //첫번째 글자는 대문자로 변경해라
			str[i] = str[i] - 'a' + ' A';
		}
		else if (str[i] == ' ') {   // 공백을 만날경우
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z') {    //공백 다음글자가 소문자라면
				str[i + 1] = str[i + 1] - 'a' + 'A';      // 대문자로 바꿔주어라!
			}
		}
		else
			str[i] = str[i];    // 아닐경우 그대로 출력

	}
	puts(str);    //puts를 통해  대문자로 변경한 문자열을 출력한다.

	printf("공백 제거한 문자열 : ");

	char ch[SIZE] = { 0 };

	for (int j = 0, i = 0; str[j] != 0; j++) {
		if (str[j] != ' ') {   // str[j]가 공백이 아니라면
			ch[i++] = str[j];  // str을 ch배열로 옮겨서 저장해라
		}
	}

	puts(ch);    // puts로 공백이 제거된 문자열을 출력

}

/*
<< 1. 문자열을 공백 포함해서 입력 >>
입력 >> yonsei university 2021
출력 >>yonsei university 2021

대문자로 변경한 문자열 : Yonsei University 2021
공백 제거한 문자열 :  YonseiUniversity2021
*/

/* << 과제 2번>>
4개의 영문 단어를 입력 받아 2차원 배열1에 저장하고, 배열1, 배열2 두개의 배열을 함수의
인자로 넘겨 입력된 순서를 거꾸로 배열2에 저장하여 ,배열2의 내용과 단어의 길이를
출력한다. 이 때, 배열의 출력도 함수를 불러 수행하되, 반복문을 사용한다. 배열 이름은
영문으로 작성한다. (50점)
 이 문제는 내장 함수를 사용해도 된다.
 void reverse_array(char 배열1, char 배열2, int 행값);
 void print_array(char 배열2, int 행값);
*/



void reverse_array(char ary1[4][MAX], char ary2[4][MAX], int i) {
	//int i 는 행값

	for (int i = 0; i < 4; i++) {
		printf("%d행 입력 >>", i + 1);
		scanf("%s", ary1[i], 16);     //scanf로 ary1 입력받음
	}
	strcpy(ary2[0], ary1[3]);    //strcpy로 ary1을 ary2에 거꾸로 저장
	strcpy(ary2[1], ary1[2]);
	strcpy(ary2[2], ary1[1]);
	strcpy(ary2[3], ary1[0]);
}

void print_array(char ary2[4][MAX], int j) {

	printf("---reverse된 내용 ---\n");
	int len;

	for (j = 0; j < 4; j++) {
		for (j = 0; j < 4; j++) {
			printf("%d행 : 단어 ", j + 1);


			len = 0;
			len = strlen(ary2[j]);  // strlen 이거 사용 가능

			printf("%s,    길이=%d\n", ary2[j], len);

		}

	}
}

void main() {
	char ary1[4][MAX] = { 0 };
	char ary2[4][MAX] = { 0 };
	int i = 0, j = 0;

	printf("<<2. 4개의 단어 입력 및 내용과 길이 출력 >> \n");

	reverse_array(ary1, ary2, i);    //reverse_array 호출

	print_array(ary2, j);    //print_array 호출

}
/*
<<2. 4개의 단어 입력 및 내용과 길이 출력 >>
1행 입력 >> BigData
2행 입력 >> MachineLearning
3행 입력 >> C-Program
4행 입력 >> Python
---reverse된 내용 ---
1행 : 단어=Python, 길이=6
2행 : 단어=C-Program, 길이=9
3행 : 단어=MachineLearning, 길이=15
4행 : 단어=BigData, 길이=7
*/















