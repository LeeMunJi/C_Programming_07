// 문자열 함수

// 문자 입출력 라이브러리 함수
// getchar(), putchar(int c), gets(char *s), puts(const char *s)

// 문자 입출력 예시 코드
/*
#include <stdio.h>
int main()
{
	int ch; // char이 아니라 int사용하는 이유 : 입력의 끝을 나타내는 ^Z가 -1.0~255까지의 문자와 -1을 인식하기 때문
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

// ※ putchar(65) => A (아스키코드)

// 문자열 처리 라이브러리 함수 (string.h)
// strlen(s), strcpy(s1, s2), strcat(s1, s2), strcmp(s1, s2)
// strncpy(s1, s2, n), strcat(s1, s2, n), strcmp(s1, s2, n)
// strchr(s, c) : 문자열 s안에서 문자 c를 찾음
// strstr(s1, s2) : 문자열 s1에서 문자열 s2를 찾음
// strtok(s, seps) : 문장에서 단어 분리해낼 때 사용
// sscanf(str, "%f", &i) : 문자열(에 저장된 숫자)을 숫자로 바꿀 때 사용
// sprintf(str, "%f", i) : 숫자를 문자열로 바꿀 때 사용

// 문자열 입출력 함수
// char *gets(char *buffer) : 엔터키 나올 때까지 한 줄의 문자열 입력, 문자열에 \n포함 X NULL로 변환 O, 입력받은 문자열은 buffer가 가리키는 주소에 저장됨
// int puts(const char *str) : NULL은 \n로 변경

// 메시지 암호화 (평문 문자를 다른 문자로 1:1 대응시켜 암호문 만드는 방식)
/*
#include <stdio.h>

void encrypt(char cipher[], int shift);

int main()
{
	char cipher[50];
	int shift = 3;
	printf("문자열 입력 : ");
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
	printf("암호화된 문자열 : %s\n", cipher);
}
*/

// 행맨 게임 (코드 보완 필요)
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
		printf("문자열 입력 : %s\n", answer);
		printf("글자 추측 : ");
		scanf_s(" %c", &ch); // 문자 입력 받을 시 앞에 공백
		if (check(solution, answer, ch) == 1)
			break;
	}
	printf("맞추기 성공\n");
	return 0;
}

int check(char s[], char a[], char ch)
{
	int i;
	static int try_count = 0;

	try_count++;
	if (try_count >= 10)
	{
		printf("횟수초과\n");
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

// 문자열 처리 함수 strlen() 예제 코드
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	int len;
	char string[100];

	printf("임의의 문자열을 입력하세요.\n");
	gets(string);

	printf("문자열의 길이는 %d입니다.\n", strlen(string));

	return 0;
}
*/

// 문자열 처리 함수 strcpy() 예제 코드
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[100] = "\0"; // 배열 공백으로 초기화
	char input[100] = "\0";

	printf("임의의 문자열을 입력하시오 : ");
	gets(input);

	strcpy(string, input);
	printf("입력하신 문자열은 %s입니다.\n", string); // 수정하지 말 것!

	return 0;
}
*/

// 문자열 처리 함수 strcat() 예제 코드
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string1[100];
	char string2[100];

	printf("문자열 1을 입력하시오 : \n");
	gets(string1);

	printf("문자열 2를 입력하시오 : \n");
	gets(string2);

	printf("%s", strcat(string1, string2));

	return 0;
}
*/

// 문자열 처리 함수 strcmp() 예제 코드
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string1[100];
	char string2[100];

	printf("문자열 1을 입력하시오 : \n");
	scanf("%s", string1);

	printf("문자열 2를 입력하시오 : \n");
	scanf("%s", string2);

	if (strcmp(string1, string2) == 0) //두 문장의 비교결과가 같으면
		printf("같음\n");
	else //두 문장의 비교결과가 다르면
		printf("다름\n");

	return 0;
}
*/

// 문자열 처리 함수 strtok() 예제 코드 (어려움)
/*
#include <stdio.h>
#include <string.h>

char s[] = "To achieve great things, two things are needed: a plan, and not quite enough time.";
char seps[] = ",:"; // 적절한 조건을 추가하시오.
char* token;

int main(void)
{
	token = strtok(s, seps);
	while (token != NULL)
	{
		printf("토큰 : %s\n", token);
		token = strtok(NULL, seps);
	}
}
*/

// 문자 입출력 함수와 버퍼
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	int num, grade;

	printf("학번을 입력하시오 : ");
	scanf_s("%d", &num); // 수정하지 말 것!

	getchar(); // ★
	printf("학점을 입력하시오 : ");
	grade = getchar(); // 수정하지 말 것!

	printf("학번 : %d, 학점 : %c\n", num, grade);

	return 0;
}
*/

// 메시지 암호화
/*
#include <stdio.h>

void encrypt(char cipher[], int shift);

int main(void)
{
	char cipher[50];
	int shift;

	printf("이동 할 수를 입력하시오 : \n");
	scanf_s("%d", &shift);

	getchar(); // ★
	printf("소문자로만 구성된 문자열(공백없이)을 입력하시오 : \n");
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
	printf("암호화된 문자열 : %s", cipher);
}
*/