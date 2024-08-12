This repository contains all the exercises i have completed from 42 Piscine program until now.

C00:
- Exercise 00: ft_putchar
-  Write a function that displays the character passed as a parameter.
It will be prototyped as follows :
void ft_putchar(char c)
you must use the write function

- Exercise 01: ft_print_alphabet
-  Create a function that displays the alphabet in lowercase, on a single line, by
ascending order, starting from the letter ’a’.
Here’s how it should be prototyped :
void ft_print_alphabet(void)

- Exercise 02: ft_print_reverse_alphabet
-  Create a function that displays the alphabet in lowercase, on a single line, by
descending order, starting from the letter ’z’.
Here’s how it should be prototyped :
void ft_print_reverse_alphabet(void)

- Exercise 03: ft_print_numbers
-   Create a function that displays all digits, on a single line, by ascending order.
Here’s how it should be prototyped :
 void ft_print_numbers(void)

- Exercise 04: ft_is_negative
-  Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered
 as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.
 • Here’s how it should be prototyped :
 void ft_is_negative(int n);

-  Exercise 05: ft_print_comb
-  Create a function that displays all different combinations of three different digits in
 ascending order, listed by ascending order- yes, repetition is voluntary.
 • Here’s the intended output :
 $>./a.out | cat-e
 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
 • 987 isn’t there because 789 already is.
 • 999 isn’t there because the digit 9 is present more than once.
 • Here’s how it should be prototyped :
 void ft_print_comb(void)

- Exercise 06: ft_print_comb2
-  Create a function that displays all different combination of two two digits numbers
 (XX XX) between 00 and 99, listed by ascending order.
 • Here’s the expected output :
 $>./a.out | cat-e
 00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
 • Here’s how it should be prototyped :
 void ft_print_comb2(void)


C01:
 - Exercise 00 : ft_ft
 -  Create a function that takes a pointer to int as a parameter, and sets the value "42"
 to that int.
 • Here’s how it should be prototyped :
 void
 ft_ft(int *nbr)

  - Exercise 01 : ft_ultimate_ft
• Create a function that takes a pointer to pointer to pointer to pointer to pointer
 to pointer to pointer to pointer to pointer to int as a parameter and sets the value
 "42" to that int.
 • Here’s how it should be prototyped :
 void
 ft_ultimate_ft(int *********nbr)

 - Exercise 02 : ft_swap
 -  Create a function that swaps the value of two integers whose addresses are entered
 as parameters.
 • Here’s how it should be prototyped :
 void
 ft_swap(int *a, int *b);

 - Exercise 03 : ft_div_mod
 -  • Create a function ft_div_mod prototyped like this :
 void
 ft_div_mod(int a, int b, int *div, int *mod);
 • This function divides parameters a by b and stores the result in the int pointed by
 div. It also stores the remainder of the division of a by b in the int pointed by mod.

- Exercise 04 : ft_ultimate_div_mod
-  Create a function ft_ultimate_div_mod with the following prototype :
 void
 ft_ultimate_div_mod(int *a, int *b);
 • This function divides parameters a by b. The result of this division is stored in the
 int pointed by a. The remainder of the division is stored in the int pointed by b.

 - Exercise 05 : ft_putstr
 • Create a function that displays a string of characters on the standard output.
 • Here’s how it should be prototyped :
 void
 ft_putstr(char *str)

 - Exercise 06 : ft_strlen
 -  • Create a function that counts and returns the number of characters in a string.
 • Here’s how it should be prototyped :
 int
 ft_strlen(char *str);

- Exercise 07 : ft_rev_int_tab
- • Create a function which reverses a given array of integer (first goes last, etc).
 • The arguments are a pointer to int and the number of ints in the array.
 • Here’s how it should be prototyped :
 void
 ft_rev_int_tab(int *tab, int size)

-  Exercise 08 : ft_sort_int_tab
-   Create a function which sorts an array of integers by ascending order.
 • The arguments are a pointer to int and the number of ints in the array.
 • Here’s how it should be prototyped :
 void
 ft_sort_int_tab(int *tab, int size)

C02:
- Exercise 00 : ft_strcpy
-  Reproduce the behavior of the function strcpy (man strcpy).
 • Here’s how it should be prototyped :
 char
 *ft_strcpy(char *dest, char *src)

- Exercise 01 : ft_strncpy
-  • Reproduce the behavior of the function strncpy (man strncpy).
 • Here’s how it should be prototyped :
 char
 *ft_strncpy(char *dest, char *src, unsigned int n);

-  Exercise 02 : ft_str_is_alpha
-   • Create a function that returns 1 if the string given as a parameter contains only
 alphabetical characters, and 0 if it contains any other character.
 • Here’s how it should be prototyped :
 int
 ft_str_is_alpha(char *str);
 • It should return 1 if str is empty

 - Exercise 03 : ft_str_is_numeric
  • Create a function that returns 1 if the string given as a parameter contains only
 digits, and 0 if it contains any other character.
 • Here’s how it should be prototyped :
 int
 ft_str_is_numeric(char *str);
 • It should return 1 if str is empty

- Exercise 04 : ft_str_is_lowercase
-  • Create a function that returns 1 if the string given as a parameter contains only
 lowercase alphabetical characters, and 0 if it contains any other character.
 • Here’s how it should be prototyped :
 int
 ft_str_is_lowercase(char *str);
 • It should return 1 if str is empty

- Exercise 05 : ft_str_is_uppercase
- • Create a function that returns 1 if the string given as a parameter contains only
 uppercase alphabetical characters, and 0 if it contains any other character.
 • Here’s how it should be prototyped :
 int
 ft_str_is_uppercase(char *str);
 • It should return 1 if str is empty

-  Exercise 06 : ft_str_is_printable
-   Create a function that returns 1 if the string given as a parameter contains only
 printable characters, and 0 if it contains any other character.
 • Here’s how it should be prototyped :
 int
 ft_str_is_printable(char *str);
 • It should return 1 if str is empty

-  Exercise 07 : ft_strupcase
-   • Create a function that transforms every letter to uppercase.
 • Here’s how it should be prototyped :
 char
 *ft_strupcase(char *str);
 • It should return str

- Exercise 08 : ft_strlowcase
-  Create a function that transforms every letter to lowercase.
 • Here’s how it should be prototyped :
 char
 *ft_strlowcase(char *str);
 • It should return str.
-  Exercise 09 : ft_strcapitalize
-  • Create a function that capitalizes the first letter of each word and transforms all
 other letters to lowercase.
 • Aword is a string of alphanumeric characters.
 • Here’s how it should be prototyped :
 char
 *ft_strcapitalize(char *str);
 • It should return str.
 • For example:
 salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
 • Becomes:
 Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un

-  Exercise 10 : ft_strlcpy
-   Reproduce the behavior of the function strlcpy (man strlcpy).
 • Here’s how it should be prototyped :
 unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)

C03:

- Exercise 00 : ft_strcmp
-  • Reproduce the behavior of the function strcmp (man strcmp).
 • Here’s how it should be prototyped :
 int
 ft_strcmp(char *s1, char *s2);

- Exercise 01 : ft_strncmp
-  • Reproduce the behavior of the function strncmp (man strncmp).
 • Here’s how it should be prototyped :
 int
 ft_strncmp(char *s1, char *s2, unsigned int n)

- Exercise 02 : ft_strcat
- • Reproduce the behavior of the function strcat (man strcat).
 • Here’s how it should be prototyped :
 char *ft_strcat(char *dest, char *src)

-  Exercise 03 : ft_strncat
-   • Reproduce the behavior of the function strncat (man strncat).
 • Here’s how it should be prototyped :
 char *ft_strncat(char *dest, char *src, unsigned int nb)

- Exercise 04 : ft_strstr
-  • Reproduce the behavior of the function strstr (man strstr).
 • Here’s how it should be prototyped :
 char
 *ft_strstr(char *str, char *to_find)

- Exercise 05 : ft_strlcat
- • Reproduce the behavior of the function strlcat (man strlcat).
 • Here’s how it should be prototyped :
 unsigned int ft_strlcat(char *dest, char *src, unsigned int size)

C04:

- Exercise 00 : ft_strlen
- • Create a function that counts and returns the number of characters in a string.
 • Here’s how it should be prototyped :
 int
 ft_strlen(char *str)

-  Exercise 01 : ft_putstr
-   Create a function that displays a string of characters on the standard output.
 • Here’s how it should be prototyped :
 void
 ft_putstr(char *str)

-  Exercise 02 : ft_putnbr
-   Create a function that displays the number entered as a parameter. The function
 has to be able to display all possible values within an int type variable.
 • Here’s how it should be prototyped :
 void ft_putnbr(int nb);
 • For example:
 ◦ ft_putnbr(42) displays "42"


