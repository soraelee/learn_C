#include <stdio.h>
#include <string.h>

/* ----- 문자열 관련 함수 -----
- 문자열 관련 함수를 사용할 떄는 string.h 헤더파일을 선언해줘야 한다.
	strlen(문자열) : 넘겨준 문자열의 길이를 반환해주는 함수 
					 (반환해주는 길이는 NULL 문자를 제외한 길이이다.)

	strcmp(문자열1, 문자열2):넘겨준 두개의 문자열을 비교하고 같으면 거짓(0), 다르면 참(1)을 반환해주는 함수
							(문자열이 다를 경우, 문자열1이 사전 편찬 순으로 빠르면 -1, 느리면 1을 반환)
	strcpy(문자열을 저장할 공간, 복사할 문자열) : 문자열을 저장할 공간에 복사할 문자열을 복사해주는 함수
	strcat(문자열을 붙알 공간, 붙일 문자열) : 문자열을 붙일 공간 뒤어 넘겨받은 문자열을 덧붙여주는 함수
	
	*/

/* ----- 포인터 -----
- 포인터 변수는 주소를 저장해주는 변수
---- 집으로 치면 번지수
- 포인터 선언 원형: 저장할 공간의 자료형*(애스터리스크) 변수명;
- 포인터 변수 안에 저장된 주소의 공간에 접근할 때는
	포인터 변수 앞에 *를 붙이는 형식으로 진행할 수 있다. > 역참조라고 부름
				ex) *ptr

- 포인터 변수는 일반 변수의 주소를 저장할 수 있고, 
  이중 포인터 변수는 포인터 변수의 주소를 저장할 수 있고, 
  삼중 포인터 변수는 이중 포인터 변수의 주소를 저장할 수 있고, 
  사중 포인터 변수는 삼중 포인터 변수의 주소를 저장할 수 있고, ...
*/

/* ----- 함수 -----
* 특정 역할을 하는 코드들을 독립적으로 모아둔 집합체
* 
* 함수의 정의
	- 반환형 : 함수 내용의 작업을 마치고 값을 반환해줄 때 사용할 자료형
	- 함수 이름 : 함수를 사용하기 위해 호출할 때 사용할 이름
	- 매개변수 : 함수를 호출할 때 값을 전해줄 수 있는데, 이 떄 값을 저장하는 변수
	- 함수 기능 : 함수의 기능을 맡아줄 코드들이 작성되는 영역

		반환형 => int Add(int a, int b)    // Add => 함수 이름 (int a, int b) => 매개변수 : int 형태의 a와 b의 함수를 선언
				 {
					return a + b;
				 } => 함수 기능

* 함수의 호출
	* 반환값을 저장할 변수 : 함수가 반환해주는 값을 저장할 변수
	- 호출할 함수 이름 : 정의된 함수 중 사용할 함수의 이름
	- 인수: 함수가 동작할 때 필요한 값

		- 반환값이 존재하는 함수 호출 원형
			반환값을 저장할 변수 = 호출할 함수 이름(인수);

		-반환값이 존재하지 ㅇ낳는 함수 호출 원형
			호출할 함수 이름(인수);
		
		 
		 */
//함수
int Add1(int n1, int n2)
{
	return n1 + n2;
}

void Add2(int n1, int n2) // 현재 반환 값이 없는 상태(return x) -> void로 작성
{
	printf("연산 결과: %d\n", n1 + n2);
}

void add(int n1, int n2)
{
	printf("더한 값: %d\n", n1 + n2);
}

void sub(int n1, int n2)
{
	printf("뺀 값: %d\n", n1 - n2);
}

int mul(int n1, int n2)
{
	return (n1 * n2);
}

int div(int n1, int n2)
{
	return (n1 / n2); 
}

void Calc(int n1, char oper, int n2)
{
	/*int n1, n2;
	char ch;

	printf("연산 입력: ");
	scanf("%d %c %d", &n1, &ch, &n2);*/

	switch (oper)
	{
	case '+':
		printf("더한 값: %d\n", n1 + n2);
		break;

	case '-':
		printf("뺀 값: %d\n", n1 - n2);
		break;

	case '*':
		printf("곱한 값: %d\n", n1 * n2);
		break;

	case '/':
		printf("나눈 값: %d\n", n1 / n2);
		break;
	}

}

int Total(int kor, int math, int eng)
{
	return kor + math + eng;
}

double Avg(int tot)
{
	//tot = Total(kor, math, eng);
	return tot / 3.0;
}

char Grade(double avg)
{
	//avg = Avg(kor, math, eng);
	
	switch ((int)avg / 10)
	{
	case 10:
	case 9:
		return 'A';

	case 8:
		return 'B';

	case 7:
		return 'C';

	case 6:
		return 'D';

	default:
		return 'F';
	}
}






int main()
{
	// -- strlen() --
	/*char str[100];

	printf("입력: ");
	scanf("%s", str);

	printf("길이: %d\n", strlen(str));*/

	// -- strcmp --
	/*char str1[100], str2[100];

	printf("문자열1 입력: ");
	scanf("%s", str1);

	printf("문자열2 입력: ");
	scanf("%s", str2);

	if (str1 == str2)
	{
		printf("두 문자열은 같습니다.\n");
	}
	else
	{
		printf("두 문자열은 다릅니다.\n");
	}

	printf("출력: %d\n", strcmp(str1, str2)); */


	//-- strcpy -- 
	/*char str1[100], str2[100];

	printf("문자열 입력: ");
	scanf("%s", str1);

	//str2 = str1
	strcpy(str2, str1);

	printf("출력: %s\n", str2);
	*/

	//-- strcat --
	/*char str1[100] = "Abcd", str2[100] = "Efgh";

	strcat(str1, str2);

	printf("출력: %s\n", str1); // 이어붙여진 형태로 출력됨
	*/

	/*
	int num = 5; // 컴퓨터 안에 공간은 계속 가지고 있음 - num을 사용하기 위해 빌려 사용하는 개념
	int* ptr; // int포인터(int*) -> ptr의 자료형은 int -> 정수를 저장하는 것은 X, int 자료형을 가진 공간의 주소를 저장
	int** dptr; // ptr의 포인터(이중포인터)

	ptr = &num;
	dptr = &ptr;

	printf("num의 주소: %p\n", &num); // 주소를 랜덤으로 할당 받음
	printf("ptr의 값 : %p\n", ptr); //ptr이 num의 주소를 그대로 넘겨받음

	printf("num의 값: %d\n", num);
	printf("ptr을 이용한 num의 값: %d\n", *ptr);

	printf("\nptr의 주소: %p\n", &ptr); // num과 다른 주소를 가짐 -> ptr의 주소를 가지는 pointer가 있지 않을까
	printf("dptr의 값: %p\n", dptr);

	printf("dptr을 이용한 num의 값: %d\n", **dptr);
	*/


	//Q) 문제 
	/*
	int num = 5; 
	int* ptr; 
	int** dptr; 
	int*** tptr;

	ptr = &num;
	dptr = &ptr;
	tptr = &dptr;

	printf("num의 주소: %p\n", &num);
	printf("ptr의 값 : %p\n", ptr); 

	printf("\nnum의 값: %d\n", num);
	printf("ptr을 이용한 num의 값: %d\n", *ptr);
	printf("dptr을 이용한 num의 값: %d\n", **dptr);
	printf("tptr을 이용한 num의 값: %d\n", ***tptr);

	printf("\nptr의 주소: %p\n", &ptr); // num과 다른 주소를 가짐 -> ptr의 주소를 가지는 pointer가 있지 않을까
	printf("dptr의 값: %p\n", dptr);

	printf("\ndpr의 주소: %p\n", &dptr); 
	printf("tptr의 값: %p\n", tptr);
	*/

	//포인터 문제
	//Q1) 정수형 변수를 선언하고 포인터 변수에 해당 변수의 주소를 저장 후, 
	//    포인터 변수를 통해 정수형 변수의 값을 입력 받으세요. (정수형 변수의 값은 0으로 초기화)
	/*int num = 0;
	int* ptr;

	ptr = &num;

	printf("입력: ");
	scanf("%d", ptr);

	printf("출력: %d\n", num);
	printf("출력: %d\n", *ptr);*/


	//함수
	/*int result;
	
	result = Add(10, 15);

	printf("연산 결과: %d\n", result);*/

	//Add2(3, 8);
	
	//함수 문제
	//Q1) 각 연산 결과를 도출해주는 함수를 작성

	/*int num1, num2;
	
	printf("두 수 입력: ");
	scanf("%d %d", &num1, &num2);

	Add(num1, num2);
	Sub(num1, num2);
	printf("곱한 값 : %d\n", Mul(num1, num2));
	printf("나눈 값 : %d\n", Div(num1, num2));*/

	//Q2) 각 연산 결과를 도출해주는 함수를 작성하세요
	
	/*func();*/

	/*int num1, num2;
	char oper;

	pritnf("연산 입력: ");
	scanf("%d %c %d", &num1, &oper, &num2);

	switch (oper)
	{
	case '+':
		Add(num1, num2);
		break;

	case '-':
		Sub(num1, num2);
		break;

	case '*':
		printf("곱한 값: %d\n", Mul(num1, num2));
		break;

	case'/':
		printf("나눈 값: %d\n", Div(num1, num2));
		break;

	}*/

	/*int num1, num2;
	char oper;

	printf("연산 입력: ");
	scanf("%d %c %d", &num1, &oper, &num2);

	Calc(num1, oper, num2);*/

	//Q3) 철수의 성적을 국어, 수학, 영어 순서로 입력 받은 뒤
	//총합을 변수 total에 반환해주는 함수, 
	//그 값을 받아 평균을 변수 avg에 반환해주는 함수, 
	//평균을 비교해 등급을 변수 grade에 반환해주는 함수를 작성해서 main에 각 총합 평균, 등급을 출력해보세요

	int kor, math, eng;
	int total;
	double avg;
	char grade;

	printf("국어, 수학, 영어 성적 입력: ");
	scanf("%d %d %d", &kor, &math, &eng);

	total = Total(kor, math, eng);
	avg = Avg(total);
	grade = Grade(avg);

	printf("총합 : %d\n", total);
	printf("평균 : %.2f\n", avg);
	printf("등급 : %c\n", grade);
	


	return 0;
}
