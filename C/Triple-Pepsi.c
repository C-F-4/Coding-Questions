#include <stdio.h>

#define CHARACTER_COUNT 6

int main(void) {
    int drink_counter = 0;
    char character_array[CHARACTER_COUNT] = {'0', '1', '2', '3', '4', '5'};
    int clone_counter[CHARACTER_COUNT] = {1, 1, 1, 1, 1, 1};
    const int clone_multiplier = 3;
    int iter_x = 0;
    int available_drinks = 0;
    scanf("%d", &available_drinks);
    int last_drink = ' ';
    while(1) {
        for (iter_x = 0; iter_x < CHARACTER_COUNT; iter_x++) {
            int clone_count = clone_counter[iter_x];
            drink_counter += clone_count;
            int generated_clones = clone_count * clone_multiplier;
            clone_counter[iter_x] = generated_clones;
            if (drink_counter >= available_drinks) {
                last_drink = character_array[iter_x];
                break;
            }
        }
        if (last_drink != ' ') {
            break;
        }
    }
    printf("%c: ", last_drink);
    switch(last_drink) {
    case '0':
        printf("Giri");
        break;
    case '1':
        printf("Perichi");
        break;
    case '2':
        printf("Collin");
        break;
    case '3':
        printf("Clinton");
        break;
    case '4':
        printf("Karthi");
        break;
    case '5':
        printf("Jeeva");
        break;
    default:
        printf("Something broke");
        break;
    }
    return 0;
}
