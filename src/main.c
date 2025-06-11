#include <math.h>
#include <stdio.h>

void solve_quadratic(double a, double b, double c)
{
    const double DELTA = (b * b) - 4 * a * c;

    if (DELTA > 0.0) {
        // clang-format off
        const double X1 = (-(b) + sqrt(DELTA)) / (2 * a);
        const double X2 = (-(b) - sqrt(DELTA)) / (2 * a);

        // clang-format on
        printf("\n%.4f, %.4f, delta: %.2f\n", X1, X2, DELTA);
    } else if (DELTA == 0.0) {
        double const ROOT = (-(b)) / (2 * a);

        printf("\n%.4f, delta: %.2f\n", ROOT, DELTA);
    } else {
        printf("\nThere's no real roots, delta is less than 0(%.2f)\n",
               DELTA);
    }
}

int main(void)
{
    double component_a;
    double component_b;
    double component_c;

    printf("Input A, B, C separeted by spaces: ");
    scanf("%lf %lf %lf", &component_a, &component_b, &component_c);

    while (component_a == 0) {
        printf("\nA cannot be 0, this program doesn't support linear"
               "equations, %lf ",
               component_a);
        printf("\nInput A: ");
        scanf("%lf", &component_a);
    }

    solve_quadratic(component_a, component_b, component_c);

    return 0;
}