#include <iostream>
using namespace std;

int main() {
    // Array estático com tamanho fixo
    int staticArr[5];  // tamanho fixo 5

    // Vantagens do array estático:
    // - Alocação rápida e automática na pilha (stack).
    // - Não precisa liberar memória manualmente.
    // Desvantagens:
    // - Tamanho fixo, precisa ser conhecido em tempo de compilação.
    // - Pilha tem espaço limitado (não serve para arrays muito grandes).

    // Inicializa o array estático
    for (int i = 0; i < 5; i++) {
        staticArr[i] = i * 2;
    }

    cout << "Static array values: ";
    for (int i = 0; i < 5; i++) {
        cout << staticArr[i] << " ";
    }
    cout << endl;

    // Pergunta ao usuário o tamanho do array dinâmico
    int n;
    cout << "Enter size for dynamic array: ";
    cin >> n;

    // Array dinâmico com tamanho definido em tempo de execução
    int* dynamicArr = new int[n];

    // Vantagens do array dinâmico:
    // - Tamanho flexível, definido em tempo de execução.
    // - Pode alocar arrays grandes (limitado pela memória do heap).
    // Desvantagens:
    // - Alocação e desalocação são mais lentas que arrays estáticos.
    // - É necessário liberar a memória manualmente com delete[] para evitar vazamentos.

    // Inicializa o array dinâmico
    for (int i = 0; i < n; i++) {
        dynamicArr[i] = i * 3;
    }

    cout << "Dynamic array values: ";
    for (int i = 0; i < n; i++) {
        cout << dynamicArr[i] << " ";
    }
    cout << endl;

    // Libera a memória do array dinâmico para evitar vazamento de memória
    delete[] dynamicArr;

    return 0;
}
