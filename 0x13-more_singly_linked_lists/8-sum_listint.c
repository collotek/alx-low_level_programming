#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: beginning of the list pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
