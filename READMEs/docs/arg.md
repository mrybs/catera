# CateraVK
###### Документация для разработчиков
###### arg

Небольшой класс для работы с аргументами ссылок

Объявление конкретного экземпляра обычно не используется, вместо этого
используют `std::vector<arg>` из библиотеки `<vector>`

Допустим, объявили вектор

```
std::vector<arg> args = {
    arg("name", "data"),
    arg("name2", "data2"),
    arg("name_n", "data_n")
};
```

При помощи специальных методов(например, `REQUEST_COMPONE` из 
`"api/http.hpp"`) можно преобразовать вектор в ссылку с аргументами

```
std::string link = REQUEST_COMPONE("https", "google.com/search", args);

std::cout << link; // https://google.com/search?name=data&name2=data2&name_n=data_n
```

Также, символы второго аргумента преобразуются в URL-код. Так, слово
`яблоко` преобразуется в `%D1%8F%D0%B1%D0%BB%D0%BE%D0%BA%D0%BE`

Про URL-код можно прочитать [здесь](../url-code.md)