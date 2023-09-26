/*while 문을 이용하여 정수 10000 미만의 숫자를
입력 받아 천단위, 백단위, 십단위, 일단위의 숫자를
구분하여 출력하고, while과 for 문을 이용하여
거꾸로 출력하라. 출력 형식을 화면처럼 맞춘다.
*/

#include <stdio.h>
#include<math.h>
#pragma warning(disable: 4996)
void main() {


	int num ;
	printf(" << 3. 숫자 단위 갯수 >>\n");
	printf("10000미만 숫자 입력 >> ");
	scanf("%d", &num);
	printf("\n---단  위 ---\n");

	int a, c = 0, d, n, n1, n2, j, num1, i = 0;
	num1 = num;
	while (num > 0)
	{
		i = i + 1;
		d = 4 - i;

		a = pow(10, d);
		n = num / a;
		printf("%d단위 : %d\n", a, n);


		num = num % a;

	}

	for (j = 1; j < 5; j++) {

		n1 = num1 % 10;
		n2 = n1 * (pow(10, 4 - j));
		c = c + n2;
		num1 = (num1 - n1) / 10;
	}
	printf("입력된 숫자를 거꾸로 출력 : %d ", c);
}

/*int n;
if (n = 1)
{
	num = n * 1000;
}
if (n = 2) {
	num = n * 100;
	if (n = 3) {
		num = n * 10;
	}
	if (n = 4) {
		num = n * 1;
	}

	printf("입력된 숫자를 거꾸로 출력 : %d", num);

}



/* ex) 9876이면  10자리가 알고 싶어 그러면 딱 나와야해
1000부터 나누고 100나누고 10나눠가지고
10자리를 아는게 아니고
어떤 공식을 만들어 내서 어떤 자리 수든지 딱딱 나오게
자리수를 X라고 하면 뭘더하고 뭘 곱하고
뭘 하고 x를 곱하고 이런느낌*/

/*<<3. 숫자: 단위 갯수>>
10000미만 숫자 입력 >> 9876

---단  위---
1000 단위 : 9
100단위 : 8
10단위 : 7
1단위 : 6

입력된 숫자를 거꾸러 출력 : 6789*/