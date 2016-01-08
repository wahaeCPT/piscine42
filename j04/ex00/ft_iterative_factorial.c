/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 13:15:38 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/23 12:05:19 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int f;
	int i;

	if (nb >= 0 && nb <= 12)
	{
		f = 1;
		i = 1;
		while (i <= nb)
		{
			f *= i;
			i++;
		}
		return (f);
	}
	else
		return (0);
}