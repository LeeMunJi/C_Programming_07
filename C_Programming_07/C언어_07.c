// ���ڿ� �Լ�

// ���� ����� ���̺귯�� �Լ�
// getchar(), putchar(int c), gets(char *s), puts(const char *s)

// ���� ����� ���� �ڵ�
/*
#include <stdio.h>
int main()
{
	int ch; // char�� �ƴ϶� int����ϴ� ���� : �Է��� ���� ��Ÿ���� ^Z�� -1.0~255������ ���ڿ� -1�� �ν��ϱ� ����
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		puchar(ch);
	}
	return 0;
}
*/

// �� putchar(65) => A (�ƽ�Ű�ڵ�)

// ���ڿ� ó�� ���̺귯�� �Լ� (string.h)
// strlen(s), strcpy(s1, s2), strcat(s1, s2), strcmp(s1, s2)
// strncpy(s1, s2, n), strcat(s1, s2, n), strcmp(s1, s2, n)
// strchr(s, c) : ���ڿ� s�ȿ��� ���� c�� ã��
// strstr(s1, s2) : ���ڿ� s1���� ���ڿ� s2�� ã��
// strtok(s, seps) : ���忡�� �ܾ� �и��س� �� ���
// sscanf(str, "%f", &i) : ���ڿ�(�� ����� ����)�� ���ڷ� �ٲ� �� ���
// sprintf(str, "%f", i) : ���ڸ� ���ڿ��� �ٲ� �� ���

// ���ڿ� ����� �Լ�
// char *gets(char *buffer) : ����Ű ���� ������ �� ���� ���ڿ� �Է�, ���ڿ��� \n���� X NULL�� ��ȯ O, �Է¹��� ���ڿ��� buffer�� ����Ű�� �ּҿ� �����
// int puts(const char *str) : NULL�� \n�� ����

// �޽��� ��ȣȭ (�� ���ڸ� �ٸ� ���ڷ� 1:1 �������� ��ȣ�� ����� ���)
/*
#include <stdio.h>

void encrypt(char cipher[], int shift);

int main()
{
	char cipher[50];
	int shift = 3;
	printf("���ڿ� �Է� : ");
	gets(cipher);
	encrypt(cipher, shift);
	return 0;
}

void encrypt(char cipher[], int shift)
{
	int i = 0;
	while (cipher[i] != '\0') // \0 = NULL
	{
		if (cipher[i] >= 'a' && cipher[i] <= 'z')
		{
			cipher[i] += shift;
			if (cipher[i] > 'z')
				cipher[i] -= 26;
		}
		i++;
	}
	printf("��ȣȭ�� ���ڿ� : %s\n", cipher);
}
*/

// ��� ���� (�ڵ� ���� �ʿ�)
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char s[], char a[], char ch);

int main()
{
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	while (1)
	{
		printf("���ڿ� �Է� : %s\n", answer);
		printf("���� ���� : ");
		scanf_s(" %c", &ch); // ���� �Է� ���� �� �տ� ����
		if (check(solution, answer, ch) == 1)
			break;
	}
	printf("���߱� ����\n");
	return 0;
}

int check(char s[], char a[], char ch)
{
	int i;
	static int try_count = 0;

	try_count++;
	if (try_count >= 10)
	{
		printf("Ƚ���ʰ�\n");
		exit(1);
	}

	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == ch)
			a[i] = ch;
	}
	if (strcmp(s, a) == 1)
		return 1;
	else
		return 0;
}
*/

// ���ڿ� ó�� �Լ� strlen() ���� �ڵ�
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	int len;
	char string[100];

	printf("������ ���ڿ��� �Է��ϼ���.\n");
	gets(string);

	printf("���ڿ��� ���̴� %d�Դϴ�.\n", strlen(string));

	return 0;
}
*/

// ���ڿ� ó�� �Լ� strcpy() ���� �ڵ�
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[100] = "\0"; // �迭 �������� �ʱ�ȭ
	char input[100] = "\0";

	printf("������ ���ڿ��� �Է��Ͻÿ� : ");
	gets(input);

	strcpy(string, input);
	printf("�Է��Ͻ� ���ڿ��� %s�Դϴ�.\n", string); // �������� �� ��!

	return 0;
}
*/

// ���ڿ� ó�� �Լ� strcat() ���� �ڵ�
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string1[100];
	char string2[100];

	printf("���ڿ� 1�� �Է��Ͻÿ� : \n");
	gets(string1);

	printf("���ڿ� 2�� �Է��Ͻÿ� : \n");
	gets(string2);

	printf("%s", strcat(string1, string2));

	return 0;
}
*/

// ���ڿ� ó�� �Լ� strcmp() ���� �ڵ�
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string1[100];
	char string2[100];

	printf("���ڿ� 1�� �Է��Ͻÿ� : \n");
	scanf("%s", string1);

	printf("���ڿ� 2�� �Է��Ͻÿ� : \n");
	scanf("%s", string2);

	if (strcmp(string1, string2) == 0) //�� ������ �񱳰���� ������
		printf("����\n");
	else //�� ������ �񱳰���� �ٸ���
		printf("�ٸ�\n");

	return 0;
}
*/

// ���ڿ� ó�� �Լ� strtok() ���� �ڵ� (�����)
/*
#include <stdio.h>
#include <string.h>

char s[] = "To achieve great things, two things are needed: a plan, and not quite enough time.";
char seps[] = ",:"; // ������ ������ �߰��Ͻÿ�.
char* token;

int main(void)
{
	token = strtok(s, seps);
	while (token != NULL)
	{
		printf("��ū : %s\n", token);
		token = strtok(NULL, seps);
	}
}
*/

// ���� ����� �Լ��� ����
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	int num, grade;

	printf("�й��� �Է��Ͻÿ� : ");
	scanf_s("%d", &num); // �������� �� ��!

	getchar(); // ��
	printf("������ �Է��Ͻÿ� : ");
	grade = getchar(); // �������� �� ��!

	printf("�й� : %d, ���� : %c\n", num, grade);

	return 0;
}
*/

// �޽��� ��ȣȭ
/*
#include <stdio.h>

void encrypt(char cipher[], int shift);

int main(void)
{
	char cipher[50];
	int shift;

	printf("�̵� �� ���� �Է��Ͻÿ� : \n");
	scanf_s("%d", &shift);

	getchar(); // ��
	printf("�ҹ��ڷθ� ������ ���ڿ�(�������)�� �Է��Ͻÿ� : \n");
	gets(cipher);

	encrypt(cipher, shift);
	return 0;
}

void encrypt(char cipher[], int shift)
{
	int i = 0;
	while (cipher[i] != '\0') {
		if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			cipher[i] += shift;
			if (cipher[i] > 'z')
				cipher[i] -= 26;
		}
		i++;
	}
	printf("��ȣȭ�� ���ڿ� : %s", cipher);
}
*/