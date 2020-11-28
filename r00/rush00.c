#include <unistd.h>
#include "ft_putchar.c"


void rush(int x, int y)
{
	int	a;
	int b;

	a = 0;
	
	while (a < y)
	{
	    b = 0;
		while (b < x)
		{
            if (b == 0 || b == x - 1)
                if (a == 0 || a == y - 1)
    			    ft_putchar("o"*);
                else
    			    ft_putchar("|"*);
            else
                if (a == 0 || a == y - 1)
    			    ft_putchar("-"*);
                else
                    ft_putchar(" "*);
			b++;
		}
        ft_putchar("\n");
		a++;
	}

	return ;
} 