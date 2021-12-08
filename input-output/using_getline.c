/*
* Read from stdin one line using getline, a:
*  'nonstandard function that makes it easy to read lines reliably'
*  from: https://www.gnu.org/software/libc/manual/html_node/Line-Input.html
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("please enter a line: ");
    char *lineptr = NULL;
    size_t size;
    getline(&lineptr, &size, stdin);
    printf("You've entered %s", lineptr);
    // remember to free the resource!
    free(lineptr);
}
