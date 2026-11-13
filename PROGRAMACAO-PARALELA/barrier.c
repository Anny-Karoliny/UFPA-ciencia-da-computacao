#include <omp.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    omp_set_num_threadas(4);

    #pragma omp parallel {
        int thread_id = omp_get_thread_num();

        printf("[Thread %d] iniciou a Etapa1...\n", thread_id);
        
        sleep(thread_id + 1);
        
        printf("[Thread %d] concluiu a Etapa1 e chegou ao ponto de encontro...\n", thread_id);

        #pragma omp barrier

        printf("[Thread %d] Liberada iniciou a Etapa 2 de forma sincrona...\n", thread_id);

        
    }
}