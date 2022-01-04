/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drunkbatya <drunkbatya.js@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:19:28 by drunkbaty         #+#    #+#             */
/*   Updated: 2022/01/04 17:29:45 by drunkbaty        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	db_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
