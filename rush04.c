/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:23:36 by mflores-          #+#    #+#             */
/*   Updated: 2022/02/05 16:05:30 by mflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && i > 1 && j > 1))
				ft_putchar('A');
			else if ((i == y && j == 1) || (i == 1 && j == x))
				ft_putchar('C');
			else if (j == 1 || j == x || i == 1 || i == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 1;
	}
}
