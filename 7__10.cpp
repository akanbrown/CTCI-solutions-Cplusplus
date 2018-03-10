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
struct Object { ... };
struct RefCountPtrImpl {
  int count;
  Object * object;
};
struct RefCountPtr{
  RefCountPtrImpl * pointee;
}
Advantages: no memory overhead because of two pointers.
Disadvantages: performance penalty because of extra level of indirection

3. Intrusive refernece counting.
struct Object { ... };
struct ObjectIntrusiveReferenceCounting {
  struct ObjectIntrusiveReferenceCounting {
  int count;
};
struct RefCountPtr {
  ObjectIntrusiveReferenceCounting * pointee;
};
Advantages: no previous disadvantages
Disadvantages: class for intrusive refernece counting should be modified.

4. Ownership list reference counting. It is an alternative for 
approach 1-3. For 1-3 it is only important to determine that 
counter is zero--its actual value is not important. This is 
the main idea of approach #4.

list reference counting. It is an alternative for approach 1-3. 
