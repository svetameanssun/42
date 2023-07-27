#include <unistd.h>
#include <stdlib.h>
int str_len(char *str)
{
	int  i = 0;
	while(str[i] != '\0')
	{
		i++;
	}

	return (i);
}


int main(int argc, char *argv[])
{
	int size = str_len(argv[1]);
	size++;
	int i = 0;
	array = argv[1];
	while(*(array +i) != '\0')
	{
		write(1,array +i,1);
		i++;
	}
	

	char *dup = malloc (sizeof(char) * size);
	i=0;
	while (i < size)
	{
		dup[i] = array[i];
		i++;
	}

	return 0;
}


