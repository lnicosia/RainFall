#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char** av)
{
	int nb = atoi(av[1]);
	if (nb != 423)
	{
		fwrite("No !\n", 1, 5, stderr);
	}
	char* str = strdup("/bin/sh");
	char* next = str + sizeof(char*);
	gid_t group = getegid();
	uid_t user = geteuid();
	setresgid(group, group, group);
	setresuid(user, user, user);
	execv("/bin/sh", &str);
}
