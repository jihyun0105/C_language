
#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)
void main() {

	printf("<< 1. ���� ����ϱ� >>");
	float score = 0.0;
	char n;
	while (score >= 0) {  // ()������ �����ϸ� �Լ� �ݺ��Ͽ� �����϶�

		printf("\n��� ���� �Է�(-1:����) >>");

		scanf("%f", &score);
		if (score >= 90.0)
			printf("1-1) if~else ��� : ������ A�Դϴ�.\n");
		else if (80.0 <= score)
			printf("1-1) if~else ��� : ������ B�Դϴ�.\n");
		else if (70.0 <= score)
			printf("1-1) if~else ��� : ������ C�Դϴ�.\n");
		else if (score == -1)     //score�� -1�̸� ���߰� ���������ÿ�.
			break;

		else
			printf("1-1) if~else ��� : ������ F�Դϴ�.\n");  // �� ���������� �ش����� ������ ��� F


		int score_ = score;
		//char A, B, C, F;
		//A = (score_ >= 90.0);
		//B = (80.0 <= score_ && score_ < 90.0);
		//C = (70.0 <= score_ && score_ < 80.0);
		//F = (score_ < 70.0);


		switch (score_ / 10) {
		case 10:
		case 9:   //������ 10���� �������� �� 9�̸� A����
			printf("1-2) switch  ��� : ������ A�Դϴ�.\n");
			break;
		case 8:  // ������ 10���� �������� �� 8�̸� B����
			printf("1-2) switch  ��� : ������ B�Դϴ�.\n");
			break;
		case 7:  // ������ 10���� �������� �� 7�̸� C����
			printf("1-2) switch  ��� : ������ C�Դϴ�.\n");
			break;

		default: //������ �ٸ� ���̸� F ����
			printf("1-2) switch  ��� : ������ F�Դϴ�.\n");

		}

		score = 0;
	}

	printf("\n<< 2. ���ٿ� 5���� ��ǥ ��� >>\n");
	unsigned int num = 0;
	int i = 0; // i = ���� ����� �� �ִ� ����
	int j = 0;  // j =���� ����� �� �ִ� ����

	while (num <= 10) {

		printf("10���� ū ��� �Է� >>");
		scanf("%u", &num);

	}


	printf("\n2-1) while ���---\n");

	while (i < (num / 5)) {

		j = 0;    //�ѹ� while���� ������ j = 6�� �ǹǷ� �ʱ�ȭ�����ش�.
		while (j < 5) {
			printf("*");

			j++;
		}
		printf("\n");
		i++;
	}
	j = 0;
	while (j < (num % 5)) {  //����������ŭ *�� �Է��϶�
		printf("*"); j++;

	} printf("\n");


	printf("\n2-2) do~while ���---\n");
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


	printf("\n2-3) for ���---\n");
	for (i = 0; i < (num / 5); i++)  // i�� �ʱⰪ�� 0�̰� ���ǹ��� i <(num/5)�̸� i�� �����Ѵ�. 
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
	printf(" \n<< 3. ���� ���� ���� >>\n");
	printf("10000�̸� ���� �Է� >> ");  // 10000�̸��� ���� �Է¹���
	scanf("%d", &num_);
	printf("\n--- ��  �� ---\n");

	int a, c = 0, d, n1, n2, k, num1, t = 0;
	num1 = num_;
	while (num_ > 0)
	{
		t = t + 1; // t�� 1�� ����
		d = 4 - t;  // d�� 1�� ����

		a = pow(10, d);
		n = num_ / a;
		for (int i = 0; i < t; i++)
		{
			printf(" ");
		}
		printf("%d ���� : %d\n", a, n);   // ��, d�� ���� a�� ���� �ٲ�� ��°��� �޶���


		num_ = num_ % a;  // num_�� num_�� a�� ���� �������� �Լ� �ٲ� 

	}

	for (k = 1; k < 5; k++) {

		n1 = num1 % 10;
		n2 = n1 * (pow(10, 4 - k));  //for���� ���� k�� ���� �Լ� ���ϰ� �׿� ���� n2�� ����
		c = c + n2;  // c�� c���ٰ� n2���� �������鼭 ��� ����
		num1 = (num1 - n1) / 10;  // num1�� num1���� �����ڸ��� ���� 10���� ���� ������ �ٲ�

		/* Ex) num1 = 9876
		n1 = 6 , n2 = 6000, c = 6000
			  num1 = 987
		n1 = 7, n2 = 700, c = 6700
			  num1 = 98
		n1 = 8, n2 = 80, c = 6780
			  num1 = 9
		n1 = 9, n2 = 9, c = 6789 */
	}
	printf("\n�Էµ� ���ڸ� �Ųٷ� ��� : %d ", c);
}


