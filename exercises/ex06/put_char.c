
#include <unistd.h>
#include <stdio.h>

void put_char( char c)
{
	write(1, &c, 1);
	//write(1, "\n", 1);
}


int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 1;
		    while(i < argc)
		    {
			int j = 0;
			    while (argv[i][j] != '\0')
			    {
				    put_char(argv[i][j]);
				    j++;
			    }
			    i++;
			write(1, "\n", 1);
		    }
	}
	else
	{
		printf("No se proporcionaron argumanetos.\n");
	}
	return (0);
}

