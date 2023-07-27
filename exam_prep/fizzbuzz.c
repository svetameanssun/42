#include <unistd.h>

int main()
{
	char n = '1';
	write(1,&n,1);
	write(1,"\n",1);
	while (n < 10)
	{
		n = n + 1;
		write(1,&n,1);
		write(1,"\n",1);
	}

	return 0;
}
