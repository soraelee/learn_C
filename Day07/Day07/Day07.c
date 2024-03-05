#include <stdio.h>
#include <string.h>

/* ----- ���ڿ� ���� �Լ� -----
- ���ڿ� ���� �Լ��� ����� ���� string.h ��������� ��������� �Ѵ�.
	strlen(���ڿ�) : �Ѱ��� ���ڿ��� ���̸� ��ȯ���ִ� �Լ� 
					 (��ȯ���ִ� ���̴� NULL ���ڸ� ������ �����̴�.)

	strcmp(���ڿ�1, ���ڿ�2):�Ѱ��� �ΰ��� ���ڿ��� ���ϰ� ������ ����(0), �ٸ��� ��(1)�� ��ȯ���ִ� �Լ�
							(���ڿ��� �ٸ� ���, ���ڿ�1�� ���� ���� ������ ������ -1, ������ 1�� ��ȯ)
	strcpy(���ڿ��� ������ ����, ������ ���ڿ�) : ���ڿ��� ������ ������ ������ ���ڿ��� �������ִ� �Լ�
	strcat(���ڿ��� �پ� ����, ���� ���ڿ�) : ���ڿ��� ���� ���� �ھ� �Ѱܹ��� ���ڿ��� ���ٿ��ִ� �Լ�
	
	*/

/* ----- ������ -----
- ������ ������ �ּҸ� �������ִ� ����
---- ������ ġ�� ������
- ������ ���� ����: ������ ������ �ڷ���*(�ֽ��͸���ũ) ������;
- ������ ���� �ȿ� ����� �ּ��� ������ ������ ����
	������ ���� �տ� *�� ���̴� �������� ������ �� �ִ�. > ��������� �θ�
				ex) *ptr

- ������ ������ �Ϲ� ������ �ּҸ� ������ �� �ְ�, 
  ���� ������ ������ ������ ������ �ּҸ� ������ �� �ְ�, 
  ���� ������ ������ ���� ������ ������ �ּҸ� ������ �� �ְ�, 
  ���� ������ ������ ���� ������ ������ �ּҸ� ������ �� �ְ�, ...
*/

/* ----- �Լ� -----
* Ư�� ������ �ϴ� �ڵ���� ���������� ��Ƶ� ����ü
* 
* �Լ��� ����
	- ��ȯ�� : �Լ� ������ �۾��� ��ġ�� ���� ��ȯ���� �� ����� �ڷ���
	- �Լ� �̸� : �Լ��� ����ϱ� ���� ȣ���� �� ����� �̸�
	- �Ű����� : �Լ��� ȣ���� �� ���� ������ �� �ִµ�, �� �� ���� �����ϴ� ����
	- �Լ� ��� : �Լ��� ����� �þ��� �ڵ���� �ۼ��Ǵ� ����

		��ȯ�� => int Add(int a, int b)    // Add => �Լ� �̸� (int a, int b) => �Ű����� : int ������ a�� b�� �Լ��� ����
				 {
					return a + b;
				 } => �Լ� ���

* �Լ��� ȣ��
	* ��ȯ���� ������ ���� : �Լ��� ��ȯ���ִ� ���� ������ ����
	- ȣ���� �Լ� �̸� : ���ǵ� �Լ� �� ����� �Լ��� �̸�
	- �μ�: �Լ��� ������ �� �ʿ��� ��

		- ��ȯ���� �����ϴ� �Լ� ȣ�� ����
			��ȯ���� ������ ���� = ȣ���� �Լ� �̸�(�μ�);

		-��ȯ���� �������� ������ �Լ� ȣ�� ����
			ȣ���� �Լ� �̸�(�μ�);
		
		 
		 */
//�Լ�
int Add1(int n1, int n2)
{
	return n1 + n2;
}

void Add2(int n1, int n2) // ���� ��ȯ ���� ���� ����(return x) -> void�� �ۼ�
{
	printf("���� ���: %d\n", n1 + n2);
}

void add(int n1, int n2)
{
	printf("���� ��: %d\n", n1 + n2);
}

void sub(int n1, int n2)
{
	printf("�� ��: %d\n", n1 - n2);
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

	printf("���� �Է�: ");
	scanf("%d %c %d", &n1, &ch, &n2);*/

	switch (oper)
	{
	case '+':
		printf("���� ��: %d\n", n1 + n2);
		break;

	case '-':
		printf("�� ��: %d\n", n1 - n2);
		break;

	case '*':
		printf("���� ��: %d\n", n1 * n2);
		break;

	case '/':
		printf("���� ��: %d\n", n1 / n2);
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

	printf("�Է�: ");
	scanf("%s", str);

	printf("����: %d\n", strlen(str));*/

	// -- strcmp --
	/*char str1[100], str2[100];

	printf("���ڿ�1 �Է�: ");
	scanf("%s", str1);

	printf("���ڿ�2 �Է�: ");
	scanf("%s", str2);

	if (str1 == str2)
	{
		printf("�� ���ڿ��� �����ϴ�.\n");
	}
	else
	{
		printf("�� ���ڿ��� �ٸ��ϴ�.\n");
	}

	printf("���: %d\n", strcmp(str1, str2)); */


	//-- strcpy -- 
	/*char str1[100], str2[100];

	printf("���ڿ� �Է�: ");
	scanf("%s", str1);

	//str2 = str1
	strcpy(str2, str1);

	printf("���: %s\n", str2);
	*/

	//-- strcat --
	/*char str1[100] = "Abcd", str2[100] = "Efgh";

	strcat(str1, str2);

	printf("���: %s\n", str1); // �̾�ٿ��� ���·� ��µ�
	*/

	/*
	int num = 5; // ��ǻ�� �ȿ� ������ ��� ������ ���� - num�� ����ϱ� ���� ���� ����ϴ� ����
	int* ptr; // int������(int*) -> ptr�� �ڷ����� int -> ������ �����ϴ� ���� X, int �ڷ����� ���� ������ �ּҸ� ����
	int** dptr; // ptr�� ������(����������)

	ptr = &num;
	dptr = &ptr;

	printf("num�� �ּ�: %p\n", &num); // �ּҸ� �������� �Ҵ� ����
	printf("ptr�� �� : %p\n", ptr); //ptr�� num�� �ּҸ� �״�� �Ѱܹ���

	printf("num�� ��: %d\n", num);
	printf("ptr�� �̿��� num�� ��: %d\n", *ptr);

	printf("\nptr�� �ּ�: %p\n", &ptr); // num�� �ٸ� �ּҸ� ���� -> ptr�� �ּҸ� ������ pointer�� ���� ������
	printf("dptr�� ��: %p\n", dptr);

	printf("dptr�� �̿��� num�� ��: %d\n", **dptr);
	*/


	//Q) ���� 
	/*
	int num = 5; 
	int* ptr; 
	int** dptr; 
	int*** tptr;

	ptr = &num;
	dptr = &ptr;
	tptr = &dptr;

	printf("num�� �ּ�: %p\n", &num);
	printf("ptr�� �� : %p\n", ptr); 

	printf("\nnum�� ��: %d\n", num);
	printf("ptr�� �̿��� num�� ��: %d\n", *ptr);
	printf("dptr�� �̿��� num�� ��: %d\n", **dptr);
	printf("tptr�� �̿��� num�� ��: %d\n", ***tptr);

	printf("\nptr�� �ּ�: %p\n", &ptr); // num�� �ٸ� �ּҸ� ���� -> ptr�� �ּҸ� ������ pointer�� ���� ������
	printf("dptr�� ��: %p\n", dptr);

	printf("\ndpr�� �ּ�: %p\n", &dptr); 
	printf("tptr�� ��: %p\n", tptr);
	*/

	//������ ����
	//Q1) ������ ������ �����ϰ� ������ ������ �ش� ������ �ּҸ� ���� ��, 
	//    ������ ������ ���� ������ ������ ���� �Է� ��������. (������ ������ ���� 0���� �ʱ�ȭ)
	/*int num = 0;
	int* ptr;

	ptr = &num;

	printf("�Է�: ");
	scanf("%d", ptr);

	printf("���: %d\n", num);
	printf("���: %d\n", *ptr);*/


	//�Լ�
	/*int result;
	
	result = Add(10, 15);

	printf("���� ���: %d\n", result);*/

	//Add2(3, 8);
	
	//�Լ� ����
	//Q1) �� ���� ����� �������ִ� �Լ��� �ۼ�

	/*int num1, num2;
	
	printf("�� �� �Է�: ");
	scanf("%d %d", &num1, &num2);

	Add(num1, num2);
	Sub(num1, num2);
	printf("���� �� : %d\n", Mul(num1, num2));
	printf("���� �� : %d\n", Div(num1, num2));*/

	//Q2) �� ���� ����� �������ִ� �Լ��� �ۼ��ϼ���
	
	/*func();*/

	/*int num1, num2;
	char oper;

	pritnf("���� �Է�: ");
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
		printf("���� ��: %d\n", Mul(num1, num2));
		break;

	case'/':
		printf("���� ��: %d\n", Div(num1, num2));
		break;

	}*/

	/*int num1, num2;
	char oper;

	printf("���� �Է�: ");
	scanf("%d %c %d", &num1, &oper, &num2);

	Calc(num1, oper, num2);*/

	//Q3) ö���� ������ ����, ����, ���� ������ �Է� ���� ��
	//������ ���� total�� ��ȯ���ִ� �Լ�, 
	//�� ���� �޾� ����� ���� avg�� ��ȯ���ִ� �Լ�, 
	//����� ���� ����� ���� grade�� ��ȯ���ִ� �Լ��� �ۼ��ؼ� main�� �� ���� ���, ����� ����غ�����

	int kor, math, eng;
	int total;
	double avg;
	char grade;

	printf("����, ����, ���� ���� �Է�: ");
	scanf("%d %d %d", &kor, &math, &eng);

	total = Total(kor, math, eng);
	avg = Avg(total);
	grade = Grade(avg);

	printf("���� : %d\n", total);
	printf("��� : %.2f\n", avg);
	printf("��� : %c\n", grade);
	


	return 0;
}
