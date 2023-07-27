#include <unistd.h>
int  main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1,"a\n",2);
		return 1;
	}
	int i;
	i = 0;
	char *arr = argv[1];
	while(arr[i] != '\0')
	{
		if (arr[i] == 'a')
		{
			write(1,"a\n",2);
			return 1;
		}
		i++;
	}
	write(1,"\n",1);
	return 0;
}
