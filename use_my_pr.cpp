#include <stdio.h>
#include <math.h>

extern void M_printf_s(char* ptr, ...);

int main() // переменное колво аргументов через инт jt+ offset of stack OR llll // +-INF
{
    M_printf_s("Hi \\, %s my %x %b %d %o in %c is the %f %f is work? plzz\n %d %s %x %d %% %c\n ", "numbers", 100, 100, 100, 100, '$', -INFINITY, NAN, -1, "love", 3802, 100, 33, 33);

    M_printf_s("\n%d %s %x %d %% %c\n", -1ll, "love", 3802, 100, 33, 33);
    M_printf_s("\nfloat = %f another %d = %f\n check to much floats %f %f %f %f %f %f %f %f %f", 123.123, 0xFFFFFFFFFFFFFFFF, 432.000032, 1.01, 1.01, 1.01, 1.01, 1.01, 1.01, 1.01, 1.01, 1.01);

    return 0;
}

// nasm -f elf64 -o M_Ptintf_f.o M_Ptintf_f.s
// gcc -o app M_Pr_in.c M_Ptintf_f.o