int main()
{
	char str[] = "123";
	printf("%s\n", str);
	str[2]=0;
	printf("%s\n", str);
	printf("%d\n", *(int *)str);
	printf("%p\n", 12849);

	return 0;
}
