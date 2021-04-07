
#include <stdio.h>

int main(){
    int x, y, z;
    x = y = 10;
    z = (x++);
    x = -x;
    y++;
    x = x + y -(z--);

    printf("%i\n", x);
    printf("%i\n", y);
    printf("%i\n", z);
    
    return 0;
}





