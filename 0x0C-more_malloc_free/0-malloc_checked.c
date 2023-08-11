void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
