#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
#define MAX 100
/*입력 문장을 배열에 저장하고 해당 문장의 모음이 몇 번 나오는지를 출력하라. 문장은
소문자만으로 이루어져 있다고 가정한다. 단, 아래 함수를 호출해야 하며 이 함수는 포인터
산술 연산을 써서 구현해야 한다. (50점)
int count_vowel(char * arr, int length)*/


int count_vowel(char* arr, int length) {  //count_vowel함수 정의

	int num = 0;
	for (int i = 0; i < length; i++) {

		if (*arr == 'i' || *arr == 'a' || *arr == 'e' || *arr == 'o' || *arr == 'u') {
			num++;   // 모음일 경우 num 증가시키고
		}
		arr++;  // 그렇지 않을경우 포인터 산술 연산을 이용하여 넘김
	}
	return num;
}

void main() {
	int  length = 0, num;
	char arr[MAX] = { 0 };
	printf("1. 공백 포함 문장 입력\n");

	while ((gets(arr) == '\n0'));   // gets로 문자열 입력받음
	length = strlen(arr);    // strlen을 이용하여 길이를 측정

	num = count_vowel(arr, length);   //count_vowel함수 호출

	printf("모음은 %d개 있습니다\n", num);
}
/*
 1. 공백 포함 문장 입력
 yonsei university mirae campus
 모음은 12개 있습니다.
*/


//<<과제 2번>>
#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
#define MAX 100

/*양의 정수를 입력 받아 a 배열에 저장한다. 중간에 0 이나 음수가 입력되면 그 앞에 양수까지
저장한다. 이후 아래 함수를 호출 해야 한다. 이 함수는 a 배열을 넘겨받아 요소의 순서를
뒤집어서 b 배열에 저장한다. 이후 main으로 되돌아가 b 배열을 순서대로 출력한다. 단,
입력 정수는 하나 이상으로 가정한다. (50점)
void reverse_array(int *a, int *b, int length)*/

void reverse_array(int* a, int* b, int length) {  //reverse_array함수 정의
	int j = length - 1;    //마지막  값은 NULL이므로 length-1부터 시작
	for (int i = 0; i < length; i++) {
		b[j] = a[i];   // 즉 a[0] = b[length -1]
		j--;         // i는 점점 커지고 j는 작아져서 반대로 저장
	}
}

int main() {

	int a[MAX] = { 0 };
	int b[MAX] = { 0 };

	printf("\n2.양수를 공백으로 구분하여 입력(0 이하 종료)\n");
	int len = 0;
	for (int i = 0; i < MAX; i++) {
		scanf("%d", &a[i]);
		if (a[i] <= 0) {   // 음수나 0이 입력받는다면
			a[i] == NULL;  // a[i]배열에는 NULL을 넣어주고 벗어난다.
			break;            // 그 앞 양수까지 저장해야 하므로
		}
		len += 1;    // 길이도 숫자가 하나씩 입력될때마다 체크해준다.
	}

	reverse_array(a, b, len);    //reverse_array함수 호출
	for (int i = 0; i < len; i++) {

		printf("%d", b[i]); // 배열 b에 거꾸로 저장된 숫자를 출력해줌 
		printf(" ");   // 중간 공백을 만들어준다.
	}


}


/*2.양수를 공백으로 구분하여 입력(0 이하 종료)
9 7 3 6 2 8 -1
8 2 6 3 7 9 */