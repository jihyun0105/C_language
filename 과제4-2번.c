/* 10���� ū ����� �Է� �޾� �� �ٿ� 5���� �Է� ���� ������ŭ
�� * �� �� ��´�.
10 ������ ����� �ԷµǸ� ��� �Է� �޴´�. (45��)
1) while ��
2) do~while ��
3) for ���� ���ʷ� ����Ͽ� ����Ѵ�.  */

#include <stdio.h>
#pragma warning(disable : 4996)
void main() {

	printf("<< 2. ���ٿ� 5���� ��ǥ ���>>\n");
	unsigned int num = 0;
	int i = 0; // i = ���� ����� �� �ִ� ����
	int j = 0;  // j =���� ����� �� �ִ� ����

	while (num <= 10) {

		printf("10���� ū ��� �Է� >>");
		scanf("%u", &num);

	}


	printf("2-1) while ���---\n");

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

	
	printf("2-2) do - while ���---\n");
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


	printf("2-3) for ���---\n");
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








/* << 2. ���ٿ� 5���� ��ǥ ���>>
10���� ū ��� �Է� >> 10
10���� ū ��� �Է� >> 5
10���� ū ��� �Է� >> 18
2-1) while ���---
*****
*****
***
2-2) do- while ��� ---
*****
*****
***
2-3) for ���---
*****
*****
***
*/


