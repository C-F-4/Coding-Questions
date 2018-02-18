/*
Our big brothers ---- Giri, Perichi, Collin, Clinton, Karthi and Jeeva are in the queue for a "Triple Pepsi" drink vending machine;
there are no other people in the queue. The first one in the queue (Giri) buys a can, drinks it and triples! The resulting three
Giris go to the end of the queue. Then the next in the queue (Perichi) buys a can, drinks it and gets to the end of the queue as
three Perichis, and so on. This process continues ad infinitum.

For example, if our brother Collin drinks the third can of pepsi , the queue will look like this: Clinton, Karthi, Jeeva, Giri,
Giri, Giri, Perichi, Perichi, Perichi, Collin, Collin, Collin

Write a program that will print the name of a man who will drink the n-th can.

Note that in the very beginning the queue looks like that: Giri, Perichi, Collin, Clinton, Karthi, Jeeva . The first person is Giri.

Input Format
The input data consist of a single integer n (1 ≤ n ≤ 5000).

Output Format
Print the single line — the name of the person who drinks the n-th can of pepsi. The cans are numbered starting from 1. Please note
that you should spell the names like this: “Giri”, “Perichi”, “Collin”, “Clinton”, “Karthi”, “Jeeva” (without the quotes). In that
order precisely the brothers are in the queue initially.

Sample Input 1
 1

Sample Output 1
 Giri

Sample Input 2
 7
Sample Output 2
 Giri

Sample Input 3
 1802

Sample Output 3
 Karthi

Sample Input 4
 -10

Sample Output 4
 Invalid Input

9/11 1 .. 4 5 6 7 8 9 10 11
 */

#include <stdio.h>

#define CHARACTER_COUNT 6

int main(void) {
    int drink_counter = 0;
    char character_array[CHARACTER_COUNT] = {'0', '1', '2', '3', '4', '5'};
    int clone_counter[CHARACTER_COUNT] = {1, 1, 1, 1, 1, 1};
    const int clone_multiplier = 3;
    int iter_x = 0;
    int available_drinks = 0;
    int last_drink = ' ';
    scanf("%d", &available_drinks);
    if (available_drinks >= 1 && available_drinks <= 5000) {
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
    } else {
        printf("Invalid Number of Available Drinks data has been fed.");
    }
    return 0;
}
