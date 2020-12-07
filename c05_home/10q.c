#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int **place_queen(int **arr, int x, int y)
{
    int copy_arr[10][10];
    int i;
    int a;
    int b;
    
    //copy_parr = copy_arr[0];
    i = 0;
    while (i < 10 * 10)
    {
        a = i % 10;
        b = i / 10;
        copy_arr[b][a] = parr[b][a];
        i++;
    }
    i = 0;
    while (i < 10)
    {
        if (copy_arr[y][i] == 0)
            copy_arr[y][i] = 1;
        if (copy_arr[i][x] == 0)
            copy_arr[i][x] = 1;
        a = y - x + i;
        b = i;
        if (a >= 0 && a <= 9 && b >= 0 && b <= 9)
        {
            if (copy_arr[a][b] == 0)
                copy_arr[a][b] = 1;
        }
        i++;
    }
    copy_arr[y][x] = 2;
    return (copy_arr);
}

long int sol_int(int parr[][10])
{
    int x;
    int y;
    long int res;

    res = 0;
    x = 0;
    while (x < 10)
    {
        y = 0;
        while (y < 10)
        {
            if (parr[y][x] == 2)
            {
                res *= 10;
                res += y;
                break;
            }
            y++;
        }
        x++;
    }
}

void print_sol(int parr[][10])
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
            if (parr[y][x] == 2)
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

void print_board(int arr[][10])
{
    int i;
    int x;
    int y;
    
    i = 0;
    while (i < 10 * 10)
    {
        x = i % 10;
        y = i / 10;
        if (arr[y][x] == 2)
            write(1, "Q", 1);
        else if (arr[y][x] == 1)
            write(1, "+", 1);
        else
            write(1, ".", 1);
        if (x == 9)
            write(1, "\n", 1);
        i++;
    }

    return ;
}

void q(int arr[][10], int depth)
{
    int i;
    int x;
    int y;
    
    
    if (depth > 9)
    {
        print_sol(arr);
        free(arr);
        return ;
    }
    i = 0;
    while (i < 10 * 10)
    {
        x = i / 10;
        y = i % 10;
        if (arr[y][x] == 0)
        {
            q(place_queen(arr, x, y), depth + 1);
        }
        i++;
    }
    free(arr);
    return ;
}


int main()
{
    int arr[10][10];
    long int i;

    while (i < 10 * 10)
        arr[i / 10][i % 10] = 0;
    i = 0;
    q(arr, 0);
    return (0);
}
