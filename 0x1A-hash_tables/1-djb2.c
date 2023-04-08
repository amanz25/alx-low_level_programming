/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int c;

	for (h = 5381; (c = *str++); )
		h = ((h << 5) + h) + c;

	return (h);
}
