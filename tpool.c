#include "tpool.h"
#include <pthread.h>

struct tpool *tpool_init(int num_threads, int n) {
    //TODO
}

void tpool_request(struct tpool *pool, Matrix a, Matrix b, Matrix c, int num_works) {
    //TODO
}

void tpool_synchronize(struct tpool *pool) {
    //TODO
}

void tpool_destroy(struct tpool *pool) {
    //TODO
}
