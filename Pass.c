
#include <stdio.h>

int main() {
    int pass, x=10;

    while (x!=0)
    {
        printf("\nPassword: ");
        scanf("%d",&pass);

    if (pass==12345)
    {
        printf("Correct!");
        x=0;
}
else
{
    printf("Incorrect");
}
printf("\n");
}
    return 0;
}