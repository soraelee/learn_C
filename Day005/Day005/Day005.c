#include <stdio.h>

/*----- ���ǹ� -----
: ���ǽ��� ���ϰ� �ش� ���ǽ��� ���̸� ���� ������ ����, �����̸� Ż���ϴ� ����
- if ~ else, switch ~ case �� ������ ����

- if ~ else�� ����:
		if (���ǽ�) // ������ ���� �Ǵ�  // ���ǹ��� ����
		{
			���� ����; // ���� �� ����
		}

		else if (���ǽ�)					// ���ǹ��� �߰�
		{
			���� ����;
		}

		else							// ������
		{
			���� ����;
		}

- if ~ else ������ ���ǽ� �ڿ� ;(�����ݷ�)�� �ۼ��ϰ� �Ǹ� ���� ������ ���� �� ���� �ȴ�.
- if ~ else ������ ���� ������ �� �� �϶� �� {}(�߰�ȣ)�� ������ �� �ִ�.

-  switch case�� ���� :
		switch(���� ��)
		{
			case �ش� ��:
				���ӹ���;
				break;

			default:
				���� ����;
				break;

		}
- switch ~ case ������ break Ű����� �ش� ������ Ż���ϴ� �뵵�� ���
// break �� �ʼ�? ����? >> ������� �ǵ��� ���� ����ϴ� ��쵵 ����

- switch ~ case ������ ���� �� �������� ����, ������ ����� ������ �ۼ��� �� ����

- �� case�� �ۼ��Ǵ� ���� �ݵ�� ����� �ۼ����־�� �Ѵ�. (���� ���� �Ұ�)

//��ǻ���� ���忡�� switch case�� �� ���� >> Ư�� ������ ǥ���� �� if else�� �� ��
*/

/* ----- �ݺ��� -----
: ���ǽ��� ���ϰ� ������ ���϶��� ���� ������ ���� �� �ٽ� ���ǽ��� ���ϴ� ����
- ���α׷����� Ư�� �ڵ带 ���� Ƚ�� ��ŭ �ݺ���Ű�� ����

--> for(), while(), do ~ while() �������� ����

- for()���� �⺻ ���� : 
			for (�ʱ��; ���ǽ�; ��ȭ��)
			{
				���� ����;
			}
- �ʱ�� -> ���ǽ� -> ���ӹ��� -> ��ȭ�� -> ���ǽ� -> ���ӹ��� ��ȭ�� ...������ ����ȴ�. 
- for������ ���ѷ����� ����ϰ� ���� ���� �ʱ��, ���ǽ�, ���Ͻ��� �����ϸ� �ȴ�. 
		ex) for(;;)
- for ������ ���ӹ����� ������ ���� {}(�߰�ȣ)�� ������ �� �ִ�.
*/

/*----- ��Ÿ Ű���� -----
- break : �ش� Ű���带 ������ �Ǹ� �ݺ����� Ż��
- continue: �ش� Ű���带 ������ �Ǹ� continue���� �Ʒ��� �ִ� ���� ������ �������� �ʰ� ����ȴ�. 
*/







int main()
{
	/*
	// ---���ǽ� ---
	int num;

	printf("�Է� : ");
	scanf("%d", &num);

	if (num > 10)
	{
		printf("num�� 10���� Ů�ϴ�.\n"); // 10���� ���� ��� ���� ������ �������� ����
	}

	//if (num > 5)
	//{
	//	printf("num�� 5���� Ů�ϴ�.\n"); // �̷��� �����ϴ� ���, ������ �������� ����Ǿ� 5���� ũ��, 10���� ũ�� ��� ���
	//}

	else if (num > 5)
	{
		printf("num�� 5���� Ů�ϴ�.\n");
	}

	else
	{
		printf("num�� 5���� �۰ų� �����ϴ�.\n");
	}

	*/

	/*int num;

	printf("�Է�: ");
	scanf("%d", &num);

	if (num == 5)
	{
		printf("num�� 5�Դϴ�.\n");
	}*/

	// Q1) ���ڸ� �Է� �ް� �ش� ���ڰ� 14 �̻��� ���� " 14���� ũ�ų� ���� ��"�� ���,
	//		14�̸��� ���� "14���� ���� ��"�� ������ִ� ���α׷� �ۼ�

	/*int num;

	printf("�Է�: ");
	scanf("%d", &num);

	if (num >= 14)
		printf("14���� ũ�ų� ���� ��");

	else
		printf("14���� ���� ��");*/

	// Q2) ���ڸ� �Է� �ް� ���ڰ� 3�� ����� ���� ��, �ƴҶ��� ������ ����ϴ� ���α׷� �ۼ�

	/*int num;
	printf("�Է�: ");
	scanf("%d", &num);

	if (num % 3)
		printf("����");

	else
		printf("��");*/

	// Q3) �л��� ����, ����, ���� ������ ���� �Է� �ް� ����� ���� ���� ��� ������ �°� ����� ����غ�����.
	//		(����� �Ҽ��� 2��° �ڸ����� ���, 
	//		����� 90�̻� A, 80�̻� B, 70�̻� ��, 60�̻� D, �������� F)
	/*
	int kor, math, eng;
	double avg ;

	printf("���� : ");
	scanf("%d", &kor);


	printf("���� : ");
	scanf("%d", &math);

	printf("���� : ");
			scanf("%d", &eng);

			avg = (double)(kor + math + eng) / 3.0; // int��� ������ �̷������ ������ int�� ���

			printf("��� : %.2f", avg);

			if (avg >= 90)
				printf("��� : A\n");

			else if (avg >= 80)
				printf("��� : B\n");

			else if (avg >= 70)
				printf("��� : C\n");

			else if (avg >= 60)
				printf("��� : D\n");

			else
				printf("��� : F\n");
			*/

	/* ---- switch ~ case ----
	int num;
	printf("�Է�: ");
	scanf("%d", &num);

	switch (num)
	{
	case 1: // num�� 1�� ���� ������ ���
		printf("num�� 1�Դϴ�.\n");
		break;

	case 2:
		printf("num�� 2�Դϴ�.\n");
		break;

	case 3:
		printf("num�� 3�Դϴ�.\n");
		break;

	default:
		printf("1 ~ 3 �� �ϳ��� �Է����ּ���\n");
		break;

			}

			*/

	/*
	// 	break�� ������� �ʴ� ���
	int num;
	printf("�Է�: ");
	scanf("%d", &num);

	switch (num)
	{
		case 1: // num�� 1�� ���� ������ ���
			printf("num�� 1�Դϴ�.\n");

		case 2:
			printf("num�� 2�Դϴ�.\n");

		case 3:
			printf("num�� 3�Դϴ�.\n");

		default:
			printf("1 ~ 3 �� �ϳ��� �Է����ּ���\n");

	} //break�� ���� ��� ���� Ż������ ����
	*/

	/* break���� �ǵ������� �����ϴ� ���
	int num;

	printf("�Է�: ");
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
	double num; // ������� ����

	printf("�Է�: ");
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
	int num2 = 4; // ������� ����

	printf("�Է�: ");
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
	// Q4) ���ڸ� �Է� �ް� �ش� ���ڰ� 14 �̻��� ���� "14���� ũ�ų� ���� ��"�� ���,
	//		14�̸��� ���� "14���� ���� ��"�� ������ִ� ���α׷� �ۼ�

	int num;

	printf("�Է�: ");
	scanf("%d", &num);

	switch (num >= 14)
	{
		case 1:
			printf("14���� ũ�ų� ���� ��");
			break;
		default:
			printf("14���� ���� ��");
			break;
	}
	*/


/*
	// Q5) ���ڸ� �Է¹ް� ���ڰ� 3�� ��� �϶��� ��, �ƴҶ��� ������ ����ϴ� ���α׷��� �ۼ�

	int num;

	printf("�Է�: ");
	scanf("%d", &num);

	switch (num % 3)
	{
	case 0:
		printf("��");
		break;

	case 1 :
		printf("����");
		break;
	
	case 2:
		printf("����");
		break;
	}
	*/

	/*int num;

	printf("�Է�: ");
	scanf("%d", &num);

	switch (num % 3)
	{
	case 0:
		printf("��");
		break;

	default:
		printf("����");
		break;
	}*/



/*
	//Q6) �л��� ����, ����, ���� ������ ���� �Է� �ް� ����� ���� ���� ��� ������ �°� ����� ����غ�����.
	//		(����� �Ҽ��� 2��° �ڸ����� ���, 
	//		����� 90�̻� A, 80�̻� B, 70�̻� C, 60�̻� D, �������� F)

	int kor, math, eng;
	double avg;

	printf("����: ");
	scanf("%d", &kor);

	printf("����: ");
	scanf("%d", &math);

	printf("����: ");
	scanf("%d", &eng);

	avg = (kor + math + eng) / 3.0;

	printf("���: %.2f", avg);


	switch ((int)avg / 10) // ���� ��
	{
	case 10:
	case 9:  // ������ �ذ�
		printf("��� : a");
		break;
	
	case 8:
		printf("��� : b");
		break;

	case 7:
		printf("��� : c");
		break;

	case 6:
		printf("��� : d");
		break;

	default:
		printf("��� : f");
		break;
	}	

	//int i;
*/

	/*int kor, math, eng;
	double avg;

	printf("����: ");
	scanf("%d", &kor);

	printf("����: ");
	scanf("%d", &math);

	printf("����: ");
	scanf("%d", &eng);

	avg = (double)(kor + math + eng) / 3.0;
	printf("��� : %.2f\n", avg);

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

/* --- for �� ---
	//for (i = 0; i < 10; i++) // �ʱ�� : ���� ����, ���ǽ� : ������ ��ȭ�� : ������� // i++ : 1�� ����
 //	{
	//	printf("Hello world!");
	//}


	//printf("i�� �� : %d\n", i);
	//
	*/

	/*
	for (;;) // ���ѷ��� ��� ��
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
		if (i == 5) // i�� 5�� �� �Ʒ��� ���� ������ ���õǰ� �ٷ� ���ǽ��� ��
			continue;

		printf("Hello world! i: %d\n", i);
	}
	*/
	
	
	//�ݺ��� ����
	/*
	//Q1) ������ �Է� ���� ���ĺ� A~Z���� ��µǴ� ���α׷��� �ۼ��غ���
	
	for (char i = 'A'; i <= 'Z'; i++)
	{
		printf("%c\n", i);
		}
	*/

	/*
	//Q2) �ҹ��� ���ĺ� �ϳ��� �Է� �ް�, a���� �Է� ���� ���ĺ����� ��µǴ� ���α׷��� �ۼ�
	char alpha;

	printf("�ҹ��� �Է� : ");
	scanf("%c", &alpha);

	for (char i = 'a'; i <= alpha; i++) // int�� char�� ���� �� char�� int�� �ڵ� ����ȯ �����
	{
		printf("%c\n", i);
	}*/

	/*
	//Q3) ���� �� ���� �Է� �ް� ����� �ݺ��ϴٰ� ���� 9�� �Է� ���� �� ����Ǵ� ���α׷��� �ۼ�

	for (int i;;)
	{
		printf("�Է�: ");
		scanf("%d", &i);

		if (i == 9)
			break;

		printf("���: %d\n", i);
		}*/


	return 0;
}