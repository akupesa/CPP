# ex02 — PmergeMe

Descrição
- Implementa o algoritmo Merge-Insertion para ordenar inteiros, comparando desempenho entre `std::deque` e `std::vector`.
- Recebe como argumentos uma sequência de inteiros positivos (sem duplicatas).
- Mostra a lista antes/depois e o tempo gasto em milissegundos para cada contêiner.

Principais ficheiros
- PmergeMe.hpp / PmergeMe.cpp — implementação do algoritmo e parsing de argumentos.
- main.cpp — valida argumentos mínimos e invoca `PmergeMe::run`.
- Makefile — compila o binário `PmergeMe`.

Compilar
```bash
cd ex02
make
```

Uso
```bash
./PmergeMe 3 5 9 7 4
```
- O programa valida que cada argumento é número inteiro não-negativo e que não existem duplicatas.
- Em caso de erro imprime mensagem apropriada e retorna código != 0.

Exemplo
```bash
./PmergeMe 3 5 9 7 4
# saída:
# Before: 3 5 9 7 4
# After: 3 4 5 7 9
# Time to process a range of 5 elements with std::deque : X ms
# Time to process a range of 5 elements with std::vector: Y ms
```

Notas
- O layout e mensagens seguem o estilo dos outros exercícios (construtor/destrutor imprimindo mensagens).
- Para avaliar desempenho em listas grandes, gere números aleatórios e compare tempos.
