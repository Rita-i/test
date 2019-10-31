#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    switch (c)
    {
    case '0':
    printf("first 1");break;
    case '1':
    printf("0 2");break;
    case '2':
    printf("1 3");break;
    case '3':
    printf("2 4");break;
    case '4':
    printf("3 5");break;
    case '5':
    printf("4 6");break;
    case '6':
    printf("5 7");break;
    case '7':
    printf("6 8");break;
    case '8':
    printf("7 9");break;
    case '9':
    printf("8 last");break;
    default:printf("error");
    return 0;
    }
}
