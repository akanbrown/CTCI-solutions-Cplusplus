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
**/

public static ArrayList<string> getPerms(String s){
  ArrayList<String> permutations = new ArrayList<string>();
  if (s == null){ // error case
    return null;
  } else if (s.length() == 0){
      permutations.add("");
      return permuations;
  }

  char fist = s.charAt(0); //get the first character
  String remainder = s.substring(1); //remove the first character
  ArrayList<String> words = getPerms(remainder);
  for (String word : words){
    for (int j=0;j<=word.length();j++){
      permutations.add(insertCharAt(word, first, j));
    }
  }
  return permutations;
}

public static String insertCharAt(String word, char c, int i){
  String start = word.substring(0, i);
  String end = word.substring(i);
  return start + c + end;
}

/**
This solution takes O(n!) time, since there are n! permutations. 
**/
