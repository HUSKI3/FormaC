# FormaC

A programming language made for simplicity and ease of use. Forma is a C++ derivative with a pythonic syntax, it still maintains a few parts of the C++ language.

> Imports have been added, but should be used with care. Very WIP!

# Mini Guide/Docs
### How to compile
To compile you need to use the included formac++, which can be either found in releases or in the master branch.
```sh
$ cp -r formac++ /bin
$ formac++ -v
Welcome to FormaC++ v3.0
=========================
Forma V3.0
Build: 107
Built on C++: Clang++7
=========================
$
```
### Variables
In Forma there are multiple ways to store data, they are called variable types. Each of them are:
  - String - for storing words, sentences or any data that is in text format
  - Integers - for storing numbers, these can be positive, negative or zero, but no decimal places cause thats floats
  - Floats - for storing numbers with a decimal point (get it? floating point? yeah fun)
  - Char - Char can be used to store characters
  - Arrays - lists are for storing multiple variables in one place, something like [string,int,andsoforth]
  - Dictionaries - like lists but have keys to locate the data in the list, ie. {1: 'apple', 2: 'ball'}, the numbers are keys in this case, but they can also be strings.

### Built-in functions

Forma has multiple built in functions:

* `print << "Hello world!" ` - displays the data which is inserted into the function using <<
* `input >> x` - this will take input from your keyboard and store it in the variable x 
* `if (x == 0) {` - if else, works like in C++
* `import math.lib` - WIP,imports are really WIP, please trust me.
* `block.object` - WIP, allows to store variables and control a prebuilt class, to use it just include it in your code as one of the top lines, and create the object using `BlockObject obj;`.
* `// this is a comment` - although comments arent a function, they must be used with care, if they are not closed the proram will give an error and refuse to compile

Built-in operators in Forma:
```c++
int x = 15;
int y = 4;

//Output: x + y = 19
print << 'x + y =' << x+y;

//Output: x - y = 11
print << 'x - y =' << x-y;

//Output: x * y = 60
print << 'x * y =' << x*y;

//Output: x / y = 3.75
print << 'x / y =' << x/y;
```

More functions can be imported or created.

### Installing packages

Soon

### Example of a small program
```c++
block.object
int main()
{
BlockObject obj;
obj.setid(3);
obj.getid();
print << "\n" << "Forma is cool" << "\n";
return 0;
}
```


