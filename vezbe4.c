#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int jeste_mala_slova(char c) {
    return c >= 'a' && c <= 'z';
}

int main()
{
    char op, c1, c2, c3, c4, c5;
    scanf("%c %c%c%c%c%c", &op, &c1, &c2, &c3, &c4, &c5);
    if(op == 'C') {
        int zbir = 0;
        
        if (isdigit(c1))
            zbir += c1 - '0';
        if (isdigit(c2))
            zbir += c2 - '0';
        if (isdigit(c3)) 
            zbir += c3 - '0';
        if (isdigit(c4))
            zbir += c4 - '0';
        if (isdigit(c5))
            zbir += c5 - '0' ;
        printf("%d\n", zbir);
    } else if (op == 'M') {
        int cnt = 0;
        if (islower(c1))
            cnt++;
        if (islower(c2))
            cnt++;
        if (islower(c3))
            cnt++;
        if (islower(c4))
            cnt++;
        if (islower(c5))
            cnt++;
        printf("%d\n", cnt);
    } else {
        printf("-1");
    }
    return 0;
}


//jebem ti mamu
//ovo je prva izmena

