#include <stdio.h>

char	capital(char c)
{
	char	aux1;

	if (c >= 'a' && c <= 'z')
	{
		aux1 = c;
		c = aux1 - 32;
	}
	return (c);
}

char	decapital(char c)
{
	char	aux2;

	if (c >= 'A' && c <= 'Z')
	{
		aux2 = c;
		c = aux2 + 32;
	}
	return (c);
}

char	*decapital_str(char *str)
{
	int		i;
	char	aux;

	i = 1;
	aux = 0;
	while (str[i] != '\0')
	{
		aux = decapital(str[i]);
		str[i] = aux;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	aux;

	i = 1;
	aux = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		aux = capital(str[0]);
		str[0] = aux;
	}
	str = decapital_str(str);
	while (str[i] != '\0')
	{
		if (((str[i] >= 123 && str[i] <= 126)
				|| (str[i] >= 32 && str[i] <= 47)
				|| (str[i] >= 58 && str[i] <= 64)
				|| (str[i + 1] >= 91 && str[i + 1] <= 95)))
		{
			aux = capital(str[i + 1]);
			str[i + 1] = aux;
		}
		i++;
	}
	return (str);
}

int main()
{

	char line[60] = "first, ALL?CAPITAL, all_small, sTRanGE(eXAmple! 42/o/k";
	printf("%s\n", line);
	printf("%s", ft_strcapitalize(line));
	return 0;
}
