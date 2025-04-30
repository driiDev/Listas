#include <stdio.h>

int main() {
    float preco_compra, preco_venda;

    printf("Digite o valor do produto: ");
    scanf("%f", &preco_compra);

    if (preco_compra < 20) {
        preco_venda = preco_compra * 1.45;
    } else if (preco_compra <= 50) {
        preco_venda = preco_compra * 1.35;
    } else {
        preco_venda = preco_compra * 1.25;
    }

    printf("Valor de venda: %.2f\n", preco_venda);

    return 0;
}
