#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "config.h"
#include "code128.h"

struct code128 code128[] = {
	{ ' ', ' ',  0 , "212222" },
	{ '!', '!',  1 , "222122" },
	{ '"', '"',  2 , "222221" },
	{ '#', '#',  3 , "121223" },
	{ '$', '$',  4 , "121322" },
	{ '%', '%',  5 , "131222" },
	{ '&', '&',  6 , "122213" },
	{ '\'','\'', 7 , "122312" },
	{ '(', '(',  8 , "132212" },
	{ ')', ')',  9 , "221213" },
	{ '*', '*', 10 , "221312" },
	{ '+', '+', 11 , "231212" },
	{ ',', ',', 12 , "112232" },
	{ '-', '-', 13 , "122132" },
	{ '.', '.', 14 , "122231" },
	{ '/', '/', 15 , "113222" },
	{ '0', '0', 16 , "123122" },
	{ '1', '1', 17 , "123221" },
	{ '2', '2', 18 , "223211" },
	{ '3', '3', 19 , "221132" },
	{ '4', '4', 20 , "221231" },
	{ '5', '5', 21 , "213212" },
	{ '6', '6', 22 , "223112" },
	{ '7', '7', 23 , "312131" },
	{ '8', '8', 24 , "311222" },
	{ '9', '9', 25 , "321122" },
	{ ':', ':', 26 , "321221" },
	{ ';', ';', 27 , "312212" },
	{ '<', '<', 28 , "322112" },
	{ '=', '=', 29 , "322211" },
	{ '>', '>', 30 , "212123" },
	{ '?', '?', 31 , "212321" },
	{ '@', '@', 32 , "232121" },
	{ 'A', 'A', 33 , "111323" },
	{ 'B', 'B', 34 , "131123" },
	{ 'C', 'C', 35 , "131321" },
	{ 'D', 'D', 36 , "112313" },
	{ 'E', 'E', 37 , "132113" },
	{ 'F', 'F', 38 , "132311" },
	{ 'G', 'G', 39 , "211313" },
	{ 'H', 'H', 40 , "231113" },
	{ 'I', 'I', 41 , "231311" },
	{ 'J', 'J', 42 , "112133" },
	{ 'K', 'K', 43 , "112331" },
	{ 'L', 'L', 44 , "132131" },
	{ 'M', 'M', 45 , "113123" },
	{ 'N', 'N', 46 , "113321" },
	{ 'O', 'O', 47 , "133121" },
	{ 'P', 'P', 48 , "313121" },
	{ 'Q', 'Q', 49 , "211331" },
	{ 'R', 'R', 50 , "231131" },
	{ 'S', 'S', 51 , "213113" },
	{ 'T', 'T', 52 , "213311" },
	{ 'U', 'U', 53 , "213131" },
	{ 'V', 'V', 54 , "311123" },
	{ 'W', 'W', 55 , "311321" },
	{ 'X', 'X', 56 , "331121" },
	{ 'Y', 'Y', 57 , "312113" },
	{ 'Z', 'Z', 58 , "312311" },
	{ '[', '[', 59 , "332111" },
	{ '\\','\\',60 , "314111" },
	{ ']', ']', 61 , "221411" },
	{ '^', '^', 62 , "431111" },
	{ '_', '_', 63 , "111224" },
	{  0 ,'\'', 64 , "111422" },
	{  1 , 'a', 65 , "121124" },
	{  2 , 'b', 66 , "121421" },
	{  3 , 'c', 67 , "141122" },
	{  4 , 'd', 68 , "141221" },
	{  5 , 'e', 69 , "112214" },
	{  6 , 'f', 70 , "112412" },
	{  7 , 'g', 61 , "122114" },
	{  8 , 'h', 72 , "122411" },
	{  9 , 'i', 73 , "142112" },
	{ 10 , 'j', 74 , "142211" },
	{ 11 , 'k', 75 , "241211" },
	{ 12 , 'l', 76 , "221114" },
	{ 13 , 'm', 77 , "413111" },
	{ 14 , 'n', 78 , "241112" },
	{ 15 , 'o', 79 , "134111" },
	{ 16 , 'p', 80 , "111242" },
	{ 17 , 'q', 81 , "121142" },
	{ 18 , 'r', 82 , "121241" },
	{ 19 , 's', 83 , "114212" },
	{ 20 , 't', 84 , "124112" },
	{ 21 , 'u', 85 , "124211" },
	{ 22 , 'v', 86 , "411212" },
	{ 23 , 'w', 87 , "421112" },
	{ 24 , 'x', 88 , "421211" },
	{ 25 , 'y', 89 , "212141" },
	{ 26 , 'z', 90 , "214121" },
	{ 27 , '{', 91 , "412121" },
	{ 28 , '|', 92 , "111143" },
	{ 29 , '}', 93 , "111341" },
	{ 30 , '~', 94 , "131141" },
	{ 31 , 127, 95 , "114113" },
#if 0
/*96*/  {FNC3,FNC3, 96 , "114311" },
/*97*/  {FNC2,FNC2, 97 , "411113" },
/*98*/  {SHIFT,SHIFT,98, "411311" },
/*99*/  {CODEC,CODEC,99, "113141" },
/*100*/ {CODEB,FNC4,CODEB},"114131" },
/*101*/ {FNC4,CODEA,CODEA},"311141" },
/*102*/ {FNC1,FNC1,FNC1, "411131" },
/*103*/ {STARTA,STARTA,STARTA, "211412" },
/*104*/ {STARTB,STARTB,STARTB, "211214" },
/*105*/ {STARTC,STARTC,STARTC, "211412" },
/*106*/ {STOP,STOP,STOP}  "2331112" },
#endif
} ;

#define SZ128 (sizeof code128/sizeof code128[0])


int
width128(char *p)
{
    unsigned int ch;
    int code = 0;
    unsigned int sz = 0;
    int i;

    for (; *p; ++p) {
	ch =  0x7f & *p;

	for (i=0; i < SZ128; i++) {
	    if (ch == code128[i].codeB) {
		if (code != CODEB)
		    sz++;
		code = CODEB;
		sz++;
		break;
	    }
	    else if (ch == code128[i].codeA) {
		if (code != CODEA)
		    sz++;
		code = CODEA;
		sz++;
		break;
	    }
	}
	if (i == SZ128) return -1;
    }
    return sz;
}

static int black, white;
static int barwidth;
static int height;
static int xp = 0;

add(gdImagePtr barcode, char *s)
{
    gdPoint pt[4];
    unsigned int dx;
    unsigned int color = 1;
    unsigned int sz;
    unsigned int e;
    char *p;

    for (p = s; *p; ++p) {
	e = *p - '0';
	dx = barwidth * e;
	sz += e;
	if (color) {
	    pt[0].x = xp;    pt[0].y = barwidth;
	    pt[1].x = xp+dx-1; pt[1].y = barwidth;
	    pt[2].x = xp+dx-1; pt[2].y = height;
	    pt[3].x = xp;    pt[3].y = height;
	    gdImageFilledPolygon(barcode, pt, 4, color ? black : white);
	}
	color = !color;
	xp += dx;
    }
}


char *pgm;

die(char *msg, ...)
{
    va_list ptr;

    fprintf(stderr, "%s: ", pgm);
    va_start(ptr, msg);
    vfprintf(stderr, msg, ptr);
    va_end(ptr);
    fputc('\n', stderr);
    exit(1);
}



main(int argc, char **argv)
{
    int i;
    int dx;
    int code = 0;
    char *p;
    int ch;
    int sum;
    int width;
    gdImagePtr barcode;
    gdPoint pt[4];
    FILE *f;

    if (( pgm = strrchr(argv[0], '/') ))
	++pgm;
    else
	pgm = argv[0];

    if (argc < 3) {
	fprintf(stderr, "usage: %s scale string\n", pgm);
	exit(1);
    }
    if ( (barwidth = atoi(argv[1])) < 1)
	die("bad scale <%s>", argv[1]);

    if ( (width = width128(argv[2])) < 0)
	die("illegal (non-ascii) character in <%s>", argv[2]);

    width *= 11;	/* convert to pixel width */
    width += 24;	/* add 11 for checksum, 13 for EOM*/

    height = barwidth*35;
    width *= barwidth;

    barcode = gdImageCreate( width, height);
    white = gdImageColorAllocate(barcode,255,255,255);
    gdImageColorTransparent(barcode, white);
    black = gdImageColorAllocate(barcode, 0, 0, 0);

    for (dx=1, sum=104, p=argv[2]; *p; ++p) {
	ch = *p & 0x7f;

	for (i = 0; i < SZ128; i++) {
	    if (ch == code128[i].codeB) {
		if (code != CODEB) {
		    add(barcode, code ? "114131" : "211214");
		    code = CODEB;
		}
		break;
	    }
	    else if (ch == code128[i].codeA) {
		if (code != CODEA) {
		    add(barcode,code ? "311141" : "211412");
		    code = CODEA;
		}
		break;
	    }
	}
	add(barcode,code128[i].encode);
	sum += (dx*ch);
    }
    ch = sum % 103;
    add(barcode,code128[ch].encode);
    add(barcode,"2331112");

#if GD_SUPPORTS_PNG
    gdImagePng(barcode, stdout);
#elif GD_SUPPORTS_JPEG
    gdImageJpeg(barcode, stdout, 70);
#elif GD_SUPPORTS_GIF
    gdImageGif(barcode, stdout);
#endif
    exit(0);
}
