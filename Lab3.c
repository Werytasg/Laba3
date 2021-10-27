#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findNumber(int* arr, int size)
{
    int answer, reverseNumbers;
    for (int i = 0; i < size; ++i)
    {
        reverseNumbers = 0;
        for (int j = 0; j < size; ++j)
        {
            if (arr[i] == -arr[j])
                reverseNumbers++;
        }
        if (reverseNumbers == 0)
            answer = arr[i];
    }
    return answer;
}


int main()
{
    int a = 1, i = 0;
    int numbers[50];
    printf("%s", "Enter your numbers, end with 0:\n");
    while (a)
    {
        scanf("%i", &a);
        numbers[i] = a;
        ++i;
    }
    printf("\nYour answer: %i", findNumber(numbers, i - 1));
}