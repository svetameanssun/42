int main()
{

	char line[60] = "first, ALL_CAPITAL, all-small, sTRanGE+eXAmple! 42ok";
	printf("%s\n", line);
	printf("%s", ft_strcapitalize(line));
	return 0;
}
