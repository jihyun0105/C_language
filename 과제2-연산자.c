/* 1. 커피 자판기에 돈을 넣고 150원짜리 커피를 뽑으면,
자핀기가 거스름돈을 500, 100, 50, 10원짜리를
각각 몇 개씩 돌려주는지 결과 화면과 같이 출력하고*/

#include<stdio.h>
int main() {

	int money;
	money = 1000;
	printf("<<1. 몫과 나머지 연산>>\n");
	printf("돈을넣으세요 : ", money);
	scanf_s("%d", &money);

	printf("돈 : %d", money);


	int coffee;

	coffee = 150;
	int 잔돈 = money - coffee;
	int _500원짜리 = (money - coffee) / 500;  //커피값을 제외한 나머지 값을 500원으로 나누면 1개//
	int _100원짜리 = ((money - coffee) % 500) / 100;  // 커피값과 500원 1개를 제외한 나머지 값을 100으로 나누면 3개//
	int _50원짜리 = (money - coffee % 500) % 100 / 50; // 커피값과 500원 1개, 100원 3개를 제외한 나머지 값을 50원으로 나누면 1개//
	int _10원짜리 = (money - coffee % 500) % 100 % 50 / 10; //남는 돈이 없으므로 10원짜리 0개//

	printf("커피 한잔(150원)과 잔돈을 드립니다. ", coffee, 잔돈);
	printf("동전 500원짜리 = %d개, 100원짜리 = %d개, 50원짜리 = %d개,10원짜리 = %d개 입니다.\n", _500원짜리, _100원짜리, _50원짜리, _10원짜리);
	printf("%d%d%d%d", _500원짜리, _100원짜리, _50원짜리, _10원짜리);





	/* << 1.몫과 나머지 연산>>
	돈을넣으세요 : 1000
	--커피 한잔(150원)과 잔돈을 드립니다.--
	동전 500원짜리=1개, 100원짜리 =3개, 50원짜리=1개,
	10원짜리=0개 입니다.*/







	/* 2. 1년은 정확히 365.2422일이다. 즉, 365일 보다 조금 길다.
	그래서 4년에 한번씩 윤년이 있다
	그렇다면 1년은 정확히 몇 일,몇 시간, 몇 분, 몇 초인지
	계산하는 프로그램을 작성하시오.
	365일을 뺀 나머지는 실수형이 되므로, 정수형 시,분, 초를
	계산할 대 형변환이 필요하다.
	강제형변환을 사용하라.*/


#define _CRT_SECURE_NO_WARNINGS

	double _1year, days, hours, minutes, seconds;
	int days_i, hours_i, minutes_i, seconds_i;
	_1year = 365.2422;


	days = _1year;    // 1년 = 365.2422일 //
	days_i = (int)days;  // 1일 = 24시간, 1시간= 60분, 1분 = 60초//
	hours = (days - days_i) * 24;   //365일을 제외한 나머지값에 24를 곱하면 시간//
	hours_i = (int)hours;
	minutes = (hours - hours_i) * 60; //5시간을 제외한 나머지 값에 60을 곱하면 분//
	minutes_i = (int)minutes;
	seconds = (minutes - minutes_i) * 60;  // 48분을 제외한 나머지 값에 60을 곱하면 초//
	seconds_i = (int)seconds;    //시,분,초를 (int)를 사용하여 강제변환해줌//


	printf("<< 2.형변환 연산 >>\n");
	printf("\n1년은 %d일, %d시간, %d 분, %d 초 입니다.\n", days_i, hours_i, minutes_i, seconds_i);

}


/* <<2.형변환 연산>>
1년은 365일,5시간,48분,46초 입니다.*/

