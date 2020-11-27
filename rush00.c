#include <unistd.h>


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
    			    write(1, "o", 1);
                else
    			    write(1, "|", 1);
            else
                if (a == 0 || a == y - 1)
    			    write(1, "-", 1);
                else
                    write(1, " ", 1);
			b++;
		}
        write(1, "\n", 1);
		a++;
	}

	return ;
} 