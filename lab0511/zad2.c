/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejności: 12, 6, 4, 2, 1 */

#include <stdio.h>

int main() {
   int tabela[] = {1, 2, 4, 6, 12};
   int n = (sizeof tabela) / sizeof(int) - 1;

   for (size_t i = n; i >= 0; i--){
     // printf("%lu\n", i);
     printf("%d\n", tabela[i]);
   }
   return 0;
}
