/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:34:14 by emcastil          #+#    #+#             */
/*   Updated: 2024/04/05 11:34:17 by emcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}


void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

void	*duplicate_content(void *content)
{
	if (!content)
		return (NULL);
	
	char *original = (char *)content;
	char *copy = malloc(ft_strlen(original) + 1);
	if (copy != NULL)
	{
		ft_strcpy(copy, original);
	}
	return (copy);
}

void	del_content(void *content)
{
	free(content);
}


int	main(void)
{
	t_list *lst = NULL;
	t_list *result = NULL;

	// Dynamically allocate strings and add them to the list
    char *data1 = ft_strdup("Data1");
    char *data2 = ft_strdup("Data2");

	// Create and add elements to my list
	ft_lstadd_back(&lst, ft_lstnew(data1));
	ft_lstadd_back(&lst, ft_lstnew(data2));

	// Apply ft_lstmap
	result = ft_lstmap(lst, duplicate_content, del_content);

	// Code to print or check the new list 'result'
	print_list(result);

	// Free the lists at the end
	ft_lstclear(&lst, del_content);
	ft_lstclear(&result, del_content);

	return (0);
}

// Test: gcc main.c ft_lstmap_bonus.c ft_lstclear_bonus.c ft_lstnew_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_strlen.c ft_strdup.c -o test_lstmap