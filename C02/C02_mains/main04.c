int main(void)
{
char line[6] = "sveta";
char empty_line[1] = "";
char non_line[6] = "svet4";

int a = ft_str_is_lowercase(line);
int b = ft_str_is_lowercase(empty_line);
int c = ft_str_is_lowercase(non_line);

printf("%i, %i, %i", a,b,c);

printf("%s\n", line);
printf("%s\n", empty_line);
return(0);
}
