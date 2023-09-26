#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

//<<실습 1>>
/* typedef를 사용하여 아래의 멤버를 갖는 구조체 원형을 선언하고, calc_all 함수를
작성하여 결과를 출력하라. (50점)
 구조체 멤버
• add(정수형)
• sub(정수형)
• mul(정수형)
 인수 a와 b의 덧셈(add), 뺄셈(sub), 곱셈(mul) 결과 값을 calcType 구조체의 멤버에 각각 대입한
후, calcType 구조체를 반환
 main()에서
• 두 정수를 입력 받고, 이 두 정수를 인수로 하여 calc_all 함수를 호출한 후에 리턴된 구조체
변수를 받아서 각 멤버의 값을 출력하라.*/

typedef struct calcType {  // calcType 구조체를 정의
	int add;
	int sub;
	int mul;
};

struct calcType calc_all(int a, int b) {

	struct calcType number;  // calcType 구조체를 호출
	number.add = a + b;  // add 멤버에 더한값을 대입
	number.sub = a - b;  // sub 멤버에 뺀 값을 대입
	number.mul = a * b;  // mul 멤버에 곱한 값을 대임
	return number;

}

void main() {

	int a, b;

	printf("2개의 정수 입력 >> "); // 두개의 정수 입력받음
	scanf("%d %d", &a, &b);
	calc_all(a, b);  // calc_all 함수를 호출

	struct calcType num;
	num = calc_all(a, b); // calc_all 함수를 호출하여 값을 num에 전달
	printf("addition : %d, substraction :%d, multiplication: %d ", num.add, num.sub, num.mul);

}
/*
2개의 정수 입력 >> 7 8
addition : 15, substraction : -1 , multiplication: 56 */



// <<실습 2>>
/*profile 구조체와 student 구조체를 아래와 같이 정의한다. (50점)
 profile 구조체 멤버
• name (문자 배열 – 크기 10)
• age (정수형)
 student 구조체 멤버
• info (profile 구조체)
• id (정수형)
• gpa (실수형)
 main()에서
• profile 구조체의 name과 age 값을 입력 받음
• student 구조체의 id = 5, gpa = 4.4 대입 후, 모든 멤버 값들을 출력  */


typedef struct {     // profile 구조체 정의
	char name[10];
	int age;
}profile;

typedef struct {  // student 구조체 정의
	profile info; // char name[10];
				  //int age; 와 같음
	int id;
	double gpa;
}student;

void main() {

	printf("<<중첩 구조체 >>\n");

	profile student_;  // profile 구조체 호출
	printf("이름을 입력하세요 : ");
	scanf("%s", student_.name); //  profile 구조체 멤버인 name을 입력받음

	printf("나이를 입력하세요 : ");
	scanf("%d", &student_.age);  // profile 구조체 멤버인 age를 입력받음

	student student_1; // studet 구조체 호출
	student_1.info = student_;  // profile 구조체 값을 student 구조체 멤버인 info에 넘겨줌
	student_1.id = 5;   // student_1의 id에 5대입
	student_1.gpa = 4.4; // student_1의 gpa에 4.4 대입

	printf("--------------\n");
	printf("이름 : %s\n", student_1.info.name);
	printf("나이 : %d\n", student_1.info.age);
	printf("학번 : %d\n", student_1.id);
	printf("학점 : %.1lf\n", student_1.gpa);
	printf("--------------\n");

}


/* <<중첩 구조체>>
 이름을 입력하세요 : 홍길동
 나이를 입력하세요 : 21
 --------------
 이름 : 홍길동
 나이 : 21
 학번 : 5
 학점 : 4.4
 ---------------
*/









