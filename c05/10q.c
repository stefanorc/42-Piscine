#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *place_queen(int *arr, int x, int y)
{
    int *copy_arr;
    int i;
    int a;
    int b;

    copy_arr = malloc(10 * 10 * sizeof(int));

    i = 0;
    while (i < 10 * 10)
    {
        copy_arr[i] = arr[i];
        i++;
    }
    i = 0;
    while (i < 10)
    {
        if (copy_arr[y * 10 + i] == 0)
            copy_arr[y * 10 + i] = 1;
        if (copy_arr[i * 10 + x] == 0)
            copy_arr[i * 10 + x] = 1;
        a = y - x + i;
        b = i;
        if (a >= 0 && a <= 9 && b >= 0 && b <= 9)
        {
            if (copy_arr[a * 10 + b] == 0)
                copy_arr[a * 10 + b] = 1;
        }
        i++;
    }
    copy_arr[y * 10 + x] = 2;
    return (copy_arr);
}

void print_sol(int *arr)
{
    int x;
    int y;
    char c;


    x = 0;
    while (x < 10)
    {
        y = 0;
        while (y < 10)
        {
            if (arr[y * 10 + x] == 2)
            {
                c = y + 48;
                write(1, &c, 1);
                break;
            }
            y++;
            if (y > 9)
                write(1, ".", 1);
        }
        x++;
    }
    write(1, "\n", 1);
}

void print_board(int *arr)
{
    int i;
    int x;
    int y;

    while (i < 10 * 10)
    {
        x = i % 10;
        y = i / 10;
        if (arr[y * 10 + x] == 2)
            write(1, "Q", 1);
        else
            write(1, "+", 1);
        if (x == 9)
            write(1, "\n", 1);
        i++;
    }

    return ;
}

void q(int *arr, int depth)
{
    int i;
    //printf("%d\n", depth);
    //print_arr(arr);
    if (depth == 10)
    {
        print_sol(arr);
        return ;
    }
    i = 0;
    while (i < 10 * 10)
    {
        if (arr[i] == 0)
        {
            q(place_queen(arr, i % 10, i / 10), depth + 1);
        }
        i++;
    }
    free(arr);
    return ;
}


int main()
{
    int *arr;
    long int i;
    //int *hits;

    //hits = malloc(10000000000 * sizeof(int));
    arr = malloc(10 * 10 * sizeof(int));

    while (i < 10 * 10)
        arr[i++] = 0;
    i = 0;
    //while (i < 10000000000)
    //    hits[i++] = 0;

    q(arr, 0);
    return (0);
}
