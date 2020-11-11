#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int pd[1000000];

int blockTypes(int block[], int N, int M){
    int i, j, k;

    if(M%block[N-1] == 0)
        return M/block[N-1];

    memset(pd, 1000000, sizeof(pd));
    pd[0] = 0;

    for(i = 0; i < N; i++){
        k = block[i];
        for(j = k; j <= M; j++){
            if (pd[j] <  pd[j-k] + 1) {
                pd[j] = pd[j];
            }else{
                pd[j] = pd[j-k] + 1;
            }
        }
    }
    return pd[M];
}

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
    int block[25];
    int T; // The number of test cases
    int N; // The quantity of block types
    int M; // The all size wished by the artist
    int i, j;

    scanf("%d", &T);
    for(i = 0; i < T; i++){
          scanf("%d%d", &N, &M);
          for (j = 0; j < N; j++)
            scanf("%d", &block[j]);
          qsort(block, N, sizeof(int), compare);
          printf("%d\n", blockTypes(block, N, M));
    }
    return 0;
}
