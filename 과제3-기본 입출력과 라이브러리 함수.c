#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define PI 3.141592
#pragma warning(disable: 4996)  // scanf�� ������ �����ϱ� ����

int main(void)
{
	printf(" << 1. �� �� ������ �Ÿ�>>\n");
	printf("�� ���� ��ǥ�� �Է�>>");
	double  x1, y1, x2, y2;

	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	double distance = pow(pow((x1 - x2), 2) + pow((y1 - y2), 2), 0.5);

	printf("Distance = %.4lf\n", distance);



	int a, b, c, d, e;
	srand(time(NULL));     // rand�� ������ �ݺ��� �� �����
	a = 1 + rand() % 45;     // 1~45 ������ ���� ������ �����ؾ� �ϹǷ� %45�� ���� �� 1�� ������
	b = 1 + rand() % 45;
	c = 1 + rand() % 45;
	d = 1 + rand() % 45;
	e = 1 + rand() % 45;

	printf("<<2. 5���� ���� ����>>\n");
	printf("%d %d %d %d %d\n", a, b, c, d, e);




	printf(" << 3. ���� ��ȯ �� ASCII�ڵ� ���>>\n");
	getchar();
	unsigned int num = 567;       // ������� �Է¹޾ƾ� �ϹǷ� unsigned int �� �����

	char ch;

	printf("�ϳ��� ���ڿ� �������� �������� �����Ͽ� �Է� >>");
	scanf("%c %u", &ch, &num);   // unsinged�� ����Ͽ����Ƿ� %u�� �޾���

	printf("�Էµ� ���ڰ��� ascii(%c) = %d�̰�,\n", ch, ch);

	printf("�Էµ� ���ڰ��� %d, 8���� =%#o, 16���� = %#x", num, num, num);

}