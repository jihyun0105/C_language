#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
#define MAX 100
/*
<<���� 1��>>
1) main()���� 2���� ����(3x4)�� �ʱⰪ�� �����ϰ�, (20��)
? 2���� �迭�� ���� �Ʒ��� ������ �Լ� ȣ��� ����ϵ�, �ݺ����� ����Ѵ�.
? void ary_prn(int* �������迭);
*/
void ary_prn(int* ary) {

	int i, j;
	for (i = 0; i < 3; i++) {

		for (j = 0; j < 4; j++) {
			printf("  %2d  ", *(ary + i * 4 + j));

		}
		printf(" \n ");

	}
}


int main() {
	printf("<< 1) 2���� �迭�� �� ��� >>\n ");
	int* arr[3][4] = { {1,2,3,4,},{5,6,7,8},{9,10,11,12} };
	ary_prn(*arr);
}


/* << 1) 2���� �迭�� �� ���>>
	  1    2    3    4
	  5    6    7    8
	  9   10   11    12
*/

#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
#define MAX 80

/*<<���� 2��>>
* 2) main()���� ���� �迭(3x80)�� �����Ͽ�, ����� �Լ� ��� �ݺ����� ����� (40��)
? �Լ� ȣ��� ���� �Է� �޾� �����ϰ�
? void input_string(char* �������迭);
? �Լ� ȣ��� ������ ����Ѵ�.
? void print_string(char* �������迭);
*/
void input_string(char(*p)[80]) { 

	for (int i = 0; i < 3; i++) {
		gets(p[i]);
	}

	//for (int i = 0; i < 3; i++) {
		//puts(p[i]);
	//}
}

void print_string(char(*p)[80]) {

	for (int i = 0; i < 3; i++) {

		puts(p[i]);
	}

}

//�����Ͱ� �ϳ��� ������ �迭�� ���� �� ����
// **pp�̷��Ŵ� 2���� �迭ó�� ����� ��

int main() {

	printf("<< 2) 3���� ������ �Է��ϼ��� >>\n");
	char ary[3][MAX] = { 0 };
	input_string(ary);
	printf("\n");
	printf(" << �Էµ� ������ >>\n");
	print_string(ary);


}

/*
<< 2) 3���� ������ �Է��ϼ��� >>
 Yonsei University
 Mirae Campus
 Computer Programmig

 << �Էµ� ������ >>
 Yonsei University
 Mirae Campus
 Computer Programmig
 */


#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

typedef struct profile {
	char name[20];
	double gpa;
	int eng_score;
};

void input_data(struct profile* p) {
	for (int i = 0; i < 3; i++) {
		scanf("%s", &(*p).name);
		scanf("%lf", &(*p).gpa);
		scanf("%d", &(*p).eng_score);
	}
}

void top(struct  profile* pstd) {
	for (int j = 0; j < 3; j++) {
		if (pstd->gpa >= 4.0 && pstd->eng_score >= 900) {
			printf("%s, %.1lf, %d\n", pstd->name, pstd->gpa, pstd->eng_score);
		}  pstd++;
	}

}


int main() {
	printf("<< 3) 3���� �̸�, ����, ���������� �Է��ϼ��� >>\n");
	struct profile info[3];
	input_data(&info);

	printf("<< ���� �׷� �л� ���>>\n");
	top(&info);


}

/*
<< 3) 3���� �̸�, ����, ���������� �Է��ϼ��� >>
�庸�� 3.9 940
������ 4.3 750
������ 4.5 990

<< ���� �׷� �л� ��� >>
������, 4.5, 990
*/



