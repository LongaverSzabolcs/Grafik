    // 2025.03.05
    // Istenigazabol nincsen nekem mar ma energiam ahhoz, hogy ezzel foglalkozzak
    // NOTE TO SELF: nem jo otlet haromkor kelni es munka utan leulni grafikat programozni :d

#include <stdio.h>

typedef struct Cuboid
{
    int a;
    int b;
    int c;
} Cuboid;


int main() {
    
    Cuboid cub;
    // engedjuk el
    Cuboid* othercub = cub;
    
    int volume = calc_volume(cub);
    int surface = calc_surface(cub);

    set_size(3, 4, 5, cub);
    

    printf("Volume: %d", &volume);
    printf("Surface: %d\n", &surface);
    return 0;
}

// pointer kell ide, hogy modosuljon a struktban az adat
void set_size(int a, int b, int c, Cuboid* cub) {
    
    if (a <= 0 || b <= 0 || c <= 0) printf("ERROR: Invalid value\n");
    else {
        cub->a = a;
        cub->b = b;
        cub->c = c;
    }
}

int calc_volume(Cuboid cub) {
    return cub.a * cub.b * cub.c;
}

int calc_surface(Cuboid cub) {
    int surface = 2 * ( cub.a * cub.b + cub.a * cub.c + cub.c * cub.b );
    return surface;
}

int does_it_have_a_square_face(Cuboid cub) {
    if (cub.a == cub.b || cub.a == cub.c || cub.b == cub.c) return 0;
    else return -1;
}