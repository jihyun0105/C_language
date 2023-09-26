#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define PI 3.141592
#pragma warning(disable: 4996)  // scanf의 오류를 제거하기 위함

int main(void)
{
	printf(" << 1. 두 점 사이의 거리>>\n");
	printf("두 점의 좌표를 입력>>");
	double  x1, y1, x2, y2;

	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	double distance = pow(pow((x1 - x2), 2) + pow((y1 - y2), 2), 0.5);

	printf("Distance = %.4lf\n", distance);



	int a, b, c, d, e;
	srand(time(NULL));     // rand를 여러번 반복할 때 사용함
	a = 1 + rand() % 45;     // 1~45 사이의 정수 난수를 생성해야 하므로 %45를 해준 뒤 1을 더해줌
	b = 1 + rand() % 45;
	c = 1 + rand() % 45;
	d = 1 + rand() % 45;
	e = 1 + rand() % 45;

	printf("<<2. 5개의 정수 난수>>\n");
	printf("%d %d %d %d %d\n", a, b, c, d, e);




	printf(" << 3. 진법 변환 및 ASCII코드 출력>>\n");
	getchar();
	unsigned int num = 567;       // 양수값을 입력받아야 하므로 unsigned int 를 사용함

	char ch;

	printf("하나의 문자와 정수값을 공백으로 구분하여 입력 >>");
	scanf("%c %u", &ch, &num);   // unsinged를 사용하였으므로 %u로 받아줌

	printf("입력된 문자값은 ascii(%c) = %d이고,\n", ch, ch);

	printf("입력된 숫자값은 %d, 8진수 =%#o, 16진수 = %#x", num, num, num);

}