#include <stdio.h>

/*----- 변수의 범위 -----
- 지역 변수: '블록({}, 중괄호)'내부에서 선언된 변수로, 블록 내부에서만 유효하고 블록이 끝나면 해제
- 전역 변수: 함수 외부에서 선언된 변수로, 프로그램이 종료될 때 해제
- 정적 변수: 지역 변수와 전역 변수의 특성을 둘 다 갖고 있다.
		------------------
		|				 |
		|      Code      |
		|                |
		------------------
		|				 |
		|      Data      |   <-- 전역변수, 정적 변수
		|                |
		------------------
		|				 |
		|      Heap      |
		|                |
		------------------
		|				 |
		|     Stack      |  <-- 지역 변수
		|                |
		------------------*/

/* ----- 변수의 선언 범위 -----
- 지역 변수 : 지역 내부에 새로운 지역에서 같은 이름의 변수가 선언되면
			외부에 있는 변수 보다 내부에 있는 변수가 더 높은 우선순위를 갖게 된다.

- 전역 변수: 전역 변수는 별도의 초기화를 진행하지 않으면 0으로 초기화 된다.

- 정적 변수: 지역 변수와 전역 변수의 특성을 둘 다 갖고 있다.
			전역 변수의 특성인 프로그램이 종료될 때 공간이 해제된다는 특성을 가짐
			지역 변수의 특성이 ㄴ블록 내부에서만 유효하다는 특성을 갖고 있다.
	- 정적 변수 선언 원형 : static 자료형 변수명;
*/


//int num = 5;
//
//void Func()
//{
//	printf("num의 값: %d\n", num);
//}

//void Func()
//{
//	int n1 = 3;
//	static int n2 = 3;
//
//	printf("n1: %d, n2: %d\n", n1, n2);
//	n1++;
//	n2++;
//}

//void Func(int num)
//{
//	num++;
//}

//void Func(int* num)
//{
//	(*num)++;
//}


void Total(int* kor, int* math, int* eng, int* total)
{
	(*total) = (*kor) + (*math) + (*eng);
}

void Avg(int* total, double* avg)
{
	(*avg) = (*total) / 3.0;
}

void Grade(double* avg, char* grade)
{
	switch ((int)(*avg) / 10)
	{
	case 10:
	case 9:
		(*grade) = 'A';
		break;
	case 8:
		(*grade) = 'B';
		break;
	case 7:
		(*grade) = 'C';
		break;
	case 6:
		(*grade) = 'D';
		break;
	default:
		(*grade) = 'F';
		break;

	}
}




int main()
{
	/*
	int num = 5;
	int num2 = 7;

	{
		int num = 3;
		printf("num의 값: %d\n", num);
		printf("num2의 값: %d\n", num2);
	}

	printf("num의 값: %d\n", num); // 변수의 이름이 중복 됐음에도 문제 없이 진행됨 // 지역이 다르기 때문
	*/

	/*int num = 4;

	printf("num의 값: %d\n", num);
	Func();*/

	//Func(); // n1: 3, n2: 3
	//Func(); // n1: 3, n2: 4
	//
	//printf("n2의 값: %d\n", n2); // 식별자 n2가 정의되지 않음

	/*int num = 4;

	Func(&num);

	printf("num의 값: %d\n", num);*/

	//함수와 포인터 문제
	//Q1) 철수의 성적을 국어, 수학, 영어 순서로 입력 받은 후
	// 세 성적의 총합을 메인의 total변수에 할댕해주는 함수, 
	// 성적의 평균을 메인의 avg 변수에 할댕해주는 함수, 
	// 평균에 해당하는 등급을 나누고 메인의 grade 변수에 할당해주는 함수를 만드세요.
	// 출력은 반드시 main 함수에서 진행하며, 모든 함수는 반환값이 존재하지 않는 형태로 작성해보세요
	//Total 함수를 void 타입으로 변경하여 총합을 직접 전달하는 방식으로 작성 -> Total 함수의 매개변수로 포인터를 이용하여 총합을 저장할 변수를 전달

	int kor, math, eng, total;
	double avg;
	char grade;

	printf("국어, 수학, 영어 성적 입력: ");
	scanf("%d %d %d", &kor, &math, &eng);

	Total(&kor, &math, &eng, &total);
	printf("총합: %d\n", total);

	Avg(&total, &avg);
	printf("평균: %.2f\n", avg);

	Grade(&avg, &grade);
	printf("등급: %c\n", grade);


	return 0;
}