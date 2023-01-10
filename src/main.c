#include <stdio.h>

// "unsigned long long int* is the longest type
// const can be used twice, both as a const pointer and as a pointer to a const 

// ISO C99 added complex number support via the _Complex keyword
// ISO C11 adds more keywords that could be used, notably _Atomic, _Complex, _Alignas
// _Atomic volatile const _Alignas(64) auto unsigned long long int _Complex * const restrict ptr;
// _Thread_local can be used alongside only "static" (static becomes redundant), therefore the declaration must be translation unit scope
_Atomic volatile const _Alignas(64) _Thread_local static unsigned long long int _Complex * const restrict ptr;

// within a function declaration, the keyword "inline" could be used as well
// only the storage-class specifier "static" or "extern" can be used
// unfortunately, _Alignas and _Thread_localonly only work for variables, so we are worse off in terms of word count
inline _Atomic volatile const  static unsigned long long int _Complex * const restrict long_func();

// Microsoft specific compiler implementations allow even more words within the __declspec(...) storage class specifier 
// I cant personally confirm that these keywords would compile with gcc
// it would look like:
// _Atomic volatile __declspec(thread naked) const _Alignas(64) _Thread_local static unsigned long long int _Complex * const restrict microsoft_only;

int main(int argc, char **argv) {
	printf("It runs!\n");
	return 0;
}