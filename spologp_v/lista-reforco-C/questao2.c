#include <stdio.h>

int main() {
    int num, i;
    int total_count = 0, total_sum = 0;
    int max_value = -2147483648;
    int min_value = 2147483647;
    int count_faixa[5] = {0};
    int sum_faixa[5] = {0};
    int count_even = 0, count_odd = 0;

    char continue_input;

    do {

        printf("Digite um número: ");
        scanf("%d", &num);

        total_sum += num;
        total_count++;

        if (num > max_value) max_value = num;
        if (num < min_value) min_value = num;

        if (num < 0) {
            count_faixa[0]++;
            sum_faixa[0] += num;
        } else if (num >= 0 && num < 15) {
            count_faixa[1]++;
            sum_faixa[1] += num;
        } else if (num >= 15 && num < 100) {
            count_faixa[2]++;
            sum_faixa[2] += num;
        } else if (num >= 100 && num < 1000) {
            count_faixa[4]++;
            sum_faixa[4] += num;
        } else if (num >= 1000) {
            count_faixa[3]++;
            sum_faixa[3] += num;
        }

        if (num % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }

        printf("Deseja inserir outro número? (s/n): ");
        scanf(" %c", &continue_input);

    } while (continue_input == 's' || continue_input == 'S');

    double average = (total_count > 0) ? (double)total_sum / total_count : 0;

    printf("\nResultados:\n");
    printf("Média dos valores: %.2f\n", average);
    printf("Maior valor: %d\n", max_value);
    printf("Menor valor: %d\n", min_value);
    printf("Total de pares: %d\n", count_even);
    printf("Total de ímpares: %d\n", count_odd);

    printf("\nContagem e soma por faixa:\n");
    printf("Faixa 1 (Elementos < 0): Contagem = %d, Soma = %d\n", count_faixa[0], sum_faixa[0]);
    printf("Faixa 2 (0 <= Elementos < 15): Contagem = %d, Soma = %d\n", count_faixa[1], sum_faixa[1]);
    printf("Faixa 3 (15 <= Elementos < 100): Contagem = %d, Soma = %d\n", count_faixa[2], sum_faixa[2]);
    printf("Faixa 4 (Elementos >= 1000): Contagem = %d, Soma = %d\n", count_faixa[3], sum_faixa[3]);
    printf("Faixa 5 (100 <= Elementos < 1000): Contagem = %d, Soma = %d\n", count_faixa[4], sum_faixa[4]);

    return 0;
}
