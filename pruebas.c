#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	//Operadores binarios
	char	c;
	int	bit;

	c = 'a'; //a = 1100001
	bit = 1;
	while (bit < 8)
	{
		if ((c % 2 == 1))
			write(1, &"1", 1);
		else
			write(1, &"0", 1);
		c = c / 2;
		bit++;
	}
	return (0);
}