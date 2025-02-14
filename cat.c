#include <stdio.h>
#include <stdlib.h>

void cat_draw() {
    system("clear");
    
    char name[] = "###################\n";
    char name2[] ="#                 #\n";
    char name3[] ="# Code by Maspren #\n";
    char name4[] ="###################\n\n";

    char *cat[] = {
        "   |\\---/|\n",
        "   | ,_, |\n",
        "    \\_`_/-..----.\n",
        " ___/ `   ' ,""+ ''\n",
        "(__...'   __\\    |`.___.';\n",
        "  (_,...'(_,.`__)/'.....+ \n"
    };
    
    printf("%s%s%s%s", name, name2, name3, name4);

    for (int i = 0; i < 6; i++) {
        printf("%s", cat[i]);
    }
}

void sys_clear() {
    for (int i = 0; i <= 10; i++)
    {
        system("sync; echo 3 > /proc/sys/vm/drop_caches");
    }
    system("free -h");
    printf("\n----- Memory Cleared -------\n");
}

int main() {
    cat_draw();
    sys_clear();
    return 0;
}