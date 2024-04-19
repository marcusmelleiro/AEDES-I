#include <stdio.h>
#include <stdlib.h>

// ALIQUOTAS INSS 2024 (EM %)
#define INSS_1 0.075
#define INSS_2 0.09
#define INSS_3 0.12
#define INSS_4 0.14

// ALIQUOTAS IRPF 2024 ( EM %)
#define IRPF_1 0.075
#define IRPF_2 0.15
#define IRPF_3 0.225
#define IRPF_4 0.275

int main()
{
    // VARIAVEIS ( SALARIO BRUTO E LIQUIDO)
    float salario_bruto, salario_liquido_inss, salario_liquido_irpf, salario_liquido;

    // ENTRADA (DIGITAR O VALOR DO SALARIO )
    printf("Digite o salario bruto: ");
    scanf("%f", &salario_bruto);

    // PROCESSAMENTO (INDETIFICANDO E CALCULANDO  AS ALIQUOTAS DE INSS)
    if (salario_bruto <= 1412.0)
    {
        salario_liquido_inss = (salario_bruto * INSS_1);
    }
    else if ((salario_bruto >= 1412.1) && (salario_bruto <= 2666.68))
    {
        salario_liquido_inss = (salario_bruto * INSS_2);
    }
    else if ((salario_bruto >= 2666.69) && (salario_bruto <= 4000.03))
    {
        salario_liquido_inss = (salario_bruto * INSS_3);
    }
    else if ((salario_bruto >= 4000.04) && (salario_bruto <= 7786.02))
    {
        salario_liquido_inss = (salario_bruto * INSS_4);
    }

    // IMPRIMINDO VALOR A SER PAGO DE INSS
    printf("Valora a ser pago de INSS: %f\n", salario_liquido_inss);

    // PROCESSAMENTO (INDETIFICANDO E CALCULANDO  AS ALIQUOTAS DE IRPF)
    if (salario_bruto <= 2259.20)
    {
        salario_liquido_irpf = 0;
    }
    else if ((salario_bruto >= 2259.21) && (salario_bruto <= 2826.65))
    {
        salario_liquido_irpf = (salario_bruto * IRPF_1);
    }
    else if ((salario_bruto >= 2826.66) && (salario_bruto <= 3751.05))
    {
        salario_liquido_irpf = (salario_bruto * IRPF_2);
    }
    else if ((salario_bruto >= 3751.06) && (salario_bruto <= 4664.68))
    {
        salario_liquido_irpf = (salario_bruto * IRPF_3);
    }
    else if (salario_bruto >= 4664.69)
    {
        salario_liquido_irpf = (salario_bruto * IRPF_4);
    }

    // IMPRIMINDO VALOR A SER PAGO DE IRPF
    printf("Valora a ser pago de IRPF: %f\n", salario_liquido_irpf);

    salario_liquido = (salario_bruto - salario_liquido_inss - salario_liquido_irpf);

    printf("Salario liquido: %f", salario_liquido);

    return 0;
}
