/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:59:29 by trandria          #+#    #+#             */
/*   Updated: 2022/02/06 11:24:49 by trandria         ###   ########.fr       */
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
			if ((i == 1 && j == 1) || (j == 1 && i == y))
				ft_putchar('A');
			else if ((j == x && i == 1) || (i == y && j == x))
				ft_putchar('C');
			else if ((j == 1 || j == x) || (i == 1 || i == y))
				ft_putchar('B');
			else
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 1;
	}
}
