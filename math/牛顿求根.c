#include <stdio.h>
#include <math.h>

// 定义目标函数
double f(double x) {
    return 2 * sin(x) + 2 * x * cos(x);
}

// 定义目标函数的导数
double df(double x) {
    return 4 * cos(x) - 2 * x * sin(x);
}

// 牛顿法求解非线性方程的根
double newton_method(double (*f)(double), double (*df)(double), double x0, double tol, int max_iter) {
    double x = x0;
    int i;

    for (i = 0; i < max_iter; i++) {
        double fx = f(x);
        double dfx = df(x);

        if (fabs(fx) < tol) {
            printf("Converged after %d iterations.\n", i);
            return x;
        }

        if (dfx == 0) {
            printf("Derivative is zero. Newton's method failed.\n");
            return NAN;
        }

        x = x - fx / dfx;
    }

    printf("Maximum iterations reached. Newton's method did not converge.\n");
    return x;
}

int main() {
    double root = newton_method(f, df, 3, 1e-8, 100);
    printf("Approximate root: %lf\n", root);
    return 0;
}
