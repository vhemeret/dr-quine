#include <stdio.h>

/* comment outsid main function */

void print(){
	char *str = "#include <stdio.h>%c%c/* comment outside main function */%c%cvoid print(){%c%cchar *str = %c%s%c;%c%cprintf(str, 10, 10, 10, 10, 10, 9, 34, str, 34, 10, 9, 10, 10, 10, 10, 9, 10, 9, 10);%c}%c%cint main() {%c%c/* comment inside main function */%c%cprint();%c}";
	printf(str, 10, 10, 10, 10, 10, 9, 34, str, 34, 10, 9, 10, 10, 10, 10, 9, 10, 9, 10);
}

int main() {
	/* comment inside main function */
	print();
}