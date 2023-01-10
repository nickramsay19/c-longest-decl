#include <stdio.h>

int main(int argc, char **argv) {

	// most words in a single declaration (pre C99):
	//volatile register const unsigned long long int * const restrict ptr_1;

	// "unsigned long long int" is the longest(by word count) type
	// The above is both a const ptr and a "pointer const", i.e a const pointer to a const var
	// I chose "register" as opposed to "auto" (the default), "static" or "extern"

	// ISO C99 added complex number support via the _Complex keyword
	// ISO C11 adds more keywords that could be used, notably "_Atomic"
	_Atomic volatile register const unsigned long long int _Complex * const restrict ptr;

	// Microsoft specific compiler implementations allow even more words within the __declspec(...) storage class specifier 
	// I cant use these though :(
	// _Atomic volatile __declspec(thread naked) const unsigned long long int _Complex * const restrict ptr_3;

	printf("Working!\n");

	return 0;
}

// within a function declaration, the keyword "inline" could be used as well
// however, only the storage-class specifier "static" or "extern" can be used
inline _Atomic volatile extern const unsigned long long int _Complex * const restrict func();
