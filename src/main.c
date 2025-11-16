#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/help.h"
#include "include/version.h"

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
                puts("Hello, Template!");
        }
        else
                return 1;

        return 0;
}
