#include <unistd.h>

char *back_writing(char*str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}

	int j = 0;
	char aux;

	while(j <= i/2)
	{
		aux = str[j];
		str[j] = str[i-j-1];
		str[i-j-1] = aux;
		write(1, &str[j],1);
		j++;
	}
	return (str);
}
int main(void)
{	
	char arr[] = "hello";
	back_writing(arr);
	return 0;
}
