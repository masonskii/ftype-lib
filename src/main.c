#include "./include/Map.h"
int main() {
    Map map;
    initializeMap(&map, 5);

    // Добавление пар "ключ-значение"
    addKeyValuePair(&map, "apple", 5);
    addKeyValuePair(&map, "banana", 10);
    addKeyValuePair(&map, "orange", 15);

    // Получение значений по ключам
    printf("apple: %d\n", getValue(&map, "apple"));
    printf("banana: %d\n", getValue(&map, "banana"));
    printf("orange: %d\n", getValue(&map, "orange"));
    printf("grape: %d\n", getValue(&map, "grape")); // Несуществующий ключ

    // Освобождение памяти, занятой Map
    freeMap(&map);

    return 0;
}