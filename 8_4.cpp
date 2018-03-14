/** 
Write a method to compute
all permutations of a string 
**/

/**
Let's assume a given string S represented by the letters A1, A2, A3, ..., An
To permute set S, w ecan select the first character, A1, permute the remainder
of the strin got get a new list. Then, with ha tnew list, we can "push" A1 into each possible position.
**/

/**
For example, if our string is "abc", we would do the following: 
1. Let first = "a" and let remainder = "bc"
2. Let list = permute(bc) = ("bc", "cd")
3. Push "a" into each location of "bc" (--> "abc", "bac", "bca") and "cb" (--> "acb", "cab", "cba")
4. Return our new list

Now the code to do this:
