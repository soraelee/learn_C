#include <stdio.h>

/* ----- 비트 연산자 -----
: 10진수가 아닌 2진수의 각 비트별로 연산을 진행
- &(비트 AND 연산) : 대응되는 비트가 모두 1이면 1을 반환 
- ex)
	0101 1000 = 88
	&
	0100 1100 = 76
	-------------------
	0100 1000 = 72

- |(비트 OR 연산) : 대응되는 비트 중 하나라도 1이면 1을 반환
- ex)
	0101 1000 = 88
	|
	0100 1100 = 76
	------------------ -
	0101 1100 = 92

	
- ^ (비트 XOR 연산) : 대응되는 비트가 서로 다르면 1을 반환
- ex)
	0101 1000 = 88
	^
	0100 1100 = 76
	------------------ -
	0001 0100 = 20

	
- ~ (비트 NOT 연산) : 비트가 0이면 1, 1이면 0으로 반전

- <<(Left Shift 연산) : 비트들을 모두 지정 수 만큼 왼쪽으로 이동
- ex)
	0100 1100 = 76
	<< 1
	------------------ -
	1001 1000 = 152

	
- >>(Right Shift 연산) : 비트들을 모두 지정 수 만큼 오른쪽으로 이동
- ex)
	0101 1000 = 88
	>> 2
	------------------ -
	0001 0110 = 22
*/

/* ----- 삼항 연산자 -----
: 다른 연산자들과는 다르게 피연산자가 3개이다
- 삼항 연산자의 원형 : 조건식 ? 참일 때의 반환 값 : 거짓일 때의 반환 값*/

/*---- 음수표현
변수의 자료형 char => 1byte -128 ~ 127
0111 1111 = 127
1000 0000 = -128

short > 2byte => 0000 0000 0000 0000 
long > 4 byte => 0000 0000 0000 0000 0000 0000 0000 0000*/


/*---- sizeof 연산자 ----
: 넘겨준 값의 자료형의 byte 크기를 구해주는 연산자
- sizeof 연산자의 원형 : sizeof(크기를 구해줄 값);
*/


int main()
{	
	/*
	printf("비트 AND 연산 결과 : %d\n", 88 & 76);
	printf("비트 OR 연산 결과: %d\n", 88 | 76);
	printf("비트 XOR 연산 결과 : %d\n", 88 ^ 76);
	printf("Left Shift 연산 결과: %d\n", 76 << 1);
	printf("Right SHift 연산 결과: %d\n", 88 >> 2);
	*/

	/*
	// 비트 연산자 문제
	//Q1) 다음 코드의 출력 내용을 예상하기

	char num1 = 78, num2 = 37, num3 = 18;
	char num4 = 4, num5 = 106;

	printf("%d\n", num1 | num3);
	printf("%d\n", num5 & num2);
	printf("%d\n", num4 ^ num3);
	printf("%d\n", ~num4); // 컴퓨터가 음수를 표기하는 방법에 차이가 있어서 -5로 답이 나옴	
	printf("%d\n", (unsigned char)~num4); //=> 값으로 사용하고자 하는 경우 강제 형 변환으로 값 앞에 (unsigned) 작성 == 부호비트를 사용하지 않음을 표현
	printf("%d\n", num4 << 3); 
	printf("%d\n", num3 >> 1);
	*/

	// 2의 보수 문제
	//Q2) 
	//-59 = 0011 1011
	//	1100 0100
	//	1100 0101
	//- 7 = 0000 0111
	//	1111 1000
	//	1111 1001
	//- 100 = 0011 0110
	//	1100 1001
	//	1100 1010


	// 삼항 연산자
	// 조건식 ? 참일 때의 반환 값 : 거짓일 때의 반환 값
	/*printf("연산 결과 : %d\n", 3 != 5 ? 11 : 22); 
	printf("연산 결과 : %d\n", 3 == 5 ? 11 : 22);*/

	//삼항 연산자 문제
	//Q1) 숫자를 입력 받고 해당 숫자가 14 이상일 때는 "14보다 크거나 같은수"를 출력, 
	// 14 미만일 때는 "14보다 작은 수"를 출력해주는 프로그램을 작성
	
	/*int num = 1;

	printf("입력 : ");
	scanf("%d", &num) ;

	printf("연산 결과 : %s\n", num >= 14 ? "14보다 크거나 같은 수" : "14보다 작은 수");*/

	//Q2) 숫자를 입력 받고 숫자가 3의 배수일 때는 참, 아닐 때는 거짓을 출력하는 프로그램을 작성

	//int num = 1;

	//printf("입력 : ");
	//scanf("%d", &num);

	//printf("연산 결과 : %s\n", num % 3 == 0 ? "참" : "거짓"); //num % 3 ? "거짓" : "참" (보통 0은 거짓으로 표현)

	// --sizeof() 연산자 ---
	printf("크기 : %d\n", sizeof(5)); // 자료형의 byte 크기를 구해줌


	return 0;
}