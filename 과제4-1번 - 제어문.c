/* 1. �Ǽ������� -1�� �Էµ� ������ ���������
�Է� �޾� ������ ���� ������ ���ϴ� ���α׷���
1)if-else��
2) swith���� ���ʷ� ����Ͽ� ����Ѵ�
-��� ������ �Ǽ������� �Էµǰ�, -1�� �ԷµǾ��
�����Ѵ�.
*/

// 90.0�̻� --A
// 80.0~90.0 �̸�.--B
//70.0 ~80.0 �̸� --C
// �� ��  F

#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)
void main() {

    printf("<< 1. ���� ����ϱ� >>");
	float score =0.0;
	char n;
    while (score >= 0) {
	
	printf("\n��� ���� �Է�(-1:����)>>");
		
		scanf("%f", &score);
		if (score >= 90.0)
			printf("1-1) if-else ��� : ������ A�Դϴ�.\n");
		else if (80.0 <= score)
			printf("1-1) if-else ��� : ������ B�Դϴ�.\n");
		else if (70.0 <= score)
			printf("1-1) if-else ��� : ������ C�Դϴ�.\n");
		else if (score == -1)
			break;
			
		else
			printf("1-1) if-else ��� : ������ F�Դϴ�.\n");
		

		int score_= score;
		//char A, B, C, F;
		//A = (score_ >= 90.0);
		//B = (80.0 <= score_ && score_ < 90.0);
		//C = (70.0 <= score_ && score_ < 80.0);
		//F = (score_ < 70.0);
		
		
		switch (score_/10) {
		case 10:
		case 9:
			printf("1-2)switch ��� : ������ A�Դϴ�.\n");
			break;
		case 8:
			printf("1-2)switch ��� : ������ B�Դϴ�.\n");
			break;
		case 7:
			printf("1-2)switch ��� : ������ C�Դϴ�.\n");
			break;
		
		default :
			printf("1-2)switch ��� : ������ F�Դϴ�.\n");
				
		}
		
		score = 0;
	}

}


/* << 1. ���� ����ϱ� >>
��� ���� �Է�(-1 ����) >> 70.5
1-1) if-else ��� : ������ C�Դϴ�.
1-2) switch ��� : ������ C�Դϴ�.

������� �Է�(-1: ����) >> 99.9
1-1)if-else ��� : ������ A�Դϴ�.
1-2) switch ��� : ������ A�Դϴ�.


������� �Է�(-1: ����) >> 59.0
1-1)if-else ��� : ������ F�Դϴ�.
1-2) switch ��� : ������ F�Դϴ�
��� ���� �Է�(-1: ����)>> -1.*/ 