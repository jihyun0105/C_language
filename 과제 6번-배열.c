#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable : 4996)
//<< 과제 1번>>
/*배열에 1~10의 값을 갖는 20개의 랜덤 숫자를 저장한 후 출력하고, 찾으려는 숫자를 입력 받아 그 값이
배열에 몇 개 있는지 개수도 출력한다.그리고 1~10 각각 숫자의 개수를 세어 출력 형식을 맞춰 출력하되,
자료의 저장 및 출력은 반드시 반복문을 사용한다.
 실행할 때마다 매번 다른 랜덤 숫자가 저장되도록 seed 값을 설정해야 한다*/
int main() {
	printf("<< 1. 숫자찾기 >>\n");
	int i, n;
	int data[20];     //배열의 원소개수 정해줌
	srand(time(NULL));
	for (i = 0; i < 20; i++) {
		data[i] = (1 + rand() % 10);    //랜덤함수
		printf("%d ", data[i]);    //배열을 나열하여라
	}

	printf("\n찾으려는 숫자 입력(1~10) >>  ");
	scanf(" %d", &n);

	int x = 0;
	for (i = 0; i < 20; i++) {
		if (n == data[i]) {
			x = x + 1;      //입력된 값이 배열에 저장된 수와 같다면 1증가
		}
		else
			x = x;       // 입력된 값이 배열에 저장된 수와 다르다면 그대로
	}
	printf("숫자 8은(는) 배열에 %d개 있습니다.\n\n", x);


	printf("숫자 개수\n");
	printf("---------\n");
	int num = 1;
	while (num <= 10) {      //num이 10일때까지 반복해라
		int count = 0;        //count는 0부터 시작이고
		for (i = 0; i < 20; i++) {

			if (num == data[i])    //만약 num이 배열값과 같다면 +1해서 저장
				count = count + 1;
			else
				count = count;    // 다르다면 그대로 저장
		}
		printf(" %2d : %d개\n", num, count);

		num++;     // num 하나 증가시켜서 while문으로
	}



	printf("----------\n");
	printf("총 : 20개\n");
}

/* <<1. 숫자 찾기 >>
6 10 6 10 10 6 3 7 9 8 6 1 5 10 6 2 1 1 4 6
찾으려는 숫자 입력(1~10) >> 8
숫자 8은(는) 배열에 1개 있습니다.

숫자 개수
---------
 1 :  개
 2 :  개
 3 :  개
 4 :  개
 5 :  개
 6 :  개
 7 :  개
 8 :  개
 9 :  개
10 : 개
---------
총 : 20개
*/


//<<과제2번>>
/*아래의 숫자를 2차원 배열에 저장한 후, 함수를 호출하여 행별 합계 및 평균을 계산하여 결과 화면과
같이 출력한다. (50점)
 계산 및 출력은 함수로 작성하여 합계 및 평균을 자릿수를 맞춰
출력하되, 배열 출력시 반드시 반복문으로 작성한다.
• void print_array(float 배열, int 열, int 행);
• 배열 및 변수명은 영문으로 작성한다.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable : 4996)
void print_array(double a[4][5], int i, int j) {

	printf("구분");
	for (int k = 1; k < 5; k++) {
		printf(" %d열", k);
	}
	printf(" 합계  평균\n");


	for (int i = 0; i < 4; i++) {
		printf("%d행 : ", (i + 1));

		double sum = 0;
		for (int j = 0; j < 5; j++) {
			printf(" %.lf ", a[i][j]);
		}

		sum = 0;
		for (int j = 0; j < 5; j++) {
			sum = sum + a[i][j];    // 한 열의 값을 계속 더해서 sum에 저장
		}

		double ave = (sum / 5);    //평균은 sum을 열의 개수로 나눈것

		printf("%.1lf ", sum);
		printf(" %.1lf", ave);
		printf("\n");
	}
}




void main() {
	int i = 0, j = 0;
	printf("<< 2.행렬의 합계 및 평균 계산 >> \n");
	double a[4][5] = { {25, 30, 22, 28, 32},
					   {22, 25, 28, 26, 38},
					   {25, 34, 20, 22, 40},
					   {22, 28, 27, 28, 35} };
	
	print_array(a, i, j);    //print_array함수 호출


}

/* << 2. 행렬의 합계 및 평균 계산 >>
구분 1열 2열 3열 4열 5열  합계   평균
1행 : 25  30  22  28  32  137.0  19.6
2행 : 22  25  28  26  38  139.0  19.9
3행 : 25  34  20  22  40  141.0  20.1
4행 : 22  28  27  28  35  140.0  20.0
*/



