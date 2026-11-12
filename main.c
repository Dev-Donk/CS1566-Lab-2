#include <stdio.h>
#include "myLib.h"

int main(void) {
    vec4 v1 = {1, 2, 3, 4};
    vec4 v2 = {5, 6, 7, 8};

    // *** Vector Tests ***
    printf("\n********************");
    printf("\n*** VECTOR TESTS ***");
    printf("\n********************\n");

    printf("\nPrint Vector V:\n");
    print_v4(v1);

    printf("\nPrint Vector V2:\n");
    print_v4(v2);

    printf("\n********************\n");

    printf("\nScalar Multiplication of Vector V with 3.0:\n");
    print_v4(sc_mul_v4(v1, 3.0));

    printf("\nVector Addition of Vector V with V2:\n");
    print_v4(add_v4_to_v4(v1, v2));

    printf("\nVector Subtraction of Vector V with V2:\n");
    print_v4(sub_v4_to_v4(v1, v2));

    printf("\nMagnitude of Vector V:\n");
    printf("%7.4f\n", mag_of_v4(v1));

    printf("\nNormalize Vector V:\n");
    print_v4(normalize_v4(v1));

    printf("\nDot Product of Vector V with V2:\n");
    printf("%7.4f\n", dot_product_of_v4_v4(v1, v2));

    printf("\nCross Product of Vector V with V2:\n");
    print_v4(cross_product_of_v4_v4(v1, v2));

    // ********************

    mat4 m1 = {{1, -5, 9, 13}, {2, 6, -10, 14}, {3, 7, 11, 15}, {4, 8, 12, -16}};
    mat4 m2 = {{4, 8, 12, 16}, {3, 7, 11, 15}, {2, 6, 10, 14}, {1, 5, 9, 13}};

    // *** Matrix Tests ***
    printf("\n********************");
    printf("\n*** MATRIX TESTS ***");
    printf("\n********************\n");

    printf("\nPrint Matrix M:\n");
    print_m4(m1);

    printf("\nPrint Matrix M2:\n");
    print_m4(m2);

    printf("\n********************\n");

    printf("\nScalar Multiplication of Matrix M with 3.0:\n");
    print_m4(sc_mul_m4(m1, 3.0));

    printf("\nMatrix Addition of Matrix M with Matrix M2:\n");
    print_m4(add_m4_to_m4(m1, m2));

    printf("\nMatrix Subtraction of Matrix M with Matrix M2:\n");
    print_m4(sub_m4_to_m4(m1, m2));

    printf("\nMatrix Transpose of Matrix M:\n");
    print_m4(transpose_m4(m1));

    printf("\nMatrix Multiplication of Matrix M with Matrix M2:\n");
    print_m4(mul_m4_to_m4(m1, m2));

    printf("\nMatrix Scalar Multiplication with Vector V and Matrix M:\n");
    print_v4(mul_v4_to_m4(v1, m1));

    printf("\nInverse Matrix M:\n");
    print_m4(inverse_m4(m1));

    printf("\nChecking Inverse Matrix M:\n");
    print_m4(mul_m4_to_m4(m1, inverse_m4(m1)));

    // ********************

    return 0;
}
