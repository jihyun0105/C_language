/* 10보다 큰 양수를 입력 받아 한 줄에 5개씩 입력 받은 개수만큼
‘ * ’ 을 찍는다.
10 이하의 양수가 입력되면 계속 입력 받는다. (45점)
1) while 문
2) do~while 문
3) for 문을 차례로 사용하여 출력한다.  */

#include <stdio.h>
#pragma warning(disable : 4996)
void main() {

	printf("<< 2. 한줄에 5개의 별표 찍기>>\n");
	unsigned int num = 0;
	int i = 0; // i = 행을 담당할 수 있는 변수
	int j = 0;  // j =열을 담당할 수 있는 변수

	while (num <= 10) {

		printf("10보다 큰 양수 입력 >>");
		scanf("%u", &num);

	}


	printf("2-1) while 사용---\n");

	while (i < (num / 5)) {

		j = 0;
		while (j <= 5) {
			printf("*");

			j++;
		}
		printf("\n");
		i++;
	}
	j = 0;
	while (j < (num % 5)) {
		printf("*"); j++;

	} printf("\n");

	
	printf("2-2) do - while 사용---\n");
    i = 0;
	do { i++;
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < 5);

		printf("\n");
	} while (i < ((num ) / 5));
	     

	j = 0;
	do {
		printf("*");
		j++;

	} while (j < (num % 5));


	printf("\n");


	printf("2-3) for 사용---\n");
	for (i = 0; i < (num / 5); i++)
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

}








/* << 2. 한줄에 5개의 별표 찍기>>
10보다 큰 양수 입력 >> 10
10보다 큰 양수 입력 >> 5
10보다 큰 양수 입력 >> 18
2-1) while 사용---
*****
*****
***
2-2) do- while 사용 ---
*****
*****
***
2-3) for 사용---
*****
*****
***
*/


