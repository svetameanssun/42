/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:13:26 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/23 16:42:12 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	str_size;
	int	to_find_size;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	str_size = size(str);
	to_find_size = size(to_find);
	while (i < str_size)
	{
		j = 0;
		while (str[i + j] == to_find[j] && j < to_find_size)
		{
			j++;
		}
		if (j == to_find_size)
		{		
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
