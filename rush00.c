/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:14:03 by mflores-          #+#    #+#             */
/*   Updated: 2022/02/06 11:29:39 by mflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	j;
	int	i;

	j = 1;
	i = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == 1 && j == x))
				ft_putchar('o');
			else if ((i == y && j == 1) || (i == y && j == x))
				ft_putchar('o');
			else if (j == x || j == 1)
				ft_putchar('|');
			else if (i == 1 || i == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 1;
	}
}
