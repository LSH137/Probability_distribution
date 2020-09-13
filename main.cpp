#include <cstdio>
#include <gmp.h>
#include <mpfr.h>
#include <cmath>
#include <unistd.h>
#include "class.h"
#include "constant.h"

int main(void)
{
    unsigned long int uli_k;
    var p;
    var k;
    var n;
    var temp[4];

    var percent; // space percent of A
    FILE* fp_data;

    fp_data = fopen64("p.txt", "w");

    if(fp_data != nullptr)
    {
        printf("enter k: ");
        k.read();

        printf("enter k again: ");
        scanf("%lu", &uli_k);

        printf("enter percent: ");
        percent.read();

        for(int i = 0; i < uli_k; i++)
        {
            eqr_d(n, (double)i);
            
            temp[0] = factorial(uli_k);
            temp[1] = power(percent, n);
            temp[2] = power(sub_d(1, percent), sub(k, n));

            temp[0] = mul(temp[0], temp[1]);
            temp[0] = mul(temp[0], temp[2]);

            temp[1] = factorial((unsigned long)i);
            temp[2] = factorial((unsigned long)(uli_k - i));
            temp[3] = mul(temp[1], temp[2]);
            
            p = div(temp[0], temp[3]);

            fprintf(fp_data, "%d ", i);
            p.fprint(fp_data);
            fprintf(fp_data, "\n");

            printf("%f %% end\r", (float)i / Max_n);
        }

        printf("end\n");

        fclose(fp_data);
    }

      return 0;
}