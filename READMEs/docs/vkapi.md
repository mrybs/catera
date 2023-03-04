# CateraVK
###### Документация для разработчиков
###### VK API

Функционал для работы с API находится в папке `/api`

Для использования VK API нужно подключить заголовочный файл `/api/api.h`

Соответственно,

`#include "api/api.h"`

Объявить класс можно конструкцией

```
//Где-то в классе

private:
    api *vk;
    logger *Logger;
```

```
//Где-то в конструкторе

Logger = new logger(PROGRAM_DATA_PATH + "/log.txt");
vk = new api("5.131", TOKEN, *Logger);
```

В данном примере используется версия "5.131", она же и указывается

Использование методов выполняется через этот экземляр класса:

```
nlohmann::json result = vk->wall_post({
    arg("message", "Test message")
});

//Смотрим ID поста
std::cout << to_string(result);
```

В качестве возвращаемого значения передается `nlohmann::json`, документация [здесь](https://github.com/nlohmann/json#readme)

Также передается объект типа `arg`, документация [здесь](arg.md)