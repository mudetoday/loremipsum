#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/help.h"
#include "include/version.h"

#define TEXT "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."

int main(int argc, char *argv[])
{
        int opt;
        int preview = 0;

        while ((opt = getopt(argc, argv, "vh")) != -1) {
                switch (opt) {
                        case 'v':
                                version();
                                preview = 1;
                                break;
                        case 'h':
                                help();
                                preview = 1;
                                break;
                }
        }

        if (!preview) {
                puts(TEXT);
        }
        else
                return 0;

        return 0;
}
