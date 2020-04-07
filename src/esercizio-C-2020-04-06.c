/*
 * esercizio-C-2020-04-06.c
 *
 *  Created on: Apr 2, 2020
 *      Author: marco
 */

#include <stdio.h>
#include <stdbool.h>

void findBruteForce(int * arr, int dimension){
  bool visited[dimension];
  for(int i = 0; i < dimension; i++){
    int x = arr[i];
    if(visited[i] == false){
      bool isDuplicated = false;
      for(int j = i + 1; j < dimension; j++){
        if(x == arr[j]){
          isDuplicated = true;
          visited[j] = true;
        }
      }
      if(!isDuplicated){
        printf("Element %d appear only once in array\n", x);
      }
    }
  }
}

int main(int argc, char * argv[]) {
  int arr[] = {1, 5, 6, 2, 1, 6, 4, 3, 2, 5, 3};
  findBruteForce(arr, 11);
  return 0;
}
