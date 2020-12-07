/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 20:03:14 by scilla            #+#    #+#             */
/*   Updated: 2020/12/07 20:25:55 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;
	int incr;

	i = 0;
	while (i * i < nb)
	{
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}

int main(void)
{
	printf("%d", ft_sqrt(900));
}
