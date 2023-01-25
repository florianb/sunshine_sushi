#include <stdio.h>
#include <string.h>

typedef struct {
    char name[16];
    float price;
} dish;

struct order {
    char name[16];
    unsigned long count;
};

// Enums legen eine "Konstante" (wie const EXIT = 0) an
enum command {
    UNKNOWN = -1,
    EXIT = 0,
    ORDER = 1,
    CLOSE_ORDER = 2
};

const dish DISHES[] = {
        {"sake maki", 5.99f },
        {"sake nigiri", 4.99f }
};

void print_welcome() {
    puts("\n(・3・)\n  Welcome to the fabulous sunshine sushi manager!\n");
    puts("  Available commands:");
    puts("    exit                  - exits this program");
    puts("    order <number> <dish> - adds a dish to the current order");
    puts("    close order           - closes the current order and prints the bill");
    puts("\n  Use Ctrl+C or 'exit' to quit.\n");
}

enum command get_command(char *input) {
    if (strstr(input, "exit") == input) {
        return EXIT;
    }

    if (strstr(input, "order") == input) {
        return ORDER;
    }

    if (strstr(input, "close order") == input) {
        return CLOSE_ORDER;
    }

    return UNKNOWN;
}

const dish *get_dish_by_name(char *name) {
    int dishes_count = sizeof(DISHES) / sizeof(dish);

    for (int i = 0; i < dishes_count; i++) {
        if (strcmp(name, DISHES[i].name) == 0) {
            return &DISHES[i];
        }
    }

    return NULL;
}

int main() {
    setbuf(stdout, 0); // Fix, damit die Ausgabe auch im Debugger funktioniert - bitte ignorieren

    char input[64] = "";
    int order_count = 0;
    struct order orders[10] = {};
    enum command current_command = EXIT;
    int received = 0;
    float sum = 0.0f;

    print_welcome();

    do {
        fputs("> ", stdout); // Sendet die Zeichen "> " zur Standardausgabe
        fflush(stdout); // Erzwingt die vollständige Ausgabe des Buffers

        // get_s: gibt 0 zurück wenn es einen Fehler gab
        if (gets(input) == 0) {
            puts("error: input failure.");
        }

        current_command = get_command(input);
        switch (current_command) {
            case ORDER:
                received = sscanf(input,
                       "order %lu %15[ a-zA-Z]",
                       &orders[order_count].count,
                       orders[order_count].name);

                if (received == 2) {
                    order_count++;
                    printf("Order position %d added.\n", order_count);
                }
                break;

            case CLOSE_ORDER:
                sum = 0.0f;

                puts("\nBill\n----");
                for (int i = 0; i < order_count; i++) {
                    const dish *curr_dish = get_dish_by_name(orders[i].name);

                    if (curr_dish == 0) {
                        printf("Dish '%s' could not be found. Order discarded.\n", orders[i].name);
                        order_count = 0;
                        continue;
                    }

                    sum = sum + (float) orders[i].count * curr_dish->price;
                    printf("%d. %lu x %s: %f EUR\n",
                           i + 1,
                           orders[i].count,
                           orders[i].name,
                           (float) orders[i].count * curr_dish->price);
                }
                printf("Total: %f EUR\n", sum);
                break;

            case UNKNOWN:
                printf("Unknown command '%s'\n", input);
                break;
        }
    } while (current_command != EXIT);

    puts("bye.");
    return 0;
}
