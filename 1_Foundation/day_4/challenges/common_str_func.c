
// Write a program that displays a string in reverse order
//should read input from the keyboard
//need to use the strlen string function

// --> const char string[]
//     -->find the length: strlen()
//     -->start from the end of the string and assign values to another variable
//     -->return other variable

//Write a program that sorts the strings of an array using bubble sort
//need to use the strcmp and strcpy functions

// -->

#include <stdio.h>
#include <string.h>

char *reverse(const char str[]);
void *bubbleSort(const int arr[]);

int main()
{
    const char word[] = "This is the word I want to reverse";
    const int arr[] = {1, 2, 4, 6, 5, 6, 7, 2, 5, 7, 7};

    printf("Word: %s\n", word);
    printf("Reversed Word: %s\n", reverse(word));
    bubbleSort(arr);

    return 0;
}

char *reverse(const char str[])
{
    static char result[50];
    int i, strLen;

    strLen = strlen(str);

    for (i = 0; i < strLen; ++i)
    {
        result[i] = str[(strLen - 1) - i];
    }

    return (char *)result;
}

void *bubbleSort(const int arr[])
{
    int temp[25];
    int i, j, n;
    n = strlen(arr);

    for (i = 0; i < n - 1; ++i)
        for (j = 0; j < (n - i - 1); ++j)
            if ((strcmp(arr[j], arr[j + 1])) > 0)
            {
                strncpy(temp, arr[j], sizeof(temp) - 1);
                strncpy(arr[j], arr[j + 1], sizeof(arr[j]) - 1);
                strncpy(arr[j + 1], temp, sizeof(arr[j + 1]) - 1);
            }

    printf("Bubble Sort has completed!");
}
