#pragma warning ( disable : 4996 )  
#include<stdio.h>

int IsLeapYear(int);    //  IsLeapYear �Լ�  ����  ���� 
int GetDaysOfMonth(int, int);    // GetDaysOfMonth �Լ� ���� ���� 

int IsLeapYear(int year) {  // IsLeapYear�Լ� ����

	//return((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))?1;0;    <���ǿ����� ����ص� ������>
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) // ������ ���
		return 1;    // 1�� ��ȯ�ϰ� 
	else   //������ �ƴҰ��
		return 0;  // 0�� ��ȯ�Ѵ�.
}

int GetDaysOfMonth(int year, int month) { // GetDaysOfMonth�Լ� ����  , year�� month��  ����
	int day;
	if (1 >= month <= 12) {    //month�� 1~12�� ���


		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			day = 31;     // ���� month�� 1��, 3�� , 5��, 7��, 8��, 10��, 12���� ��� 31��
		if (month == 4 || month == 6 || month == 9 || month == 11)
			day = 30;  //���� 4��, 6��, 9��, 11���� ��� 30��
		if (month == 2)  //2���� ���
		{
			int yun = IsLeapYear(year);  //  IsLeapYear�Լ� ȣ��
			if (yun = 1)  // yun = 1, �� ������ ��� 29��
				day = 29;
			else if (yun = 0)  //yun = 0, �� ������ �ƴҰ�� 28��
				day = 28;
		}
		return day;
	}
}


int main(void) {
	int year, month, n, year_;

	printf("������ ���� �Է��ϼ��� :  ");
	scanf(" %d %d,", &year, &month);

	while (1) {    //���ѷ��� ����
		if (year < 0 || month > 12) {   //������ �����̰ų� ���� 12���� Ŭ ���
			printf("�ٽ� ������ ���� �Է��ϼ��� : ");  //���Է� �޴´�
			scanf("%d %d,", &year, &month);
		}
		else   // ������ ����̰ų� ���� 12���� ������� �����. 
			break;
	}

	if (year >= 0 && year < 1000) {  //year�� 0���� ũ�� 1000���� ���� �� 1~3�ڸ��� ���
		year_ = year + 2000;   //year�� 2000�� �����ش�
	}
	else
		year_ = year;   //year�� 1000���� Ŭ ���  �׳� year�� ����Ѵ�.
	int date = GetDaysOfMonth(year, month); //�Լ� GetDaysOfMonth(int, int) ȣ��

	printf("%d�� %d�� %d���Դϴ�.\n", year_, month, date);
	return 0;


}

//----------------------------------------------------------------------------------------

#include <stdio.h>
#pragma warning(disable : 4996)

int sum(int num) {   //sum �Լ� ����

	int num_ = number(num);  //number�Լ� ȣ��

	if (num == 0)   //num�� 0�� ��� 0
	{
		num_ = 0;
		printf("%d", num_);
		return 0;
	}
	else
		printf("%d + ", num_);  //num�� 0�� �ƴҰ�� �ϳ��� �ٿ����� ���ϱ�
	return num_ + sum(num - 1); //sum�Լ� ȣ�� �� , ����Լ� �̿�

}

int number(int n) {   //number �Լ� ����
	return (n * 10) + 2;
}

void main() {
	int n;
	printf("���� �Է� >> ");
	scanf("%d", &n);
	printf("sum = ");

	int num1 = sum(n);   //sum�Լ� ȣ��
	printf(" = %d\n ", num1);

}
//--------------------------------------------------------------------------------------

#pragma warning(disable : 4996)
#include<stdio.h>
int IsAlphabetic(char);  //IsAlphabetic�Լ� ����
int IsLower(char);  // IsLower�Լ� ����
int IsUpper(char);  // IsUpper�Լ� ����

//�ҹ��� ����  �빮�� ���� ���� �ϳ��� ���� �ϸ� ���ĺ�
int IsLower(char n) {    //IsLower�Լ� ����
	if (n >= 'a' && n <= 'z')
		//����   �Է°��� �ҹ��� a���� z������ ���
		return 0;  // return�� 0
	else  // �� ���� ���� �Էµ� ���
		return 1;   //return 1

}

int IsUpper(char n) {  // IsUpper�Լ� ����

	if (n >= 'A' && n <= 'Z')
		// �Է°��� �빮�� A���� Z�� ���
		return  0;  //return�� 0
	else	 //�� ���� ���� �Էµ� ��� 
		return 1;    //return 1
}
int IsAlphabetic(char n) {   //IsAlphabetic �Լ� ����

	int  char1 = IsLower(n);  //  IsLower �Լ� ȣ��
	int  char2 = IsUpper(n);   //IsUpper �Լ� ȣ��

	if (char1 == 0 || char2 == 0) // �� �ҹ��ڳ� �빮�ڰ� �Էµ� ���
		return  0;   //return 0
	else  //  �� ���� ���� �Էµ� ���
		return 1;   //return 1
}
int main(void) {

	char  n;
	while (1) {
		printf("���ڸ� �Է��ϼ���(.�Է½� ���� ) : ");
		scanf(" %c", &n);
		if (n == '.')   // n�� .�� �Էµ� ��� ����
			break;
		else {
			int char3 = IsAlphabetic(n);  //IsAlphabetic �Լ� ȣ��
			if (char3 == 0)
				printf("%c�� ���ĺ��Դϴ�\n", n);
			else if (char3 == 1)
				printf("%c�� ���ĺ��� �ƴմϴ�\n", n);

			int char1 = IsLower(n); // IsLower �Լ� ȣ��
			if (char1 == 0)
				printf("%c�� �ҹ����Դϴ�.\n", n);
			else if (char1 == 1)
				printf("%c�� �ҹ��ڰ� �ƴմϴ�.\n", n);

			int char2 = IsUpper(n); //  IsUpper �Լ� ȣ��
			if (char2 == 0)
				printf("%c�� �빮���Դϴ�.\n", n);
			else if (char2 == 1)
				printf("%c�� �빮�ڰ� �ƴմϴ�.\n", n);

		}
	}
}









