# Longest Possible C Declaration | c-longest-decl
> Created by Nicholas Ramsay

This is a pointless exploration of the longest possible C declaration. 

* I am using the GNU C compiler "clang", version C11. 
* I'm disallowing the use of typedefs and definition macros. 
* "Length" in this context is measured by word count.

## The longest C declaration
```c
_Atomic volatile const _Alignas(64) _Thread_local static unsigned long long int _Complex * const restrict very_long_var;
```