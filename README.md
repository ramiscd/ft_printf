# ft_printf

O projeto **ft_printf** faz parte do currículo da [42](https://42.fr/) e tem como objetivo recriar a função `printf` da biblioteca padrão C.  
Essa função é amplamente utilizada para saída formatada no terminal e é um excelente exercício para aprender sobre **variadic functions**, **parsing de strings** e **gestão de memória**.

---

## 📝 Descrição

A função `ft_printf` deve se comportar de forma semelhante à função original `printf` da libc, permitindo formatar e imprimir dados no terminal a partir de uma string de formato e uma lista de argumentos variádicos.

Exemplo:

```c
ft_printf("Hello %s, você tem %d mensagens.\n", "Ramis", 5);
// Saída: Hello Ramis, você tem 5 mensagens.
