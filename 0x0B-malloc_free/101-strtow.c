#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
    int word_count = 0;
    int in_word = 0; /* Flag to check if currently in a word */

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            in_word = 0; /* Not in a word */
        }
        else if (in_word == 0)
        {
            word_count++;
            in_word = 1; /* In a word */
        }
    }

    return word_count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings or NULL on failure.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

    int word_count = count_words(str);
    char **result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (result == NULL)
    {
        return NULL;
    }

    int i = 0;
    int j, word_length = 0;

    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            if (word_length > 0)
            {
                result[i] = (char *)malloc((word_length + 1) * sizeof(char));
                if (result[i] == NULL)
                {
                    for (int k = 0; k < i; k++)
                    {
                        free(result[k]);
                    }
                    free(result);
                    return NULL;
                }

                for (j = 0; j < word_length; j++)
                {
                    result[i][j] = str[j - word_length];
                }
                result[i][j] = '\0';
                i++;
                word_length = 0;
            }
        }
        else
        {
            word_length++;
        }

        str++;
    }

    result[i] = NULL;
    return result;
}
