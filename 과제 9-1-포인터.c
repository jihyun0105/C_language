#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
#define MAX 100
/*�Է� ������ �迭�� �����ϰ� �ش� ������ ������ �� �� ���������� ����϶�. ������
�ҹ��ڸ����� �̷���� �ִٰ� �����Ѵ�. ��, �Ʒ� �Լ��� ȣ���ؾ� �ϸ� �� �Լ��� ������
��� ������ �Ἥ �����ؾ� �Ѵ�. (50��)
int count_vowel(char * arr, int length)*/


int count_vowel(char* arr, int length) {  //count_vowel�Լ� ����

	int num = 0;
	for (int i = 0; i < length; i++) {

		if (*arr == 'i' || *arr == 'a' || *arr == 'e' || *arr == 'o' || *arr == 'u') {
			num++;   // ������ ��� num ������Ű��
		}
		arr++;  // �׷��� ������� ������ ��� ������ �̿��Ͽ� �ѱ�
	}
	return num;
}

void main() {
	int  length = 0, num;
	char arr[MAX] = { 0 };
	printf("1. ���� ���� ���� �Է�\n");

	while ((gets(arr) == '\n0'));   // gets�� ���ڿ� �Է¹���
	length = strlen(arr);    // strlen�� �̿��Ͽ� ���̸� ����

	num = count_vowel(arr, length);   //count_vowel�Լ� ȣ��

	printf("������ %d�� �ֽ��ϴ�\n", num);
}
/*
 1. ���� ���� ���� �Է�
 yonsei university mirae campus
 ������ 12�� �ֽ��ϴ�.
*/


//<<���� 2��>>
#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
#define MAX 100

/*���� ������ �Է� �޾� a �迭�� �����Ѵ�. �߰��� 0 �̳� ������ �ԷµǸ� �� �տ� �������
�����Ѵ�. ���� �Ʒ� �Լ��� ȣ�� �ؾ� �Ѵ�. �� �Լ��� a �迭�� �Ѱܹ޾� ����� ������
����� b �迭�� �����Ѵ�. ���� main���� �ǵ��ư� b �迭�� ������� ����Ѵ�. ��,
�Է� ������ �ϳ� �̻����� �����Ѵ�. (50��)
void reverse_array(int *a, int *b, int length)*/

void reverse_array(int* a, int* b, int length) {  //reverse_array�Լ� ����
	int j = length - 1;    //������  ���� NULL�̹Ƿ� length-1���� ����
	for (int i = 0; i < length; i++) {
		b[j] = a[i];   // �� a[0] = b[length -1]
		j--;         // i�� ���� Ŀ���� j�� �۾����� �ݴ�� ����
	}
}

int main() {

	int a[MAX] = { 0 };
	int b[MAX] = { 0 };

	printf("\n2.����� �������� �����Ͽ� �Է�(0 ���� ����)\n");
	int len = 0;
	for (int i = 0; i < MAX; i++) {
		scanf("%d", &a[i]);
		if (a[i] <= 0) {   // ������ 0�� �Է¹޴´ٸ�
			a[i] == NULL;  // a[i]�迭���� NULL�� �־��ְ� �����.
			break;            // �� �� ������� �����ؾ� �ϹǷ�
		}
		len += 1;    // ���̵� ���ڰ� �ϳ��� �Էµɶ����� üũ���ش�.
	}

	reverse_array(a, b, len);    //reverse_array�Լ� ȣ��
	for (int i = 0; i < len; i++) {

		printf("%d", b[i]); // �迭 b�� �Ųٷ� ����� ���ڸ� ������� 
		printf(" ");   // �߰� ������ ������ش�.
	}


}


/*2.����� �������� �����Ͽ� �Է�(0 ���� ����)
9 7 3 6 2 8 -1
8 2 6 3 7 9 */