
# ft_printf

`ft_printf` is a custom implementation of the `printf` function from the C Standard Library, designed as a project for 42 School. This function formats and prints data to the standard output based on a format string and a variable number of arguments.

## Table of Contents

- [Features](#features)
- [Usage](#usage)
- [Installation](#installation)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Features

- Supports various format specifiers, including:
  - `%c` - Character
  - `%s` - String
  - `%d` - Integer
  - `%i` - Integer (same as `%d`)
  - `%u` - Unsigned integer
  - `%x` - Hexadecimal (lowercase)
  - `%X` - Hexadecimal (uppercase)
  - `%p` - Pointer
  - `%f` - Floating-point (limited support, depending on implementation)
  - `%%` - Literal percent sign
- Handles basic flags like `-`, `+`, `0`, and `#`
- Manages field width and precision
- Custom handling of negative numbers and precision

## Usage

To use `ft_printf` in your C project, include the header file `ft_printf.h` and link against the object file containing the implementation.

### Function Prototype

```c
int ft_printf(const char *format, ...);
```

### Parameters

- `format`: A format string that specifies how subsequent arguments (if any) are converted for output.
- `...`: Additional arguments to be formatted and printed according to the format string.

### Return Value

`ft_printf` returns the number of characters printed (excluding the null byte used to end output to strings).

## Installation

1. Clone the repository:

   ```sh
   git clone https://github.com/yourusername/ft_printf.git
   cd ft_printf
   ```

2. Compile the source files:

   ```sh
   make
   ```

   This will produce the `libftprintf.a` static library and the `ft_printf.o` object file.

3. Include the `ft_printf.h` header file in your project and link against `libftprintf.a`.

## Examples

Here are a few examples of how to use `ft_printf`:

### Example 1: Basic Usage

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```

Output:

```
Hello, world!
```

### Example 2: Formatting Integers

```c
#include "ft_printf.h"

int main() {
    int num = 42;
    ft_printf("The number is %d\n", num);
    return 0;
}
```

Output:

```
The number is 42
```

### Example 3: Hexadecimal Output

```c
#include "ft_printf.h"

int main() {
    int num = 255;
    ft_printf("Hexadecimal: %x\n", num);
    return 0;
}
```

Output:

```
Hexadecimal: ff
```

## Contributing

Contributions are welcome! If you have suggestions for improvements or find bugs, please submit an issue or a pull request on the GitHub repository.

### Guidelines

- Fork the repository
- Create a feature branch (`git checkout -b feature-branch`)
- Commit your changes (`git commit -am 'Add new feature'`)
- Push to the branch (`git push origin feature-branch`)
- Create a new Pull Request

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.