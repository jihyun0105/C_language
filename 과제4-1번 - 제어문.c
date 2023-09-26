/* 1. 실수갑으로 -1이 입력될 때까지 평균점수를
입력 받아 점수에 따라 학점을 구하는 프로그램을
1)if-else문
2) swith문을 차례로 사용하여 출력한다
-평균 점수는 실수값으로 입력되고, -1이 입력되어야
종료한다.
*/

// 90.0이상 --A
// 80.0~90.0 미만.--B
//70.0 ~80.0 미만 --C
// 그 외  F

#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)
void main() {

    printf("<< 1. 학점 출력하기 >>");
	float score =0.0;
	char n;
    while (score >= 0) {
	
	printf("\n평균 점수 입력(-1:종료)>>");
		
		scanf("%f", &score);
		if (score >= 90.0)
			printf("1-1) if-else 사용 : 학점은 A입니다.\n");
		else if (80.0 <= score)
			printf("1-1) if-else 사용 : 학점은 B입니다.\n");
		else if (70.0 <= score)
			printf("1-1) if-else 사용 : 학점은 C입니다.\n");
		else if (score == -1)
			break;
			
		else
			printf("1-1) if-else 사용 : 학점은 F입니다.\n");
		

		int score_= score;
		//char A, B, C, F;
		//A = (score_ >= 90.0);
		//B = (80.0 <= score_ && score_ < 90.0);
		//C = (70.0 <= score_ && score_ < 80.0);
		//F = (score_ < 70.0);
		
		
		switch (score_/10) {
		case 10:
		case 9:
			printf("1-2)switch 사용 : 학점은 A입니다.\n");
			break;
		case 8:
			printf("1-2)switch 사용 : 학점은 B입니다.\n");
			break;
		case 7:
			printf("1-2)switch 사용 : 학점은 C입니다.\n");
			break;
		
		default :
			printf("1-2)switch 사용 : 학점은 F입니다.\n");
				
		}
		
		score = 0;
	}

}


/* << 1. 학점 출력하기 >>
평균 점수 입력(-1 종료) >> 70.5
1-1) if-else 사용 : 학점은 C입니다.
1-2) switch 사용 : 학점은 C입니다.

평균점수 입력(-1: 종료) >> 99.9
1-1)if-else 사용 : 학점은 A입니다.
1-2) switch 사용 : 학점은 A입니다.


평균점수 입력(-1: 종료) >> 59.0
1-1)if-else 사용 : 학점은 F입니다.
1-2) switch 사용 : 학점은 F입니다
평균 점수 입력(-1: 종료)>> -1.*/ 