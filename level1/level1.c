void	run(void)
{
	fwrite("Good... Wait what?\n", 1, 0x13, stdout);
	system("/bin/sh");
	return;
}

int		main()
{
	char	buf[76];

	gets(buf);
	return 0;
}
