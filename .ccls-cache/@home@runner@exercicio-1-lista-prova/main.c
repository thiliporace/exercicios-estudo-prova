 #include <stdio.h>
 #include <string.h>
 #include <stdbool.h>

// exercicio 1
// int main() {
//   int v[4] = {1,2,3,4};
//   int aux;
//   for (int i =0;i<4/2;i++){
//     aux = v[i];
//     v[i] = v[3-i];
//     v[3-i] = aux;
//   }
//   for (int i =0;i<4;i++){
//     printf("%d",v[i]);
//   }
// }

// exercicio 2
//  int main()
//  {
//    int v[4] = {1,2,4,3};
//    int min,max;
//    min = max = v[0];
//    for (int i = 0;i<4;i+=1){
//      if (v[i] > max)
//        v[i] = max;
//      if (v[i] < min)
//        v[i] = min;
//    }
//    for(int i =0;i<4;i++){
//      printf("%i\n", v[i]);
//    }
//    return 0;
//  }

// exercicio 3
// int main(){
//   int v[7] = {1,3,2,4,7,9,5},min,max;
//   min = max = v[0];
//   int cont = 0,cont2 =0;
//   for (int i =0;i<7;i++){
//     ++cont2;
//     if (v[i-1] < v[i] && v[i+1] > v[i]){
//        //++cont2;
//       if (cont2%2){
//         cont += 2;
//         cont = cont - 1;
//         }
//       else if(cont2%3){
//         cont+=2;
//         cont = cont + 1;
//       }
//     }
//     printf("%d\n",cont);
//   }
//  }

// exercicio 4
// int main(){
//   int v[8] = {2,1,4,5,10,1,9,6},maior,menor,sub;
//   maior = menor = v[0];
//   for (int i=0;i<8;i++){
//     if (v[i] > maior)
//       maior = v[i];
//     else if (v[i] < menor)
//       menor = v[i];
//     sub = maior - menor;
//   }
//   printf("%i",sub);
// }

// exercicio 5
// void interseccao(int v1[5] ,int v2[5]){
//   for (int i=0;i<5;i++){
//     if(v1[i] == v2[i]){
//       printf("%i\n",v1[i]);
//     }
//   }
// }
// int main(){
//   int v1[5] = {2,4,6,8,10};
//   int v2[5] = {1,3,6,8,10};
//   interseccao(v1,v2);
// }

// exercicio 6
// void interseccao(int v1[5] ,int v2[5]){
//   for (int i=0;i<5;i++){
//     if(v1[i] != v2[i]){
//       printf("%i\n",v1[i]);
//     }
//   }
// }
// int main(){
//   int v1[5] = {2,4,6,8,10};
//   int v2[5] = {1,3,6,8,10};
//   interseccao(v1,v2);
// }

// exercicio 7
// int main(){
//   int v1[5] = {2,4,6,8,10};
//   int v2[5] = {1,3,6,8,10};
//   int v3[10];
//   for (int i=0;i<10;i++){
//     if(v1[i] > v2[i])
//       v3[i] = v2[i];
//     else if(v2[i] > v1[i])
//       v3[i] = v1[i];
//     printf("%i\n",v3[i]);
//   }
// }

// exercicio 8
// void rearranjo(int vet[9]){
//   int aux,maiores = 0,menores = 0,count = 0;
//   for (int i = 0;i < 9;i++){
//     if (i == 0) menores = menores;
//     else if (vet[i] <= vet[0]) menores++;
//     else maiores++;
//   }
//   aux = vet[0];
//   vet[0] = vet[menores];
//   vet[menores] = aux;
//   for (int i = 0;i < 9;i++){
//     if (vet[i] < vet[menores]){
//       aux = vet[menores-count];
//       vet[menores-count] = vet[i];
//       vet[i] = aux;
//       count++;
//     }
//   }
//   aux = vet[0];
//   vet[0] = vet[menores];
//   vet[menores] = aux;
//   printf("Vetor rearranjado: ");
//   for (int i = 0;i < 9;i++){
//     printf("%d ",vet[i]);
//   }
// }
// int main(void){
//   int vet[9] = {5,4,6,8,3,2,1,8,9};
//   rearranjo(vet);
// }






// EXERCICIO 9
// int main(void){
//   int sum = 0;
//   int vet[10] = {1,2,3,4,5,6,7,8,9,10};
//   for (int i = 0;i < 10;i++){
//     sum = sum + vet[i];
//   }
//   printf("soma dos prefixos: %d",sum);
// }






// EXERCICIO 10
// int main(void){
//   int aux,impares = 0,pares = 0;
//   int vet[10] = {4,5,3,2,3,2,6,6,6,1};
//   for (int i = 0;i < 10;i++){
//     if (vet[i]%2 == 1){
//       impares++;
//     }
//     else{
//       pares++;
//     }
//   }
//   for (int i = 0;i < 10;i++){
//     if (vet[i]%2 == 0){
//       aux = vet[pares];
//       vet[pares] = vet[i];
//       vet[i] = aux;
//       pares--;
//     }
//   }
//   for (int i = 0;i < 10;i++){
//     if (vet[i]%2 == 1){
//       aux = vet[impares-1];
//       vet[impares-1] = vet[i];
//       vet[i] = aux;
//       impares--;
//     }
//   }
//   printf("vetor:");
//   for (int i = 0;i < 10;i++){
//     printf("%d ",vet[i]);
//   }
// }



