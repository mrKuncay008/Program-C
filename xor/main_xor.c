#include <stdio.h>
#include <string.h>

char *xor_locgic(char *s, char *t) {
    char *result[] = {""};

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == t[i]) {
            result[i] += '0';
        } else {
            result[i] += '1';
        }
    }
    result[strlen(s)] = '\0';
}

int main() {
    char s[100], t[100];

    scanf("%s", s);
    scanf("%s", t);

    xor_locgic(s, t);
    return 0;

}