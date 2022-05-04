#include <stdio.h>
#include <string.h>
void strn_cpy(char *str)
{
    int n;
    char str1[strlen(str)];
    printf("Enter value of n to copy first n character: \n");
    scanf("%d", &n);
    strncpy(str1, str, n);
    str1[n] = '\0';
    printf("After using strncpy, copied string is: %s", str1);
    printf("\n");
}
void str_cat(char *str)
{
    char str1[100];
    printf("Enter new string: \n");
    fflush(stdin);
    scanf("%[^\n]%*c", &str1);
    printf("After using strcat new string: %s", strcat(str, str1));
    printf("\n");
}
void strn_cat(char *str)
{
    int n;
    char str1[100];
    printf("Enter new string: \n");
    fflush(stdin);
    scanf("%[^\n]%*c", &str1);
    printf("Enter value of n to which want to join new string: \n");
    scanf("%d", &n);
    if (strlen(str1) >= n)
    {
        printf("After using strncat new string is: %s", strncat(str, str1, n));
        printf("\n");
    }
    else
        printf("ERROR: value of n should be <= size of string \n");
}
void str_cmp(char *str)
{
    char str1[100];
    printf("Enter a string: \n");
    fflush(stdin);
    scanf("%[^\n]%*c", &str1);
    printf("Return value = %d \n", strcmp(str, str1));
}
void str_tok(char *str)
{
    printf("String is: %s \n", str);
    printf("After using strtok, splitted string is: \n");
    char *token = strtok(str, " ");
    while (token != NULL)
    {
        printf(" %s\n", token);
        token = strtok(NULL, " ");
    }
}
int main()
{
    int opt;
    do
    {
        char str[100];
        printf("Enter your choice to use: \n");
        printf("1: strncpy() \n");
        printf("2: strcat() \n");
        printf("3: strncat() \n");
        printf("4: strcmp() \n");
        printf("5: strtok() \n");
        printf("6: To exit \n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("Enter a string: \n");
            fflush(stdin);
            scanf("%[^\n]%*c", &str);
            strn_cpy(str);
            break;
        case 2:
            printf("Enter a string: \n");
            fflush(stdin);
            scanf("%[^\n]%*c", &str);
            str_cat(str);
            break;
        case 3:
            printf("Enter a string: \n");
            fflush(stdin);
            scanf("%[^\n]%*c", &str);
            strn_cat(str);
            break;
        case 4:
            printf("Enter a string: \n");
            fflush(stdin);
            scanf("%[^\n]%*c", &str);
            str_cmp(str);
            break;
        case 5:
            printf("Enter a string: \n");
            fflush(stdin);
            scanf("%[^\n]%*c", &str);
            str_tok(str);
            break;
        }
    } while (opt != 6);

    return 0;
}
