/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaarandas <hlaarandas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:48:52 by hlaarandas          #+#    #+#             */
/*   Updated: 2021/12/02 16:51:11 by hlaarandas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION :
	The function ft_lstlast finds the last node in a given list.

	RETURN VALUE :
	The last node of a list.
		[.]->[.]->[.]->[LAST]->[NULL]
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
