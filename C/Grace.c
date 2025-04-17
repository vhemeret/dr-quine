/* The alone comment */
#include <stdio.h>

#define PRINT(fd) {char *str = "/* The alone comment */%c#include <stdio.h>%c%c#define PRINT(fd) {char *str = %c%s%c; fprintf(fd, str, 10, 10, 10, 34, str, 34, 10, 34, 34, 34, 34, 10, 10);}%c#define START() int main(void){FILE *fd = fopen(%cGrace_kid.c%c, %cw%c); if (!fd) return 1; PRINT(fd); fclose(fd); return 0;}%c%cSTART()"; fprintf(fd, str, 10, 10, 10, 34, str, 34, 10, 34, 34, 34, 34, 10, 10);}
#define START() int main(void){FILE *fd = fopen("Grace_kid.c", "w"); if (!fd) return 1; PRINT(fd); fclose(fd); return 0;}

START()