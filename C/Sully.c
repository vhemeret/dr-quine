#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 5;
	if (x <= 0) return (0);
	char *str = "#include <stdio.h>%c#include <stdlib.h>%c%cint main() {%c%cint x = %d;%c%cif (x <= 0) return (0);%c%cchar *str = %c%s%c;%c%cchar *filename = NULL;%c%cchar *compile_cmd = NULL;%c%cchar *exec_cmd = NULL;%c%cFILE *fd;%c%c%cif (asprintf(&filename, %cSully_%%d.c%c, x - 1) == -1) return (1);%c%cfd = fopen(filename, %cw%c);%c%cif (!fd) return (1);%c%cfprintf(fd, str, 10, 10, 10, 10, 9, x - 1, 10, 9, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 10, 9, 34, 34, 10, 9, 10, 10, 9, 34, 34, 10, 9, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10);%c%cfclose(fd);%c%c%cif (asprintf(&compile_cmd, %cgcc -Wall -Wextra -Werror %%s -o Sully_%%d%c, filename, x - 1) == -1) return (1);%c%csystem(compile_cmd);%c%c%cif (asprintf(&exec_cmd, %c./Sully_%%d%c, x - 1) == -1) return (1);%c%csystem(exec_cmd);%c%c%cfree(filename);%c%cfree(compile_cmd);%c%cfree(exec_cmd);%c%creturn (0);%c}";
	char *filename = NULL;
	char *compile_cmd = NULL;
	char *exec_cmd = NULL;
	FILE *fd;

	if (asprintf(&filename, "Sully_%d.c", x - 1) == -1) return (1);
	fd = fopen(filename, "w");
	if (!fd) return (1);
	fprintf(fd, str, 10, 10, 10, 10, 9, x - 1, 10, 9, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 10, 9, 34, 34, 10, 9, 10, 10, 9, 34, 34, 10, 9, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10);
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