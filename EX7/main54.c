#include <stdio.h>
#include <string.h>
typedef struct movie {
    char name[32];
    int rank;
} movie_t;

void fill_movie(movie_t*m){
    strcpy(m->name, "BE ALL YOU CAN BE!");
    m->rank = 1;
}

int main()
{
    movie_t mymovie;
    fill_movie(&mymovie);
    printf("name = %s\n", mymovie.name);
    printf("ranking = %d\n", mymovie.rank);

    return 0;
}
