#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 4;
	if (x <= 0)
		return (0);
	char *str = "#include <stdio.h>%c#include <stdlib.h>%c%cint main() {%c\
	int x = %d;%c\
	if (x <= 0)%c\
	return (0);%c\
	char *str = %c%s%c;%c\
	char *filename = NULL;%c\
	char *compile_cmd = NULL;%c\
	char *exec_cmd = NULL;%c\
	FILE *fd;%c%c\
	if (asprintf(&filename, %cSully_%%d.c%c, x - 1) == -1) return (1);%c\
	fd = fopen(filename, %cw%c);%c\
	if (!fd) return (1);%c\
	fprintf(fd, str, 10, 10, 10, 10, x - 1, 10, 10, 10, 34, str, 34, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10);%c\
	fclose(fd);%c%c\
	if (asprintf(&compile_cmd, %cgcc -Wall -Wextra -Werror %%s -o Sully_%%d%c, filename, x - 1) == -1) return (1);%c\
	system(compile_cmd);%c%c\
	if (asprintf(&exec_cmd, %c./Sully_%%d%c, x - 1) == -1) return (1);%c\
	system(exec_cmd);%c%c\
	free(filename);%c\
	free(compile_cmd);%c\
	free(exec_cmd);%c\
	return (0);%c}";
	char *filename = NULL;
	char *compile_cmd = NULL;
	char *exec_cmd = NULL;
	FILE *fd;

	if (asprintf(&filename, "Sully_%d.c", x - 1) == -1) return (1);
	fd = fopen(filename, "w");
	if (!fd) return (1);
	fprintf(fd, str, 10, 10, 10, 10, x - 1, 10, 10, 10, 34, str, 34, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10);
	fclose(fd);

	if (asprintf(&compile_cmd, "gcc -Wall -Wextra -Werror %s -o Sully_%d", filename, x - 1) == -1) return (1);
	system(compile_cmd);

	if (asprintf(&exec_cmd, "./Sully_%d", x - 1) == -1) return (1);
	system(exec_cmd);

	free(filename);
	free(compile_cmd);
	free(exec_cmd);
	return (0);
}