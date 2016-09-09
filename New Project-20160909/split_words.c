#include <stdlib.h>

int is_white_space(char *str) //not tested
{
    char *whites = "\n\t ";
    while(*whites)
    {
        if(*str==*whites)
            return 1;
        whites++;
    }
    return 0;
}

int nr_words(char *str) // not tested
{
    int nr;
    int found;

    nr = 0;
    found =0;
    while(*str)
    {
        while(is_white_space(str))
        str++;
        if (*str == '\0')
            return nr;
        while(!is_white_space(str))
        {
            found = 1;
            str++;
        }
        if(found)
        {
            nr++;
            found = 0;
        }
        str++;
    }
    return nr;
}

int word_length(char* str) //len
{
    int len;
    len = 0;
    while(!is_white_space(str) && *str)
    {
        len++;
        str++;
    }
    return len;
}

void put_words_in_arr(char** arr, char *str)
{
    int size;
    int i;
    int j;
    
    j = 0;
    i = 0;
    while (*str)
    {
        while(is_white_space(str))
            str++;
        if (!*str)
            return ;
        if(!is_white_space(str))
        {
            j = 0;
            size = word_length(str);
            arr[i] = (char*)malloc((size+1)*sizeof(char));
            while(j<size)
            {
                arr[i][j] = *str;
                j++;
                str++;
            }
            arr[i][j] = '\0';
            i++;
        }
        str++;
    }
    arr[i] = malloc(sizeof(char));
    arr[i][0]='\0';
    
}

char **ft_split_whitespaces(char *str)
{
    char **arr;
    arr = (char**)malloc((nr_words(str)+1) * sizeof(char*));
    put_words_in_arr(arr, str);
    return arr;
}