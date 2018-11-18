#include <stdio.h>
#include <stdlib.h>

int main()
{
int marks=70;

    switch (marks)
    {
    case 95:
    case 90:
    case 89:
    case 86:
        printf("Excellent");
        break;
    case 85:
    case 80:
    case 70:
        printf("very good");
        break;
    case 60:
        printf("good");
        break;
    case 40:
        printf("ok");
        break;
    default:
        printf("grade unavalible");
    }
}
