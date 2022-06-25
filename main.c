#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

typedef struct {

    char signature[2];


    uint32_t size;


    uint16_t reservedA;
    uint16_t reservedB;


    uint32_t data_offset;
} header_t;


int main(){

    FILE* p_bmp = fopen("test.bmp", "rb");


    header_t header;
    info_t info;

    fread(&header, 14, 1, p_bmp);
    fread(&info, 40, 1, p_bmp);

    while(1){
        pixel_t pixel;
        if(fread(&pixel, 3, 1, p_bmp) == 0) break;

    }


    return 0;
}
