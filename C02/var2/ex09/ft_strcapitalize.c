/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:05:22 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/19 16:12:33 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	i = 1;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
			*(str + i) += 32;
		if (!ft_is_alphanumeric(*(str + i - 1)))
		{
			if (*(str + i) >= 'a' && *(str + i) <= 'z')
				*(str + i) -= 32;
		}
		i++;
	}
	return (str);
}
