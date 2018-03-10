/**
Describe the data structures and algorithms 
that you would use to implement a garbage collector in C++.
**/

/**
In C++, garbage collection with reference counting 
is almost always implemented with smart pointers,
which perform reference counting. The main reason 
for using smart pointers over raw ordinary pointers
is the conceptual simplicity of implementation and usage.

**/
/**
With smart pointers, everything related to garbage 
collection is performed behind the scenes - typically 
in constructors / destructors / assignment operator /
explicit object management functions.

There are two types of functions, both of which are very simple: 
RefCountPointer::type1(){
/* implementation depends on reference counting organization.
* There can also be no ref. counter at all (see approach #) */

/**
incrementRefCounter(); }

RefCountPointer::type2(){
/* Implementation depends on refernece counting organization.
* There can also be no ref. counter at all (see approach #4). */

/**
decrementRefCounter();
if (referenceCounterIsZero()){
  if (referenceCounterIsZero()){
    destructObject();
  }
}

There are several approaches for reference counting an dimplementation in C++:
1.Simple reference counting. 
struct Object { };
struct RefCount {
  int count;
};
struct RefCountPtr {
Object * pointee;
RefCount * refCount;
};

};
Advantages: performance.
Disadvantages: memory overhead because of two pointers.

2. Alternative reference counting.
