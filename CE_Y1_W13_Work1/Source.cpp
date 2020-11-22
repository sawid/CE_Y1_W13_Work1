#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
bool countAlpha(char*);
int main() {
	char str[100];
	int i = 0;
	struct counter
	{
		int alpha = 0, vowel = 0, number = 0, word = 0;
	};
	counter Counter1;
	scanf("%[^\n]", &str);
	while (str[i] != '\0')
	{
		if (countAlpha(&str[i]))
		{
			Counter1.alpha++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			Counter1.number++;
		}
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			Counter1.vowel++;
		}
		if (str[i] == ' ')
		{
			Counter1.word++;
		}
		i++;
	}
	printf("Alphabet = %d\nVowel = %d\nNumber = %d\nWord = %d", Counter1.alpha - Counter1.vowel, Counter1.vowel, Counter1.number, Counter1.word + 1);
}

bool countAlpha(char* str) {
	if (*str >= 'A' && *str <= 'Z')
	{
		return true;
	}
	if (*str >= 'a' && *str <= 'z')
	{
		return true;
	}
	return false;
}