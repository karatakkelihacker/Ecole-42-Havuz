#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = s2[i];
    return s1;
}

int main()
{
    char s1[] = "karapara";
    char s2[] = "sarı";

    printf("%s", ft_strcpy(s1, s2));
}