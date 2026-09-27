#include <stdio.h>

int main() {
    int basic;
    float hra, da, pf, gross, net;
    printf("Enter basic salary of employee: ");
    scanf("%f", &basic);
    hra = 0.20 * basic;
    da  = 0.40 * basic;
    pf  = 0.12 * basic;

    gross = basic + hra + da;
    net   = gross - pf;

    printf("\nBasic Salary: %.2f", basic);
    printf("\nHRA: %.2f", hra);
    printf("\nDA: %.2f", da);
    printf("\nPF: %.2f", pf);
    printf("\nGross Salary: %.2f", gross);
    printf("\nNet Salary: %.2f\n", net);

    return 0;
}
