# ex01 — RPN

Descrição
- Implementa um avaliador de expressões em Notação Polonesa Reversa (RPN).
- O programa recebe uma string única como argumento onde os tokens são números (0-9) e operadores `+ - * /` separados por espaços.

Principais ficheiros
- RPN.hpp — definição da classe que valida tokens e aplicador de operações usando `std::stack`.
- RPN.cpp — implementação.
- main.cpp — valida argumentos e invoca a classe.

Compilar
```bash
cd ex01
make
```

Uso
```bash
./RPN "3 4 + 2 * 7 /"
```
- O programa valida tokens; em caso de token inválido retorna erro.
- A divisão por zero é tratada com mensagem de erro.

Exemplo
```bash
./RPN "3 4 +"
# saída: 7
```

Notas
- O programa imprime mensagens de construtor/destrutor (estilo do autor). Ajuste se quiser silêncio em produção.
