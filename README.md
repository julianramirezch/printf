

# Build your own **printf**

The printf function is a powerful device for printing numbers and other things stored in variables. With this power there is a certain amount of complexity. Taken all at once, the complexity makes printf seem almost impossible to understand. But the complexity can be easily unfolded into simple features, including width, precision, signage, justification, and fill. By recognizing and understanding these features, printf will become a useful and friendly servant in your printing endeavors.

![](https://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_example_es.png)

## SmartyPants
Flag that printf can recive

| FLAG  | WHAT THAT MEANS 
| ------ | ------ |
 `%c`  |It must be for char or ASCII |
| `%s` | It's for string  |
| `%%`| it's for display numbers |
| `%d` | it's for show natural numbers and negative |
| `%b` |  it's for display binary numbers |
| `%u` |  it's for only natural numbers |
| `%o` |  display numbers in octal |
| `%x` | display numbers in hexadecimal |
| `%X` | display numbers in hexadecimal but in uppercase |
| `%r` | reverse the string |
| `%R` |prints the rot13'ed string |


# C
> "System programming language" developed in 1972 by Dennis Ritchie for UNIX a cross-platform operating system. C is a general purpose programming language that offers syntactic economy, flow control and simple structures and a good set of operators.

### Ejemplos de c🤓

```c
#include "holberton.h"

void main()
{

    _printf("Hello World");

}
```
### otro ejemplo 🤯
```c
#include "holberton.h"

void main()
{

	_printf("Real: [%u]\n", -768687);

}
```


#### How to install it
-------------
```c
git clone git@github.com:julianramirezch/printf.git
mkdir main.c
```
It is important that there is a main file so that the function _print can be run without problem
##### compile with gcc
```c
gcc -Wall -Werror -Wextra -pedantic -std=c90 -Wno-format *.c -g
```

### Flowchart
![](https://www.lucidchart.com/publicSegments/view/b3e67873-aa4e-4bda-9247-4968fda4f09b/image.png)

### Links of creators
`<link>` : **https://github.com/julianramirezch**
`<link>` : **https://github.com/andresvanegas19**


### version

```sh
1.32
```

### Authors

 - Andres Reyes
 - Julian Chacón

License
----

MIT


**Free Software**
