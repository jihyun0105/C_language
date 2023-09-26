
#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)
void main() {

	printf("<< 1. 학점 출력하기 >>");
	float score = 0.0;
	char n;
	while (score >= 0) {  // ()조건을 만족하면 게속 반복하여 실행하라

		printf("\n평균 점수 입력(-1:종료) >>");

		scanf("%f", &score);
		if (score >= 90.0)
			printf("1-1) if~else 사용 : 학점은 A입니다.\n");
		else if (80.0 <= score)
			printf("1-1) if~else 사용 : 학점은 B입니다.\n");
		else if (70.0 <= score)
			printf("1-1) if~else 사용 : 학점은 C입니다.\n");
		else if (score == -1)     //score가 -1이면 멈추고 빠져나가시오.
			break;

		else
			printf("1-1) if~else 사용 : 학점은 F입니다.\n");  // 위 점수구간에 해당하지 않으면 모두 F


		int score_ = score;
		//char A, B, C, F;
		//A = (score_ >= 90.0);
		//B = (80.0 <= score_ && score_ < 90.0);
		//C = (70.0 <= score_ && score_ < 80.0);
		//F = (score_ < 70.0);


		switch (score_ / 10) {
		case 10:
		case 9:   //점수를 10으로 나누었을 때 9이면 A학점
			printf("1-2) switch  사용 : 학점은 A입니다.\n");
			break;
		case 8:  // 점수를 10으로 나누었을 때 8이면 B학점
			printf("1-2) switch  사용 : 학점은 B입니다.\n");
			break;
		case 7:  // 점수를 10으로 나누었을 때 7이면 C학점
			printf("1-2) switch  사용 : 학점은 C입니다.\n");
			break;

		default: //나머지 다른 값이면 F 학점
			printf("1-2) switch  사용 : 학점은 F입니다.\n");

		}

		score = 0;
	}

	printf("\n<< 2. 한줄에 5개의 별표 찍기 >>\n");
	unsigned int num = 0;
	int i = 0; // i = 행을 담당할 수 있는 변수
	int j = 0;  // j =열을 담당할 수 있는 변수

	while (num <= 10) {

		printf("10보다 큰 양수 입력 >>");
		scanf("%u", &num);

	}


	printf("\n2-1) while 사용---\n");

	while (i < (num / 5)) {

		j = 0;    //한번 while문을 돌고나면 j = 6이 되므로 초기화시켜준다.
		while (j < 5) {
			printf("*");

			j++;
		}
		printf("\n");
		i++;
	}
	j = 0;
	while (j < (num % 5)) {  //나머지값만큼 *을 입력하라
		printf("*"); j++;

	} printf("\n");


	printf("\n2-2) do~while 사용---\n");
	i = 0;
	do {
		i++;
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < 5);

		printf("\n");
	} while (i < ((num) / 5));


	j = 0;
	do {
		printf("*");
		j++;

	} while (j < (num % 5));


	printf("\n");


	printf("\n2-3) for 사용---\n");
	for (i = 0; i < (num / 5); i++)  // i의 초기값은 0이고 조건문은 i <(num/5)이며 i는 증가한다. 
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	for (j = 0; j < (num % 5); j++)
	{
		printf("*");
	}

	printf("\n");

	int num_;
	printf(" \n<< 3. 숫자 단위 갯수 >>\n");
	printf("10000미만 숫자 입력 >> ");  // 10000미만의 수를 입력받음
	scanf("%d", &num_);
	printf("\n--- 단  위 ---\n");

	int a, c = 0, d, n1, n2, k, num1, t = 0;
	num1 = num_;
	while (num_ > 0)
	{
		t = t + 1; // t는 1씩 증가
		d = 4 - t;  // d는 1씩 감소

		a = pow(10, d);
		n = num_ / a;
		for (int i = 0; i < t; i++)
		{
			printf(" ");
		}
		printf("%d 단위 : %d\n", a, n);   // 즉, d에 따라 a의 값이 바뀌고 출력값이 달라짐


		num_ = num_ % a;  // num_은 num_을 a로 나눈 나머지로 게속 바뀜 

	}

	for (k = 1; k < 5; k++) {

		n1 = num1 % 10;
		n2 = n1 * (pow(10, 4 - k));  //for문에 의해 k의 값이 게속 변하고 그에 따라 n2도 변함
		c = c + n2;  // c는 c에다가 n2값이 더해지면서 계속 변함
		num1 = (num1 - n1) / 10;  // num1은 num1에서 일의자리를 빼고 10으로 나눈 몫으로 바뀜

		/* Ex) num1 = 9876
		n1 = 6 , n2 = 6000, c = 6000
			  num1 = 987
		n1 = 7, n2 = 700, c = 6700
			  num1 = 98
		n1 = 8, n2 = 80, c = 6780
			  num1 = 9
		n1 = 9, n2 = 9, c = 6789 */
	}
	printf("\n입력된 숫자를 거꾸로 출력 : %d ", c);
}


