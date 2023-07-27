/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:21:01 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/25 16:13:40 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sign(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	sign = ft_sign(str, &i);
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	res *= sign;
	return (res);
}
/*int   main(void)
{
    printf("%d", ft_atoi(" -----+238"));
}*/
