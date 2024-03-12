#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	int	open_file;
	char	*buffer;

	buffer = (char *)malloc(sizeof(char) * 1024);
	open_file = open("main.c", O_RDONLY);

	read(open_file, buffer, 1024);
	
	printf("%s", buffer);
	close(open_file);
}
