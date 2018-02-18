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
    int last_drink = -1;
    while(1) {
        for (iter_x = 0; iter_x < CHARACTER_COUNT; iter_x++) {
            int clone_count = clone_counter[iter_x];
            drink_counter += clone_count;
            int generated_clones = clone_count * clone_multiplier;
            clone_counter[iter_x] = generated_clones;
            if (drink_counter >= available_drinks) {
                last_drink = iter_x;
                break;
            }
        }
        if (last_drink != -1) {
            break;
        }
    }
    printf("%d", last_drink);
    return 0;
}
