#include <stdio.h>
#include <string.h>

void reverse(char* input, int length, char* output)
{
	length = length - 1;
	for(int i = 0; i <= length; i++)
	{
		output[i] = input[length-i];
	}	
}
int findCharInString(char* input, int length, char target, int start)
{
	for(;start < length; start++)
	{
		if(input[start] == target)
		{
			return start;
		}
	}

	return -1;
}

void reverseWords(char* input, int length, char* output)
{

}

int main(int argc, char* argv[])
{
	if(argc != 2)
		return 0;
	int len = strlen(argv[1]);
	char output[len+1];
	reverseWords(argv[1], len, output);
	printf("%s\n",output);

	return 0;
}

