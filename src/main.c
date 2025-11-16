#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/help.h"
#include "include/version.h"

#define TEXT "Neque porro quisquam est qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit..."

int main(int argc, char *argv[])
{
        int opt;
        int preview = 0;
        int new_line = 0;

        while ((opt = getopt(argc, argv, "vhn")) != -1) {
                switch (opt) {
                        case 'v':
                                version();
                                preview = 1;
                                break;
                        case 'h':
                                help();
                                preview = 1;
                                break;
                        case 'n':
                                new_line = 1;
                                break;
                }
        }

        if (!preview) {
                if (new_line == 1) {
                        puts(TEXT);
                }
                else {
                        printf("%s", TEXT);
                }
        }
        else
                return 0;

        return 0;
}
