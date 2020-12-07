#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv)
{
    char *input = argv[1];
    int i = 0;
    int p = 0;
    int n = 0;
    int hints_size = 0;
    int depth;
    int argind = 0;
    int hint;
    int tres;
    
    while (argv[1][i])
    {
        if (argv[1][i] == ' ')
            hints_size++;
        i++;
    }
    if (hits_size % 4 != 3)
        return (0);
    hits_size++;
    depth = hits_size / 4;
    
    int arr[4][depth];
    i = 0;
    while (i < depth * 4)
        *(arr + i) = depth;
    i = 0;
    while (i < depth)
    {
        p = 0;
        while (p < depth)
        {
            hint = argv[1][argind] - 48;
            argint += 2;
            n = 0;
            while (n < depth)
            {
                tres = depth + 1 - hint + n;
                if (arr[n][0] > tres)
                {
                    arr[n][0] = tres;
                }
            }
        }
    }
    
    
    return (0);
}