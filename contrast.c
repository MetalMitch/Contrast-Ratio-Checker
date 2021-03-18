// According to https://www.w3.org/WAI/GL/wiki/Relative_luminance

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "colors.c"
#include <ctype.h>

const int INTEGER = 19;

// Declarations
double calLum(double in_r, double in_g, double in_b);
double defRGB(double in);
double calCon(double color1, double color2);
int usageError(int code);
void HTMLtoRGB(char *html, char *loc);
void RGBtoString(int red, int green, int blue, char *loc);
char *sparem(char *input);
void lower(char *p);
void stringToRGB(char *string, int *r, int *g, int *b);
char *findHTML(void);

// Main just to prove the concept
int main(int argc, char *argv[])
{
    // If Usage doesn't conform
    if (argc != 3)
    {
        usageError(1);
    }
    // If color 1 isnt RGB or HTML
    if (strcmp(argv[1], "RGB") != 0 && strcmp(argv[1], "HTML") != 0)
    {
        usageError(1);
    }
    // If color 2 isnt RGB or HTML
    if (strcmp(argv[2], "RGB") != 0 && strcmp(argv[2], "HTML") != 0)
    {
        usageError(1);
    }

    char rgb[INTEGER];
    char input[INTEGER];
    // !debugging code
    // *find function
    printf("Type HTML Color Code\n");
    scanf("%s19\n", input);
    HTMLtoRGB(input, rgb);
    printf("RGB values are:\n%s\n", rgb);
    printf("converting to integers\n");
    int one, two, three;
    stringToRGB(rgb, &one, &two, &three);
    printf("Red value is %i\n", one);
    printf("Green value is %i\n", two);
    printf("Blue value is %i\n", three);
    // !debugging code

    // // Capture and convert CLA to doubles
    // double a, b, c, a2, b2, c2;
    // a = atof(argv[1]);
    // b = atof(argv[2]);
    // c = atof(argv[3]);
    // a2 = atof(argv[4]);
    // b2 = atof(argv[5]);
    // c2 = atof(argv[6]);

    // double color1 = calLum(a, b, c);
    // double color2 = calLum(a2, b2, c2);

    // double ratio = calCon(color1, color2);
    // // Prints to 12 Decimal Places
    // printf("%.2f", ratio);
    // printf(":1\n");
    // if (ratio < 4.5)
    // {
    //     printf("Contrast Fail");
    // }
    // else if (ratio > 4.4 && ratio < 7)
    // {
    //     printf("Meets Minimum Contrast Ratio\n");
    // }
    // else if (ratio >= 7)
    // {
    //     printf("Meets Reccomended Contrast Ratio\n");
    // }
}

double calCon(double color1, double color2)
{
    double contrast;

    // if 1 is bigger (and therefore lighter) than 2
    if (color1 > color2)
    {
        //  (L1 + 0.05) / (L2 + 0.05)
        contrast = (color1 + 0.05) / (color2 + 0.05);
    }
    // else if 2 is bigger (and therefore lighter) than 1
    else
    {
        //  (L2 + 0.05) / (L1 + 0.05)
        contrast = (color2 + 0.05) / (color1 + 0.05);
    }
    return contrast;
}

int usageError(int code)
{
    switch (code)
    {
    case 1:
        printf("Usage: ./contrast {color1} {color2}\n");
        printf("{color} must be either 'RGB' or 'HTML'}\n");
        exit(0);
        break;
    case 2:
        printf("Color not found\n");
        printf("Hint: Check the spelling of input\n");
        printf("Hint: Check there are no spaces in input\n");
        exit(0);
        break;
    default:
        printf("usageError encountered an unexpected error code %i", code);
        exit(0);
    }
}

double calLum(double in_r, double in_g, double in_b)
{
    // Define RsRGB, GsRGB, BsRGB       *8bit/255*
    double RsRGB = in_r / 255;
    double GsRGB = in_g / 255;
    double BsRGB = in_b / 255;
    // Define R, G & B
    double r = defRGB(RsRGB);
    double g = defRGB(GsRGB);
    double b = defRGB(BsRGB);
    //  L = (0.2126 * R) + (0.7152 * G) + (0.0722 * B)
    r = 0.2126 * r;
    g = 0.7152 * g;
    b = 0.0722 * b;
    // Calculate L
    double l = r + b + g;
    // Return L (Luminance)
    return l;
}

// if RsRGB <= 0.03928 then R = RsRGB/12.92 else R = ((RsRGB+0.055)/1.055) ^ 2.4
// if GsRGB <= 0.03928 then G = GsRGB/12.92 else G = ((GsRGB+0.055)/1.055) ^ 2.4
// if BsRGB <= 0.03928 then B = BsRGB/12.92 else B = ((BsRGB+0.055)/1.055) ^ 2.4
double defRGB(double in)
{
    double out;

    if (in <= 0.03928)
    {
        out = in / 12.92;
    }
    else
    {
        // ((in + 0.055) / 1.055) ^ 2.4
        out = in + 0.055;
        out = out / 1.055;
        out = pow(out, 2.4);
    }
    return out;
}

void HTMLtoRGB(char *html, char *loc)
{
    lower(html);
    // Loop through all colours
    for (int i = 0; i < COLOR_NUM - 1; i++)
    {
        // Initialise string to hold current colour, matching its length
        char check[strlen(colors[i].shade.name)];
        // copy the attribute to the check string
        strcpy(check, colors[i].shade.name);
        // Standardise to lower case
        lower(check);
        // if it matches the user's input
        if (strcmp(check, html) == 0)
        {
            // Store each colour value
            int red = colors[i].shade.red;
            int green = colors[i].shade.green;
            int blue = colors[i].shade.blue;
            // Convert to string and store in output location
            RGBtoString(red, green, blue, loc);
            break;
        }
        else
        {
            // Store "No match in output"
            sprintf(loc, "No Match");
        }
    }
    if (strcmp(loc, "No Match") == 0)
    {
        // Provide usage error
        usageError(2);
    }
}
// Convert RGB values to a string
void RGBtoString(int red, int green, int blue, char *loc)
{
    // Copying pointer
    char *output = loc;
    sprintf(output, "%i, %i, %i", red, green, blue);
}

void lower(char *p)
{
    // Copy pointer
    char *str = p;
    // For each letter
    for (int i = 0; str[i]; i++)
    {
        // Change to lower case
        str[i] = tolower(str[i]);
    }
}
// Convert string of RGB values to three separate integers
void stringToRGB(char *string, int *r, int *g, int *b)
{
    // Copy Pointers
    char *str = string;
    int *red = r;
    int *green = g;
    int *blue = b;
    // Initialise array to temporarily keep
    // 3 strings, each a max of 4 chars (inc \0)
    char rgb[3][4];
    // Split string into 3
    char *redString = strtok(str, ", ");
    char *greenString = strtok(NULL, ", ");
    char *blueString = strtok(NULL, ", ");

    // convert strings to integers and store in the output locations
    *red = atoi(redString);
    *green = atoi(greenString);
    *blue = atoi(blueString);
}