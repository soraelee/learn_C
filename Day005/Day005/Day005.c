#include <stdio.h>

/*----- 조건문 -----
: 조건식을 비교하고 해당 조건식이 참이면 종속 문장을 시행, 거짓이면 탈출하는 문법
- if ~ else, switch ~ case 두 가지가 존재

- if ~ else의 원형:
		if (조건식) // 참거짓 여부 판단  // 조건문의 시작
		{
			종속 문장; // 참일 때 실행
		}

		else if (조건식)					// 조건문은 추가
		{
			종속 문장;
		}

		else							// 나머지
		{
			종속 문장;
		}

- if ~ else 문에서 조건식 뒤에 ;(세미콜론)을 작성하게 되면 종속 문장을 가질 수 없게 된다.
- if ~ else 문에서 종속 문장이 한 줄 일때 는 {}(중괄호)를 생략할 수 있다.

-  switch case의 원형 :
		switch(비교할 값)
		{
			case 해당 값:
				종속문장;
				break;

			default:
				종속 문장;
				break;

		}
- switch ~ case 문에서 break 키워드는 해당 문법을 탈출하는 용도로 사용
// break 문 필수? 선택? >> 사용자의 의도에 따라 사용하는 경우도 있음

- switch ~ case 문에서 비교할 값 공간에는 정수, 정수가 저장된 변수만 작성할 수 있음

- 각 case에 작성되는 값은 반드시 상수로 작성해주어야 한다. (변수 정의 불가)

//컴퓨터의 입장에서 switch case가 더 쉬움 >> 특정 범위를 표현할 때 if else가 더 편리
*/

/* ----- 반복문 -----
: 조건식을 비교하고 조건이 참일때는 종속 문장을 실행 후 다시 조건식을 비교하는 과정
- 프로그램에서 특정 코드를 일정 횟수 만큼 반복시키는 문법

--> for(), while(), do ~ while() 세가지가 존재

- for()문의 기본 원형 : 
			for (초기식; 조건식; 변화식)
			{
				종속 문장;
			}
- 초기식 -> 조건식 -> 종속문장 -> 변화식 -> 조건식 -> 종속문장 변화식 ...순으로 진행된다. 
- for문에서 무한루프를 사용하고 싶을 때는 초기식, 조건식, 변하식을 생략하면 된다. 
		ex) for(;;)
- for 문에서 종속문장이 한줄일 떄는 {}(중괄호)를 생략할 수 있다.
*/

/*----- 기타 키워드 -----
- break : 해당 키워드를 만나게 되면 반복문을 탈출
- continue: 해당 키워드를 만나게 되면 continue보다 아래에 있는 종속 문장은 실행하지 않고 진행된다. 
*/







int main()
{
	/*
	// ---조건식 ---
	int num;

	printf("입력 : ");
	scanf("%d", &num);

	if (num > 10)
	{
		printf("num은 10보다 큽니다.\n"); // 10보다 작을 경우 종속 문장을 실행하지 않음
	}

	//if (num > 5)
	//{
	//	printf("num은 5보다 큽니다.\n"); // 이렇게 구성하는 경우, 별개의 조건으로 적용되어 5보다 크다, 10보다 크다 모두 출력
	//}

	else if (num > 5)
	{
		printf("num은 5보다 큽니다.\n");
	}

	else
	{
		printf("num은 5보다 작거나 같습니다.\n");
	}

	*/

	/*int num;

	printf("입력: ");
	scanf("%d", &num);

	if (num == 5)
	{
		printf("num은 5입니다.\n");
	}*/

	// Q1) 숫자를 입력 받고 해당 숫자가 14 이상일 때는 " 14보다 크거나 같은 수"를 출력,
	//		14미만일 때는 "14보다 작은 수"를 출력해주는 프로그램 작성

	/*int num;

	printf("입력: ");
	scanf("%d", &num);

	if (num >= 14)
		printf("14보다 크거나 같은 수");

	else
		printf("14보다 작은 수");*/

	// Q2) 숫자를 입력 받고 숫자가 3의 배수일 때는 참, 아닐때는 거짓을 출력하는 프로그램 작성

	/*int num;
	printf("입력: ");
	scanf("%d", &num);

	if (num % 3)
		printf("거짓");

	else
		printf("참");*/

	// Q3) 학생의 국어, 수학, 영어 점수를 각각 입력 받고 평균을 구한 다음 평균 점수에 맞게 등급을 출력해보세요.
	//		(평균은 소수점 2번째 자리까지 출력, 
	//		등급은 90이상 A, 80이상 B, 70이상 ㅊ, 60이상 D, 나머지는 F)
	/*
	int kor, math, eng;
	double avg ;

	printf("국어 : ");
	scanf("%d", &kor);


	printf("수학 : ");
	scanf("%d", &math);

	printf("영어 : ");
			scanf("%d", &eng);

			avg = (double)(kor + math + eng) / 3.0; // int까리의 연산이 이루어지기 때문에 int로 출력

			printf("평균 : %.2f", avg);

			if (avg >= 90)
				printf("등급 : A\n");

			else if (avg >= 80)
				printf("등급 : B\n");

			else if (avg >= 70)
				printf("등급 : C\n");

			else if (avg >= 60)
				printf("등급 : D\n");

			else
				printf("등급 : F\n");
			*/

	/* ---- switch ~ case ----
	int num;
	printf("입력: ");
	scanf("%d", &num);

	switch (num)
	{
	case 1: // num이 1의 값을 가지는 경우
		printf("num은 1입니다.\n");
		break;

	case 2:
		printf("num은 2입니다.\n");
		break;

	case 3:
		printf("num은 3입니다.\n");
		break;

	default:
		printf("1 ~ 3 중 하나를 입력해주세요\n");
		break;

			}

			*/

	/*
	// 	break를 사용하지 않는 경우
	int num;
	printf("입력: ");
	scanf("%d", &num);

	switch (num)
	{
		case 1: // num이 1의 값을 가지는 경우
			printf("num은 1입니다.\n");

		case 2:
			printf("num은 2입니다.\n");

		case 3:
			printf("num은 3입니다.\n");

		default:
			printf("1 ~ 3 중 하나를 입력해주세요\n");

	} //break가 없는 경우 값을 탈출하지 못함
	*/

	/* break문을 의도적으로 삭제하는 경우
	int num;

	printf("입력: ");
	scanf("%d", &num);

	switch (num)
	{
		case 4:
			printf("4 ");
		case 3:
			printf("3 ");
		case 2:
			printf("2 ");
		case 1:
			printf("1 ");
	}
	*/

	/*
	double num; // 실행되지 않음

	printf("입력: ");
	scanf("%d", &num);

	switch (num)
	{
	case 4:
		printf("4 ");
	case 3:
		printf("3 ");
	case 2:
		printf("2 ");
	case 1:
		printf("1 ");
			}
			*/


	/*
	int num2 = 4; // 실행되지 않음

	printf("입력: ");
	scanf("%d", &num2);

	switch (num2)
	{
	case 4:
		printf("4 ");
	case 3:
		printf("3 ");
	case 2:
		printf("2 ");
	case 1:
		printf("1 ");
	}
	*/

	/*
	// Q4) 숫자를 입력 받고 해당 숫자가 14 이상일 때는 "14보다 크거나 같은 수"를 출력,
	//		14미만일 때는 "14보다 작은 수"를 출력해주는 프로그램 작성

	int num;

	printf("입력: ");
	scanf("%d", &num);

	switch (num >= 14)
	{
		case 1:
			printf("14보다 크거나 같은 수");
			break;
		default:
			printf("14보다 작은 수");
			break;
	}
	*/


/*
	// Q5) 숫자를 입력받고 숫자가 3의 배수 일때는 참, 아닐때는 거짓을 출력하는 프로그램을 작성

	int num;

	printf("입력: ");
	scanf("%d", &num);

	switch (num % 3)
	{
	case 0:
		printf("참");
		break;

	case 1 :
		printf("거짓");
		break;
	
	case 2:
		printf("거짓");
		break;
	}
	*/

	/*int num;

	printf("입력: ");
	scanf("%d", &num);

	switch (num % 3)
	{
	case 0:
		printf("참");
		break;

	default:
		printf("거짓");
		break;
	}*/



/*
	//Q6) 학생의 국어, 수학, 영어 점수를 각각 입력 받고 평균을 구한 다음 평균 점수에 맞게 등급을 출력해보세요.
	//		(평균은 소수점 2번째 자리까지 출력, 
	//		등급은 90이상 A, 80이상 B, 70이상 C, 60이상 D, 나머지는 F)

	int kor, math, eng;
	double avg;

	printf("국어: ");
	scanf("%d", &kor);

	printf("수학: ");
	scanf("%d", &math);

	printf("영어: ");
	scanf("%d", &eng);

	avg = (kor + math + eng) / 3.0;

	printf("평균: %.2f", avg);


	switch ((int)avg / 10) // 비교할 값
	{
	case 10:
	case 9:  // 몫으로 해결
		printf("등급 : a");
		break;
	
	case 8:
		printf("등급 : b");
		break;

	case 7:
		printf("등급 : c");
		break;

	case 6:
		printf("등급 : d");
		break;

	default:
		printf("등급 : f");
		break;
	}	

	//int i;
*/

	/*int kor, math, eng;
	double avg;

	printf("국어: ");
	scanf("%d", &kor);

	printf("수학: ");
	scanf("%d", &math);

	printf("영어: ");
	scanf("%d", &eng);

	avg = (double)(kor + math + eng) / 3.0;
	printf("평균 : %.2f\n", avg);

	switch ((int)avg / 10)
	{
	case 10:

	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}*/

/* --- for 문 ---
	//for (i = 0; i < 10; i++) // 초기식 : 시작 지점, 조건식 : 어디까지 변화식 : 어떤식으로 // i++ : 1씩 증가
 //	{
	//	printf("Hello world!");
	//}


	//printf("i의 값 : %d\n", i);
	//
	*/

	/*
	for (;;) // 무한루프 사용 법
	{
		printf("Hello world!");
	}
	*/

	/*for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			break;

		printf("Hello world! i: %d\n", i);
	}*/
	/*
	for (int i = 0; i < 10; i++)
	{
		if (i == 5) // i가 5일 때 아래의 종속 문장은 무시되고 바로 조건식을 비교
			continue;

		printf("Hello world! i: %d\n", i);
	}
	*/
	
	
	//반복문 문제
	/*
	//Q1) 별도의 입력 없이 알파벳 A~Z까지 출력되는 프로그램을 작성해보기
	
	for (char i = 'A'; i <= 'Z'; i++)
	{
		printf("%c\n", i);
		}
	*/

	/*
	//Q2) 소문자 알파벳 하나를 입력 받고, a부터 입력 받은 알파벳까지 출력되는 프로그램을 작성
	char alpha;

	printf("소문자 입력 : ");
	scanf("%c", &alpha);

	for (char i = 'a'; i <= alpha; i++) // int와 char이 있을 때 char이 int로 자동 형변환 진행됨
	{
		printf("%c\n", i);
	}*/

	/*
	//Q3) 숫자 한 개를 입력 받고 출력을 반복하다가 숫자 9가 입력 됐을 떄 종료되는 프로그램을 작성

	for (int i;;)
	{
		printf("입력: ");
		scanf("%d", &i);

		if (i == 9)
			break;

		printf("출력: %d\n", i);
		}*/


	return 0;
}