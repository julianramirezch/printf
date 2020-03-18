# Build your own **printf**

Background
In the early days, computer programmers would
write their own subroutines to read in and print out
numbers. It is not terribly difficult, actually. Just
allocate a character array to hold the result, divide
the number by ten, keep the remainder, add x30 to
it, and store it at the end of the array. Repeat the
process until all the digits are found. Then print it.
Too easy, right?
But even though it was easy (for Einstein), it still
took some effort. And what about error checking,
and negative numbers? So the computer programmers brought forth libraries of prerecorded functions. And it was good. Eventually the most popular
of these functions were canonized into membership
in the “standard” libraries. Number printing was
popular enough to gain this hallowed honor.
This meant that programmers did not have to
reinvent the number-printing subroutine again and
again. It also meant that everybody’s favorite options tried to make it into the standard.
Thus was printf born.
2 Simple Printing
In the most simple case, printf takes one argument:
a string of characters to be printed. This string is
composed of characters, each of which is printed exactly as it appears. So printf("xyz"); would simply print an x, then a y, and finally a z. This is not
exactly “formatted” printing, but it is still the basis
of what printf does.
2.1 Naturally Special Characters
To identify the start of the string, we put a doublequote (") at the front. To identify the end of the
string we put another double-quote at the end. But
what if we want to actually print a double-quote?
We can’t exactly put a double-quote in the middle
of the string because it would be mistaken for the
end-of-string marker. Double-quote is a special character. The normal print-what-you-see rules do not
apply.
Different languages take different approaches to
this problem. Some require the special character to
be entered twice. C uses backslash (virgule, \) as
an escape character to change the meaning of the
next character after it. Thus, to print a doublequote you type in backslash double-quote. To print
a backslash, you must escape it by typing another
backslash in front of it. The first backslash means
“give the next character its alternate meaning.” The
second backslash has an alternate meaning of “print
a backslash.”
Without a backslash, special characters have a
natural special meaning. With a backslash they
print as they appear. Here is a partial list.





The printf function is a powerful device for printing numbers and other things stored in variables.
With this power there is a certain amount of complexity. Taken all at once, the complexity makes
printf seem almost impossible to understand. But
the complexity can be easily unfolded into simple
features, including width, precision, signage, justification, and fill. By recognizing and understanding these features, printf will become a useful and
friendly servant in your printing endeavors.

https://dillinger.io/
https://jbt.github.io/markdown-editor/
# New Documentdsadasd
![](https://pandao.github.io/editor.md/images/logos/editormd-logo-180x180.png)
sadsada
# Files

StackEdit stores your files in your browser, which means all your files are automatically saved locally and are accessible **offline!**
## SmartyPants

SmartyPants converts ASCII punctuation characters into "smart" typographic punctuation HTML entities. For example:

|                |ASCII                          |HTML                         |
|----------------|-------------------------------|-----------------------------|
|Single backticks|`'Isn't this fun?'`            |'Isn't this fun?'            |
|Quotes          |`"Isn't this fun?"`            |"Isn't this fun?"            |
|Dashes          |`-- is en-dash, --- is em-dash`|-- is en-dash, --- is em-dash|
https://pandao.github.io/editor.md/en.html
https://stackedit.io/app#
=======
# PRINTF

![](https://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_example_es.png)

----
**Table of Contents**

[TOCM]

[TOC]

###C
que es c y para que sirve
####Ejemplos de c🤓

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

    _printf("Hello World");

}
```


####como instalarlo
-------------
s dsads dsd sds . dsd sd s s d s sds

####con que se puede compilar
-------------
d sd sds sd s dsd s ds ds dds

###Links
`<link>` : <https://github.com>
`<link>` : <https://github.com>

###Tablas

| Left-Aligned  | Center Aligned  | Right Aligned |
| :------------ |:---------------:| -----:|
| col 3 is      | some wordy text | $1600 |
| col 2 is      | centered        |   $12 |
| zebra stripes | are neat        |    $1 |


###FlowChart

```flow
st=>start: Login
op=>operation: Login operation
cond=>condition: Successful Yes or No?
e=>end: To admin

st->op->cond
cond(yes)->e
cond(no)->op
```
