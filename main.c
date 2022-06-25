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

typedef struct {

    uint32_t size;


    int32_t width;
    int32_t height;


    uint16_t color_planes;
    uint16_t color_depth;
    uint32_t compression;


    int32_t horizontal_ppm;
    int32_t vertical_ppm;


    uint32_t color_table;
    uint32_t important_colors;
} info_t;
   extern struct header_t;
    extern struct info_t;

typedef struct {
    uint8_t blue;
    uint8_t green;
    uint8_t red;
} pixel_t;

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
