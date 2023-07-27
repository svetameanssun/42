#include <unistd.h>

int str_len(char *str)
{
	int i = 0;
	 
	while(*(str+i) != '\0') 
		i++;
 	return(i);
}



int main(int argc, char **argv)
{
	if(argc > 2)
	{
		write(1,"mas de una palabra", 18);
	}

	char *array = argv[1];
	int i = 0;
	while(argv[1][i] != '\0')
	{
		write(1, &argv[1][i],1);
		i++;
	}
	return 0;
}
