#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    float x1, y1, x2, y2, x, y;
    // Index za imeKvadranta
    int kvadrant = 0;
    char imeKvadranta[4] = "ABCD";
    
    printf("Unesi tocku dolnjeg lijevog kuta pravokutnika");
    scanf("%f %f", &x1, &y1);

    printf("Unesi tocku gornjeg desnog kuta pravokutnika");
    scanf("%f %f", &x2, &y2);

    printf("Unesi tocku evaluacije");
    scanf("%f %f", &x, &y);
    if ((x < x1 || x > x2) || (y < y1 || y > y2)) {
        printf("Nije u kvadrantu");
        return 0;
    }
    if (abs(y1 - y) < abs(y2 - y)) {
        kvadrant = kvadrant + 2;
    }
    if (abs(x1 - x) > abs(x2 - x)) {
        kvadrant = kvadrant + 1;
    }
    printf("Tocka se nalazi u %c. kvadrantu", imeKvadranta[kvadrant]);
    return 0;
}