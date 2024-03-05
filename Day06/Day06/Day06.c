#include <stdio.h>

/*-----반복문-----
- while()문의 원형: 
		초기식;

		while (조건식)
		{
			종속 문장 및 변화식;
		}

- while() 문에서 초기식은 while문 바깥에 존재해야 하고, 변화식은 종속 문장과 같이 존재한다. 
- while()문에서 무한루프를 사용할 떄는 조건식에 1을 작성해주면 된다. 
- while()문에서 종속 문장이 한문장 일 때는 {}(중괄호)를 생략할 수 있다. 
- 하지만 종속 문장에 변화식이 같이 작성되기 때문에 {}(중괄호)를 생략하는 경우는 거의 없다.

------------------------------------
- do ~ while()문의 원형:
			초기식;

			do
			{
				종속문장 및 변화식;
			} while (조건식);

- do ~ while()문은 while문과 전체적으로 비슷하지만 종속문장을 최소 한번은 실행 시킨다는 특징을 갖고 잇다. 
- do ~ while()문에서 무한루프를 사용하고 싶을 때는 while문과 마찬가지로 조건식에 1을 작성해주면 된다. 
*/

/* ----- 배열 -----
- 일정한 간격을 두고 붙여놓은 것
- 특정 자료형을 가진 변수를 여러 개 선언하는 개념
- 배열 선언 원형 : 자료형 배열명[공간의 개수];
- 배열의 각 공간을 나타내주는 숫자를 보고 index(인덱스)라고 부른다.
- 인덱스는 0부터 시작하기 때문에 0 ~ (공간의 개수 -1)까지 존재한다.
- 배열을 사용할 때는 반복문을 같이 사용해야 한다. 
- 배열은 변수와 마찬가지로 초기화를 진행할 수 있지만 {}(중괄호)를 같이 사용한다. 
						ex) int arr[5] = {3, 1, 5, 6, 2};
- 배열의 모든 공간을 한번에 0으로 초기화 할 때는 {}(중괄호)안에 0, 를 작성해준다.
						ex) int arr[5] = {0, };
*/

/* ----- 문자열 입력 받는 방법 ----- 
- scanf() 함수를 통해 문자열을 입력 받을 떄는 배열 이름 앞에 &나 배열의 뒤에 인덱스를 작성하지 않는다.
- 문자열의 끝에는 항상 문자열의 끝을 알려주는 NULL 문자가 들어간다. 
- 문자열을 배열에 저장할 때는 반드시 NULL문자의 크기까지 고려해줘야 한다. 
- NULL 문자를 표기할 때는 >> 1) 정수 0, 2) 문자 '\0', 3) 키워드 NULL 
- 배열을 문자열로 초기화 할 때는 초기화 할 문자열을 ""(큰따옴표)로 감싸준다.
				ex) char str[6] = "Hello";

- 문자열을 담을 배열을 NULL로 초기화 할 때는 ""(큰따옴표)만 작성하면 된다. 
				ex) char str[10] = "";
*/



int main()
{
	/*int i = 0;

	while (i < 10)
	{
		printf("Hello world!\n"); 
		i++;
		}*/
	/*
	// while 무한루프
	while (1)
	{
		printf("Hello world\n");
		
	}*/

	//반복문 문제
	/*//Q1) 별도의 입력 없이 알파벳 A~Z까지 출력되는 프로그램을 작성하기
	char ch = 'A';

	while (ch <= 'Z')
	{
		printf("%c\n", ch);
		ch++;
	}*/
	

	/*
	//Q2) 소문자 알파벳 하나를 입력 받고, a부터 입력 받은 알파벳까지 출력되는 프로그램을 작성
	
	char ch1;
	char ch2 = 'a';

	printf("입력: ");
	scanf("%c", &ch1);

	while (ch2 <= ch1)
	{
		printf("출력: %c\n", ch2);
		ch2++;
	}*/


	//Q3) 숫자 한 개를 입력 받고 출력을 반복하다가 숫자 9가 입력됐을 때 종료되는 프로그램을 작성

	/*int i;
	while (1)
	{
		printf("입력: ");
		scanf("%d", &i);

		if (i == 9)
			break;

		printf("출력: %d\n\n", i);
	}*/


	//--- do ~ while---
	/*int i = 7;

	do
	{
		printf("Hello world\n");
		i++;
	} while (i < 5);*/

	/*
	//do ~ while 무한 루프
	int i = 7;

	do
	{
		printf("Hello world\n");
		//i++;
	} while (1);
	*/

	//반복문 문제
	/*
	// Q1) 반복적으로 숫자를 입력 출력하는데 이 때, 짝수가 입력되면 종료되게 작성
	int i;

	do
	{
		printf("입력: ");
		scanf("%d", &i);

		printf("출력: %d\n\n", i);
	} while (i % 2);

	printf("짝수가 입력되어 프로그램을 종료합니다.");
	*/

	//Q2) 정수 10개를 입력 받고, 출력하는 프로그램을 만드세요
	/*int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10

	printf("입력: ");

	scanf("%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);

	printf("출력: %d %d %d %d %d %d %d %d %d %d", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);*/
	

	// 배열-----
	/*int arr[10];

	arr[0] = 10;
	arr[9] = 20;

	printf("출력: %d %d \n", arr[0], arr[9]);

	*/

	//배열 문제
	//Q1) 정수 10개를 입력 받고, 출력하는 프로그램을 만드세요
	/*int arr[10];

	printf("입력: ");
	
	scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
	

	printf("출력: %d %d %d %d %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
	*/
	
	/*
	// 반복문 사용하기
	int arr[10];

	printf("입력: ");
	for (int i = 0; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("출력: ");
	for (int i = 0; i <=9; i++)
	{
		printf("%d ", arr[i]);
	}
	*/

	/*
	int arr[5] = {3, 1, 2, 5, 7}; // 배열 초기화

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	} */

	/*
	int arr[5] = { 0, }; // 0으로 초기화

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	*/


	//문자열 문제
	//Q) Hello라는 문자열을 입력받고 배열에 저장 후 출력하는 프로그램 만들기
	/*char arr[5];

	printf("입력: ");
	scanf("%c%c%c%c%c", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	printf("출력: %c%c%c%c%c\n", arr[0], arr[1], arr[2], arr[3], arr[4]);*/


	/*char arr[5];

	printf("입력: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%c", &arr[i]);
	}
	
	printf("출력: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%c", arr[i]);
	}*/

	/*
	char str[6]; // 문자열의 경우 문자열 작성 뒤에 Null이 하나 들어갈 공간 필요 >> 따라서 필요 공간 + 1
	
	printf("입력: ");
	scanf("%s", str);
	
	str[2] = NULL;

	printf("출력: %s\n", str);
	*/

	/*char str[6] = "Hello";
	
	printf("str : %s\n", str);*/

	//char str[10];

	//printf("입력: ");
	//scanf("%s", str);

	//str[5] = 'a'; //null 자리에 값을 부과 --> 할당받지 않은 부분까지 값이 출력

	//printf("출력: %s\n", str);


	char str[10] = ""; // 모든 공간이 Null로 초기화 됨

	printf("입력: ");
	scanf("%s", str);

	str[5] = 'a'; //아까와 같은 문제가 발생하지 않음

	printf("출력: %s\n", str);

	return 0;
}