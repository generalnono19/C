#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int x = get_int("x :");
    int y = get_int("y:");

    if (x > y)
    {
        printf("x i bigger than y\n");
    }
    else if (x < y)
    {
        printf("x is smaller than y\n");
    }
    else
    {
        printf("x is equel y\n");
    }
}