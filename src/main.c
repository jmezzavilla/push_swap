/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:23:15 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/23 18:20:28 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
    
int partition(int items[], int left, int right)
{
    int pivot = items[right];
    int i = left - 1;
    int j = left;

    while (j <= right - 1)
    {
        if(items[j] <= pivot)
        {
            i++;
            ft_swap(&items[j] , &items[i]);
        }
        j++;
        
    }
    ft_swap(&items[i + 1], &items[right]);
    return (i + 1);    
}

void quick_sort(int items[], int left, int right)
{
    if (left < right) {
        int pivot = partition(items, left, right);
        quick_sort(items,left, pivot - 1);
        quick_sort(items,pivot + 1, right);
    }
}

void exemple_quicksort(int ac, char **av)
{
    if(ac < 0)
        ft_printf("%d, %s",ac, av[1]);
    char **splited = ft_split(av[1], ' ');
    int itens[100];
    int i = 0;

    while (splited[i])
    {
        itens[i] = ft_atoi(splited[i]);
        i++;
    }
    
    

    printf("Array antes da ordenação:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", itens[j]);
    }
    printf("\n");

    quick_sort(itens,0,i-1);

    printf("Array após a ordenação (Quicksort):\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", itens[j]);
    }
    printf("\n");
}

t_list *array_to_list()
{
    t_list * lst = NULL;
    int arry[] = {3,2,1};
    int i = 0;
    while(i < 3)
    {
        if(lst == NULL)
            lst = ft_lstnew(arry[i]);
        else
            ft_lstadd_back(&lst,ft_lstnew(arry[i]));
        i++;
    }
    return lst;
}
t_list *two_numbers(t_list *lst)
{  
    swap_stack(lst, "sa");
    return lst;
}
t_list *three_numbers(t_list *lst)
{
    if (lst->content > lst->next->content)
	{
        if(lst->next->next->content > lst->next->content && lst->next->next->content > lst->content)
            swap_stack(lst, "sa");
        else if(lst->next->next->content > lst->next->content && lst->content >lst->next->next->content)
            lst = swift_element_stack(lst,"ra");
        else if(lst->next->content > lst->next->next->content && lst->content > lst->next->next->content)
        {
            swap_stack(lst, "sa");
            lst = swift_element_stack(lst,"ra");
        }
    }
        
    
    return lst;
}
int main(int ac, char **av)
{
    t_list *list_a;
    t_list *list_b;

    list_a = NULL;
    list_b = NULL;

    list_a = array_to_list();

    list_a = three_numbers(list_a);

    while(list_a)
    {
        ft_printf("%d", list_a->content);
        list_a = list_a->next;
    }
}
