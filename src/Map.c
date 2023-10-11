#include "Map.h"


/*  Initialization Map    */
void initializeMap(Map* map, int initialCapacity){
    map->size = 0;
    map->capacity = initialCapacity;
    map->pairs = (KeyValuePair*) malloc(initialCapacity * sizeof(KeyValuePair));
}

/*  Checking for using key in map   */

int containsKey(const Map* map, const char* key){
    for (int i = 0; i < map->size; i++) {
        if (strcmp(map->pairs[i].key, key) == 0) {
            return 1;  // Ключ найден
        }
    }
    return 0;  // Ключ не найден
}

// Получение значения по ключу
int getValue(const Map* map, const char* key) {
    for (int i = 0; i < map->size; i++) {
        if (strcmp(map->pairs[i].key, key) == 0) {
            return map->pairs[i].value;  // Возвращаем значение для найденного ключа
        }
    }
    return -1;  // Ключ не найден, возвращаем значение по умолчанию
}

// Добавление пары "ключ-значение" в Map
void addKeyValuePair(Map* map, const char* key, int value) {
    if (containsKey(map, key)) {
        printf("Ключ уже существует: %s\n", key);
        return;
    }
  
    KeyValuePair pair;
    pair.key = (char*)malloc((strlen(key) + 1) * sizeof(char));
    strcpy(pair.key, key);
    pair.value = value;
  
    // Увеличиваем емкость массива, если необходимо
    if (map->size == map->capacity) {
        int newCapacity = map->capacity * 2;
        map->pairs = (KeyValuePair*)realloc(map->pairs, newCapacity * sizeof(KeyValuePair));
        map->capacity = newCapacity;
    }
  
    map->pairs[map->size++] = pair;
}

// Освобождение памяти, занятой Map и его элементами
void freeMap(Map* map) {
    for (int i = 0; i < map->size; i++) {
        free(map->pairs[i].key);
    }
    free(map->pairs);
    map->size = 0;
    map->capacity = 0;
}