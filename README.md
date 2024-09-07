# Задание к лекции 1 | Вариант 2 (реализовано на C++)

> _В репозитории содержится 2 исполняемых файл_ **Main** (для MacOS) и **Main.exe** для OS Windows

### Для написания программы были использованы следующие формулы:

## Режим 1. **Преобразование из Декартовой системы координат в Полярную**

#### Формулы:
- Радиус \( r \) вычисляется по формуле:
  r = sqrt(x^2 + y^2)

- Угол \( theta \) вычисляется по формуле:
  theta = `atan2`(y, x)

  Функция `atan2(y, x)` возвращает угол в радианах.

## Режим 2. **Преобразование из Полярной системы координат в Декартову**

#### Формулы:
- \( x \) вычисляется по формуле:
  x = r * cos(theta)

- \( y \) вычисляется по формуле:
  y = r * sin(theta)



