/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:35:22 by scilla            #+#    #+#             */
/*   Updated: 2020/12/07 17:50:36 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int res;
	
	if (nb < 0)
		return (0);
	res = 1;
	while (nb)
		res *= nb--;
	return (res);
}

int main()
{
	printf("%d", ft_iterative_factorial(12));
}
