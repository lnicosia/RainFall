#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

void p(void)
{
	uint32_t ret;
	char local_50 [76];

	fflush(stdout);
	gets(local_50);
	ret = $eip;
	if ((ret & 0xb0000000) == 0xb0000000) {
		printf("(%p)\n", ret);
		/* WARNING: Subroutine does not return */
		_exit(1);
	}
	puts(local_50);
	strdup(local_50);
	return;
}

void main(void)

{
	p();
	return;
}

