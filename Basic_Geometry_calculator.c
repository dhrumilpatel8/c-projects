// Made by Dhrumil patel  i have to edit this program for new and more fetures
// first edit date 14/2/22
//cal is now updated 
#include <stdio.h>
#include <stdlib.h>
// area
int area(int wid, int hit);
float areaofc(float redius);
int area_of_squar(int side);
int triangle(int base, int hight);
float elips(int major, int minor);
// volume
int cube(int sidea);
float sphare(float rad);
float pyramid(int ba, int hei);
float cylinder(float radi, int hig);
// surface area
int cube_sur(int sid);
float sphare_sur(float redi);
float pyramid_sur(int bas, int lat);
float cylinder_sur(float redi, int heig);
int main()
{
    int num2;
    system("clear");
    printf(" 1) Arithmatic calculation \n");
    printf(" 2) Finding area \n");
    printf(" 3) Finding volume\n");
    printf(" 4) Finding surface area\n");
    printf(" enter number\n");
    scanf("%d", &num2);
    system("clear");

    switch (num2)
    {
        // Arithmatic opretions
    case 1:
        int cd;
        printf("1) Addition\n");
        printf("2) Subtraction of two number \n");
        printf("3) Multiplication pf two number  \n");
        printf("4) Division of two number\n");
        printf("Enter number\n");
        scanf("%d", &cd);
        system("clear");
        int ab, bc;
        printf("\n");
        printf("Enter first number\n");
        scanf("%d", &ab);
        printf("Ente second number\n");
        scanf("%d", &bc);
        system("clear");

        switch (cd)
        {
        case 1:
            printf("The Addition is %d\n", ab + bc);
            break;
        case 2:
            printf("The Substraction is %d\n", ab - bc);
            break;
        case 3:
            printf("The Multiplication is %d\n", ab * bc);
            break;
        case 4:
            printf("The Division is %d\n", ab / bc);
            break;
        default:
            printf("Please enter valid number!\n");
            break;
        }
        break;
    // for area only
    case 2:
        int num;
        printf("1) Area of rectangle\n");
        printf("2) Area of circul \n");
        printf("3) Area of square \n");
        printf("4) Area of triangle \n");
        printf("5) Area of elips \n");
        printf("Enter number\n");
        scanf("%d", &num);
        system("clear");

        switch (num)
        {
        case 1:
            int a, b;
            area(a, b);
            break;
        case 2:
            float r;
            areaofc(r);
            break;
        case 3:
            int c;
            area_of_squar(c);
            break;
        case 4:
            int d, e;
            triangle(d, e);
            break;
        case 5:
            int f, g;
            elips(f, g);
            break;
        default:
            printf("Please enter valid number!\n");
            break;
        }
        break;
    // for volume only
    case 3:
        int num3;
        printf("1) Volume  of cube\n");
        printf("2) Volume  of sphear \n");
        printf("3) Volume  of cylinder\n");
        printf("4) Volume  of piramid \n");
        printf("Enter number\n");
        scanf("%d", &num3);
        system("clear");
        switch (num3)
        {
        case 1:
            int sidea;
            cube(sidea);
            break;
        case 2:
            int rad;
            sphare(rad);
            break;
        case 3:
            int redi, heig;
            cylinder(redi, heig);
            break;
        case 4:

            int ba, hei;
            pyramid(ba, hei);
        default:
            printf("Please enter valid number\n");
            break;
        }
    // for surface area only
    case 4:
        int num4;
        printf("1) Surface area of cube\n");
        printf("2) Surface area of sphear \n");
        printf("3) Surface area of cylinder\n");
        printf("4) Surface area of piramid \n");
        printf("Enter number\n");
        scanf("%d", &num4);
        system("clear");
        switch (num4)
        {
        case 1:
            int sidee;
            cube_sur(sidee);
            break;
        case 2:
            float redi;
            sphare_sur(redi);
            break;
        case 3:
            int bas, lat;
            pyramid_sur(bas, lat);
            break;
        case 4:
            int heig;
            float rodi;
            cylinder_sur(heig, rodi);
            break;
        default:
            printf("Please enter valid number\n");
            break;
        }
        break;
    default:
        printf("Please enter valid number\n");
        break;
    }
    return 0;
}
// user defined functions for calculating  area
int area(int wid, int hit)
{
    printf("enter width\n");
    scanf("%d", &wid);
    printf("enter hight\n");
    scanf("%d", &hit);
    int area_of_rec = wid * hit;
    system("clear");
    printf("The area of rectengle is  :>> %d cm\n", area_of_rec);
}
float areaofc(float redius)
{
    printf("Enter redius\n");
    scanf("%f", &redius);
    float redius_of_c = 3.14 * (redius * redius);
    system("clear");
    printf("The area of circul  is  :>> %f cm\n", redius_of_c);
}
int area_of_squar(int side)
{
    printf("Enter the side of square \n");
    scanf("%d", &side);
    int result = side * side;
    system("clear");
    printf("The area of  square  is  :>> %d cm\n", result);
}
int triangle(int base, int hight)
{

    printf("Enter base\n");
    scanf("%d", &base);
    printf("Enter hight\n");
    scanf("%d", &hight);
    int area_of_tri = (base * hight) / 2;
    system("clear");
    printf("The area of triangle   is  :>> %d cm\n", area_of_tri);
}
float elips(int major, int minor)
{
    printf("Enter major axis\n");
    scanf("%d", &major);
    printf("Enter minor axis\n");
    scanf("%d", &minor);
    float area_of_elips = (major * minor) * 3.14;
    system("clear");
    printf("The area of elips  is  :>> %f cm\n", area_of_elips);
}
int cube(int sidea)
{

    printf("Enter leanth of a cube\n");
    scanf("%d", &sidea);
    int volumeofc = sidea * sidea * sidea;
    system("clear");
    printf("The volume of cube   is  :>> %d cm\n", volumeofc);
}
float sphare(float rad)
{
    printf("Enter redius\n");
    scanf("%f", &rad);
    float volume_of_sp = (3.14 * rad * rad * rad) * 4 / 3;
    system("clear");
    printf("The volume of spear  is  :>> %f\n", volume_of_sp);
}
float pyramid(int ba, int hei)
{
    printf("Enter base\n");
    scanf("%d", &ba);
    printf("Enter hight\n");
    scanf("%d", &hei);
    int volume_of_py = (ba * hei) * 1 / 3;
    system("clear");
    printf("The volume of pyramid  is  :>> %d cm\n", volume_of_py);
}
float cylinder(float radi, int hig)
{

    printf("Enter radius\n");
    scanf("%f", &radi);
    printf("Enter hight\n");
    scanf("%d", &hig);
    float volume_of_cy = 3.14 * (radi * radi * hig);
    system("clear");
    printf("The volume of cylinder is  :>> %f cm\n", volume_of_cy);
}
int cube_sur(int sid)
{
    printf("Enter leanth of a cube\n");
    scanf("%d", &sid);
    int surfaceofc = 6 * (sid * sid);
    system("clear");
    printf("The surface area of cube   is  :>> %d cm\n", surfaceofc);
}
float sphare_sur(float redi)
{
    printf("Enter redius\n");
    scanf("%f", &redi);
    float surface_of_sp = 4 * 3.14 * (redi * redi);
    system("clear");
    printf("The surface area  of spear  is  :>> %f cm\n", surface_of_sp);
}
float pyramid_sur(int bas, int lat)
{

    printf("Enter base\n");
    scanf("%d", &bas);
    printf("Enter hight\n");
    scanf("%d", &lat);
    int surface_of_py = (bas + lat);
    system("clear");
    printf("The surface area of pyramid  is  :>> %d cm\n", surface_of_py);
}
float cylinder_sur(float redi, int heig)
{
    printf("Enter radius\n");
    scanf("%f", &redi);
    printf("Enter hight\n");
    scanf("%d", &heig);
    float surface_of_cy = (2 * 3.14 * heig) + (2 * 3.14 * redi * redi);
    system("clear");
    printf("The surface area of cylinder is  :>> %f cm\n", surface_of_cy);
}
